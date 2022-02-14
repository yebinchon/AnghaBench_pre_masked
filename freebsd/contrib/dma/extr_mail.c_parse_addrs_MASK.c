
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {int dummy; } ;
struct parse_state {int state; int pos; int esc; int quote; int brackets; char* addr; scalar_t__ comment; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 scalar_t__ FUNC_0 (struct queue*,char*,int ) ;
 int FUNC_1 (struct parse_state*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 char* FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(struct parse_state *VAR_3, char *VAR_4, struct queue *VAR_5)
{
 char *VAR_6;

again:
 switch (VAR_3->state) {
 case 130:
  return (-1);

 case 128:

  FUNC_1(VAR_3, sizeof(*VAR_3));


  while (*VAR_4 != ':')
   VAR_4++;
  VAR_4++;
  VAR_3->state = 131;
  break;

 case 131:

  break;

 case 132:
  switch (*VAR_4) {
  case ' ':
  case '\t':
   VAR_4++;

   break;

  default:
   VAR_3->state = 129;
   if (VAR_3->pos != 0)
    goto newaddr;
   return (0);
  }

 case 129:
  return (0);
 }

 for (; *VAR_4 != 0; VAR_4++) {
  if (VAR_3->esc) {
   VAR_3->esc = 0;

   switch (*VAR_4) {
   case '\r':
   case '\n':
    goto err;

   default:
    goto copy;
   }
  }

  if (VAR_3->quote) {
   switch (*VAR_4) {
   case '"':
    VAR_3->quote = 0;
    goto copy;

   case '\\':
    VAR_3->esc = 1;
    goto copy;

   case '\r':
   case '\n':
    goto eol;

   default:
    goto copy;
   }
  }

  switch (*VAR_4) {
  case '(':
   VAR_3->comment++;
   break;

  case ')':
   if (VAR_3->comment)
    VAR_3->comment--;
   else
    goto err;
   goto skip;

  case '"':
   VAR_3->quote = 1;
   goto copy;

  case '\\':
   VAR_3->esc = 1;
   goto copy;

  case '\r':
  case '\n':
   goto eol;
  }

  if (VAR_3->comment)
   goto skip;

  switch (*VAR_4) {
  case ' ':
  case '\t':

   goto skip;

  case '<':

   VAR_3->brackets = 1;
   VAR_3->pos = 0;
   goto skip;

  case '>':
   if (!VAR_3->brackets)
    goto err;
   VAR_3->brackets = 0;

   VAR_4++;
   goto newaddr;

  case ':':

   VAR_3->pos = 0;
   goto skip;

  case ',':
  case ';':
   if (VAR_3->pos == 0)
    goto skip;
   VAR_4++;
   goto newaddr;

  default:
   goto copy;
  }

copy:
  if (VAR_3->comment)
   goto skip;

  if (VAR_3->pos + 1 == sizeof(VAR_3->addr))
   goto err;
  VAR_3->addr[VAR_3->pos++] = *VAR_4;

skip:
  ;
 }

eol:
 VAR_3->state = 132;
 return (0);

err:
 VAR_3->state = 129;
 return (-1);

newaddr:
 VAR_3->addr[VAR_3->pos] = 0;
 VAR_3->pos = 0;
 VAR_6 = FUNC_4(VAR_3->addr);
 if (VAR_6 == ((void*)0))
  FUNC_2(VAR_2, "strdup");

 if (FUNC_0(VAR_5, VAR_6, VAR_0) != 0)
  FUNC_3(VAR_1, "invalid recipient `%s'", VAR_6);

 goto again;
}
