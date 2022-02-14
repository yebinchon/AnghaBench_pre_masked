
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
 int VAR_2 ;
 struct value* FUNC_7 (struct value*,int,struct value**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (char*,char*) ;
 struct value* FUNC_11 (struct value*) ;
 struct value* FUNC_12 (int ,int ) ;
 struct value* FUNC_13 (struct value**,struct value**,char*,int*,char*) ;
 struct value* FUNC_14 (struct type*,int ) ;

struct value *
FUNC_15 (struct value *VAR_3, enum exp_opcode VAR_4, enum noside VAR_5)
{
  struct value **VAR_6;
  char *VAR_7, *VAR_8;
  char VAR_9[13], VAR_10[13];
  int VAR_11, VAR_12;

  FUNC_1 (VAR_3);
  FUNC_0 (VAR_3);




  if (FUNC_2 (FUNC_8 (FUNC_5 (VAR_3))) != VAR_1)
    FUNC_9 ("Can't do that unary op on that type");

  VAR_6 = (struct value **) FUNC_6 (sizeof (struct value *) * 4);
  VAR_6[1] = FUNC_11 (VAR_3);
  VAR_6[2] = 0;

  VAR_12 = 1;


  FUNC_10 (VAR_9, "operator__");
  VAR_7 = VAR_9 + 8;
  FUNC_10 (VAR_10, "__");
  VAR_8 = VAR_10 + 2;
  switch (VAR_4)
    {
    case 128:
      FUNC_10 (VAR_7, "++");
      break;
    case 129:
      FUNC_10 (VAR_7, "--");
      break;
    case 130:
      FUNC_10 (VAR_7, "++");
      VAR_6[2] = FUNC_12 (VAR_2, 0);
      VAR_6[3] = 0;
      VAR_12 ++;
      break;
    case 131:
      FUNC_10 (VAR_7, "--");
      VAR_6[2] = FUNC_12 (VAR_2, 0);
      VAR_6[3] = 0;
      VAR_12 ++;
      break;
    case 133:
      FUNC_10 (VAR_7, "!");
      break;
    case 135:
      FUNC_10 (VAR_7, "~");
      break;
    case 132:
      FUNC_10 (VAR_7, "-");
      break;
    case 134:
      FUNC_10 (VAR_7, "*");
      break;
    default:
      FUNC_9 ("Invalid unary operation specified.");
    }

  VAR_6[0] = FUNC_13 (&VAR_3, VAR_6 + 1, VAR_9, &VAR_11, "structure");

  if (VAR_6[0])
    {
      if (VAR_11)
 {
   VAR_6[1] = VAR_6[0];
   VAR_12 --;
   VAR_6++;
 }
      if (VAR_5 == VAR_0)
 {
   struct type *VAR_13;
   VAR_13
     = FUNC_3 (FUNC_8 (FUNC_5 (VAR_6[0])));
   return FUNC_14 (VAR_13, FUNC_4 (VAR_3));
 }
      return FUNC_7 (VAR_6[0], VAR_12, VAR_6 + 1);
    }
  FUNC_9 ("member function %s not found", VAR_9);
  return 0;
}
