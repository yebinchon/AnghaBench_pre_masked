
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct symbol {int dummy; } ;
struct TYPE_14__ {int is_a_field_of_this; struct symbol* sym; } ;
struct TYPE_13__ {int type; } ;
struct TYPE_16__ {char* ptr; int length; } ;
struct TYPE_15__ {TYPE_2__ ssym; TYPE_1__ tsym; TYPE_5__ sval; int opcode; int lval; } ;
typedef TYPE_3__ YYSTYPE ;
struct TYPE_19__ {scalar_t__ la_language; } ;
struct TYPE_18__ {int token; int opcode; int * operator; } ;
struct TYPE_17__ {int token; int opcode; int * operator; } ;
struct TYPE_12__ {int value; int * name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 TYPE_11__* VAR_9 ;
 int VAR_10 ;
 char* FUNC_3 (TYPE_5__) ;
 TYPE_9__* VAR_11 ;
 TYPE_8__* VAR_12 ;
 int FUNC_4 (char*,...) ;
 int VAR_13 ;
 TYPE_7__* VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 char* VAR_17 ;
 int FUNC_5 (char*) ;
 struct symbol* FUNC_6 (char*,int ,int ,int*,int *) ;
 unsigned int FUNC_7 () ;
 int FUNC_8 (char*,char*,int) ;
 int VAR_18 ;
 int FUNC_9 (char*,int,int,TYPE_3__*) ;
 char* VAR_19 ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (char*,int *,int ) ;
 int FUNC_12 (TYPE_5__) ;
 TYPE_3__ VAR_20 ;

__attribute__((used)) static int
FUNC_13 ()
{
  int VAR_21;
  int VAR_22;
  unsigned int VAR_23,VAR_24;
  char *VAR_25;

 retry:

  VAR_19 = VAR_17;

  VAR_25 = VAR_17;




  if (*VAR_17 == '.')
    {
      for (VAR_23 = 0; VAR_9[VAR_23].name != ((void*)0); VAR_23++)
 {
   if (FUNC_11 (VAR_25, VAR_9[VAR_23].name,
         FUNC_10 (VAR_9[VAR_23].name)) == 0)
     {
       VAR_17 += FUNC_10 (VAR_9[VAR_23].name);
       VAR_20.lval = VAR_9[VAR_23].value;
       return VAR_0;
     }
 }
    }



  for (VAR_23 = 0; VAR_12[VAR_23].operator != ((void*)0); VAR_23++)
    if (FUNC_11 (VAR_25, VAR_12[VAR_23].operator, FUNC_10 (VAR_12[VAR_23].operator)) == 0)
      {
 VAR_17 += FUNC_10 (VAR_12[VAR_23].operator);
 VAR_20.opcode = VAR_12[VAR_23].opcode;
 return VAR_12[VAR_23].token;
      }

  switch (VAR_21 = *VAR_25)
    {
    case 0:
      return 0;

    case ' ':
    case '\t':
    case '\n':
      VAR_17++;
      goto retry;

    case '\'':
      VAR_24 = FUNC_7 ();
      if (VAR_24 != 0)
 return (VAR_24);
      break;

    case '(':
      VAR_18++;
      VAR_17++;
      return VAR_21;

    case ')':
      if (VAR_18 == 0)
 return 0;
      VAR_18--;
      VAR_17++;
      return VAR_21;

    case ',':
      if (VAR_10 && VAR_18 == 0)
 return 0;
      VAR_17++;
      return VAR_21;

    case '.':

      if (VAR_17[1] < '0' || VAR_17[1] > '9')
 goto symbol;


    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      {

 int VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29;
 char *VAR_30 = VAR_25;
 int VAR_31 = VAR_15 > 10;

 if (VAR_21 == '0' && (VAR_30[1] == 'x' || VAR_30[1] == 'X'))
   {
     VAR_30 += 2;
     VAR_31 = 1;
   }
 else if (VAR_21 == '0' && (VAR_30[1]=='t' || VAR_30[1]=='T' || VAR_30[1]=='d' || VAR_30[1]=='D'))
   {
     VAR_30 += 2;
     VAR_31 = 0;
   }

 for (;; ++VAR_30)
   {
     if (!VAR_31 && !VAR_27 && (*VAR_30 == 'e' || *VAR_30 == 'E'))
       VAR_26 = VAR_27 = 1;
     else if (!VAR_31 && !VAR_28 && (*VAR_30 == 'd' || *VAR_30 == 'D'))
       VAR_26 = VAR_28 = 1;
     else if (!VAR_31 && !VAR_26 && *VAR_30 == '.')
       VAR_26 = 1;
     else if (((VAR_27 && (VAR_30[-1] == 'e' || VAR_30[-1] == 'E'))
       || (VAR_28 && (VAR_30[-1] == 'd' || VAR_30[-1] == 'D')))
       && (*VAR_30 == '-' || *VAR_30 == '+'))


       continue;


     else if ((*VAR_30 < '0' || *VAR_30 > '9')
       && ((*VAR_30 < 'a' || *VAR_30 > 'z')
    && (*VAR_30 < 'A' || *VAR_30 > 'Z')))
       break;
   }
 VAR_29 = FUNC_9 (VAR_25, VAR_30 - VAR_25, VAR_26|VAR_27|VAR_28,
    &VAR_20);
        if (VAR_29 == VAR_1)
          {
     char *VAR_32 = (char *) FUNC_2 (VAR_30 - VAR_25 + 1);

     FUNC_8 (VAR_32, VAR_25, VAR_30 - VAR_25);
     VAR_32[VAR_30 - VAR_25] = 0;
     FUNC_4 ("Invalid number \"%s\".", VAR_32);
   }
 VAR_17 = VAR_30;
 return VAR_29;
      }

    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '|':
    case '&':
    case '^':
    case '~':
    case '!':
    case '@':
    case '<':
    case '>':
    case '[':
    case ']':
    case '?':
    case ':':
    case '=':
    case '{':
    case '}':
    symbol:
      VAR_17++;
      return VAR_21;
    }

  if (!(VAR_21 == '_' || VAR_21 == '$'
 || (VAR_21 >= 'a' && VAR_21 <= 'z') || (VAR_21 >= 'A' && VAR_21 <= 'Z')))

    FUNC_4 ("Invalid character '%c' in expression.", VAR_21);

  VAR_22 = 0;
  for (VAR_21 = VAR_25[VAR_22];
       (VAR_21 == '_' || VAR_21 == '$' || (VAR_21 >= '0' && VAR_21 <= '9')
 || (VAR_21 >= 'a' && VAR_21 <= 'z') || (VAR_21 >= 'A' && VAR_21 <= 'Z'));
       VAR_21 = VAR_25[++VAR_22]);




  if (VAR_22 == 2 && VAR_25[0] == 'i' && VAR_25[1] == 'f')
    return 0;

  VAR_17 += VAR_22;



  for (VAR_23 = 0; VAR_14[VAR_23].operator != ((void*)0); VAR_23++)
    if (FUNC_11 (VAR_25, VAR_14[VAR_23].operator,
   FUNC_10(VAR_14[VAR_23].operator)) == 0)
      {

 VAR_20.opcode = VAR_14[VAR_23].opcode;
 return VAR_14[VAR_23].token;
      }

  VAR_20.sval.ptr = VAR_25;
  VAR_20.sval.length = VAR_22;

  if (*VAR_25 == '$')
    {
      FUNC_12 (VAR_20.sval);
      return VAR_7;
    }




  {
    char *VAR_33 = FUNC_3 (VAR_20.sval);
    struct symbol *VAR_34;
    int VAR_35 = 0;
    int VAR_36;

    VAR_34 = FUNC_6 (VAR_33, VAR_13,
    VAR_8,
    VAR_11->la_language == VAR_16
    ? &VAR_35 : ((void*)0),
    ((void*)0));
    if (VAR_34 && FUNC_0 (VAR_34) == VAR_3)
      {
 VAR_20.tsym.type = FUNC_1 (VAR_34);
 return VAR_6;
      }
    if ((VAR_20.tsym.type = FUNC_5 (VAR_33)) != 0)
      return VAR_6;




    if (!VAR_34
 && ((VAR_25[0] >= 'a' && VAR_25[0] < 'a' + VAR_15 - 10)
     || (VAR_25[0] >= 'A' && VAR_25[0] < 'A' + VAR_15 - 10)))
      {
  YYSTYPE VAR_37;
 VAR_36 = FUNC_9 (VAR_25, VAR_22, 0, &VAR_37);
 if (VAR_36 == VAR_2)
   {
     VAR_20.ssym.sym = VAR_34;
     VAR_20.ssym.is_a_field_of_this = VAR_35;
     return VAR_5;
   }
      }


    VAR_20.ssym.sym = VAR_34;
    VAR_20.ssym.is_a_field_of_this = VAR_35;
    return VAR_4;
  }
}
