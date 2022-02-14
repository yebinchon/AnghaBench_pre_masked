
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char*) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

int FUNC_8 ()
{
 int VAR_8;
 static int VAR_9 = 0;
 extern char *VAR_10;

 if (VAR_1)
  VAR_8 = VAR_0;
 else
  VAR_8 = FUNC_1 ();

 if (VAR_8 == VAR_0 || VAR_8 == 0) {
  VAR_1 = 1;

  if (VAR_4 == 1) {
   FUNC_7 (FUNC_0("premature EOF"));
   VAR_4 = 2;
   VAR_8 = 129;
  }

  else
   VAR_8 = 0;
 }

 if (VAR_6) {
  if (VAR_9) {
   FUNC_2 (VAR_5, "%d\t", VAR_3 + 1);
   VAR_9 = 0;
  }

  switch (VAR_8) {
  case '<':
  case '>':
  case '^':
  case '$':
  case '"':
  case '[':
  case ']':
  case '{':
  case '}':
  case '|':
  case '(':
  case ')':
  case '-':
  case '/':
  case '\\':
  case '?':
  case '.':
  case '*':
  case '+':
  case ',':
   (void) FUNC_6 (VAR_8, VAR_5);
   break;

  case '\n':
   (void) FUNC_6 ('\n', VAR_5);

   if (VAR_4 == 2)
    VAR_9 = 1;

   break;

  case 130:
   FUNC_3 ("%s", VAR_5);
   break;

  case 128:
   FUNC_3 ("%x", VAR_5);
   break;

  case 129:
   FUNC_3 ("%%\n", VAR_5);





   if (VAR_4 == 2)
    VAR_9 = 1;

   break;

  case 136:
   FUNC_2 (VAR_5, "'%s'", VAR_2);
   break;

  case 138:
   switch (VAR_7) {
   case '<':
   case '>':
   case '^':
   case '$':
   case '"':
   case '[':
   case ']':
   case '{':
   case '}':
   case '|':
   case '(':
   case ')':
   case '-':
   case '/':
   case '\\':
   case '?':
   case '.':
   case '*':
   case '+':
   case ',':
    FUNC_2 (VAR_5, "\\%c", VAR_7);
    break;

   default:
    if (!FUNC_4 (VAR_7) || !FUNC_5 (VAR_7))
     FUNC_2 (VAR_5,
       "\\%.3o",
       (unsigned int) VAR_7);
    else
     (void) FUNC_6 (VAR_7, VAR_5);
    break;
   }

   break;

  case 135:
   FUNC_2 (VAR_5, "%d", VAR_7);
   break;

  case 131:
   FUNC_2 (VAR_5, "[%d]", VAR_7);
   break;

  case 137:
   FUNC_2 (VAR_5, "<<EOF>>");
   break;

  case 134:
   FUNC_2 (VAR_5, "%s ", VAR_10);
   break;

  case 133:
  case 132:
  case 150:
  case 149:
  case 148:
  case 147:
  case 146:
  case 145:
  case 144:
  case 143:
  case 142:
  case 141:
  case 140:
  case 139:
   FUNC_2 (VAR_5, "%s", VAR_10);
   break;

  case 0:
   FUNC_2 (VAR_5, "%s", FUNC_0("End Marker\n"));
   break;

  default:
   FUNC_2 (VAR_5,
     FUNC_0
     ("*Something Weird* - tok: %d val: %d\n"),
     VAR_8, VAR_7);
   break;
  }
 }

 return VAR_8;
}
