
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum noside { ____Placeholder_noside } noside ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
 int FUNC_0 (struct value*) ;
 int FUNC_1 (struct value*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 struct type* FUNC_3 (int ) ;
 int FUNC_4 (struct value*) ;
 int FUNC_5 (struct value*) ;
 scalar_t__ FUNC_6 (int) ;
 struct value* FUNC_7 (struct value*,int,struct value**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char*) ;
 struct value* FUNC_11 (struct value*) ;
 struct value* FUNC_12 (struct value**,struct value**,char*,int*,char*) ;
 struct value* FUNC_13 (struct type*,int ) ;

struct value *
FUNC_14 (struct value *VAR_2, struct value *VAR_3, enum exp_opcode VAR_4,
        enum exp_opcode VAR_5, enum noside VAR_6)
{
  struct value **VAR_7;
  char *VAR_8;
  char VAR_9[13];
  int VAR_10;

  FUNC_1 (VAR_2);
  FUNC_1 (VAR_3);
  FUNC_0 (VAR_2);
  FUNC_0 (VAR_3);




  if (FUNC_2 (FUNC_8 (FUNC_5 (VAR_2))) != VAR_1)
    FUNC_9 ("Can't do that binary op on that type");

  VAR_7 = (struct value **) FUNC_6 (sizeof (struct value *) * 4);
  VAR_7[1] = FUNC_11 (VAR_2);
  VAR_7[2] = VAR_3;
  VAR_7[3] = 0;


  FUNC_10 (VAR_9, "operator__");
  VAR_8 = VAR_9 + 8;
  switch (VAR_4)
    {
    case 151:
      FUNC_10 (VAR_8, "+");
      break;
    case 129:
      FUNC_10 (VAR_8, "-");
      break;
    case 133:
      FUNC_10 (VAR_8, "*");
      break;
    case 145:
      FUNC_10 (VAR_8, "/");
      break;
    case 131:
      FUNC_10 (VAR_8, "%");
      break;
    case 137:
      FUNC_10 (VAR_8, "<<");
      break;
    case 130:
      FUNC_10 (VAR_8, ">>");
      break;
    case 148:
      FUNC_10 (VAR_8, "&");
      break;
    case 147:
      FUNC_10 (VAR_8, "|");
      break;
    case 146:
      FUNC_10 (VAR_8, "^");
      break;
    case 139:
      FUNC_10 (VAR_8, "&&");
      break;
    case 138:
      FUNC_10 (VAR_8, "||");
      break;
    case 135:
      FUNC_10 (VAR_8, "<?");
      break;
    case 136:
      FUNC_10 (VAR_8, ">?");
      break;
    case 150:
      FUNC_10 (VAR_8, "=");
      break;
    case 149:
      switch (VAR_5)
 {
 case 151:
   FUNC_10 (VAR_8, "+=");
   break;
 case 129:
   FUNC_10 (VAR_8, "-=");
   break;
 case 133:
   FUNC_10 (VAR_8, "*=");
   break;
 case 145:
   FUNC_10 (VAR_8, "/=");
   break;
 case 131:
   FUNC_10 (VAR_8, "%=");
   break;
 case 148:
   FUNC_10 (VAR_8, "&=");
   break;
 case 147:
   FUNC_10 (VAR_8, "|=");
   break;
 case 146:
   FUNC_10 (VAR_8, "^=");
   break;
 case 134:
 default:
   FUNC_9 ("Invalid binary operation specified.");
 }
      break;
    case 128:
      FUNC_10 (VAR_8, "[]");
      break;
    case 144:
      FUNC_10 (VAR_8, "==");
      break;
    case 132:
      FUNC_10 (VAR_8, "!=");
      break;
    case 140:
      FUNC_10 (VAR_8, "<");
      break;
    case 142:
      FUNC_10 (VAR_8, ">");
      break;
    case 143:
      FUNC_10 (VAR_8, ">=");
      break;
    case 141:
      FUNC_10 (VAR_8, "<=");
      break;
    case 134:
    default:
      FUNC_9 ("Invalid binary operation specified.");
    }

  VAR_7[0] = FUNC_12 (&VAR_2, VAR_7 + 1, VAR_9, &VAR_10, "structure");

  if (VAR_7[0])
    {
      if (VAR_10)
 {
   VAR_7[1] = VAR_7[0];
   VAR_7++;
 }
      if (VAR_6 == VAR_0)
 {
   struct type *VAR_11;
   VAR_11
     = FUNC_3 (FUNC_8 (FUNC_5 (VAR_7[0])));
   return FUNC_13 (VAR_11, FUNC_4 (VAR_2));
 }
      return FUNC_7 (VAR_7[0], 2 - VAR_10, VAR_7 + 1);
    }
  FUNC_9 ("member function %s not found", VAR_9);



}
