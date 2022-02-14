
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union exp_element {int opcode; int symbol; int longconst; struct type* type; } ;
struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
typedef int LONGEST ;





 struct value* FUNC_0 (int ) ;
 struct value* FUNC_1 (struct type*,int ) ;
 struct value* FUNC_2 (struct value*) ;

__attribute__((used)) static struct value *
FUNC_3 (union exp_element **VAR_0)
{
  enum exp_opcode VAR_1 = (*VAR_0)->opcode;
  struct value *VAR_2;

  switch (VAR_1)
    {
    case 130:
      {
 struct type *VAR_3 = (*VAR_0)[1].type;
 LONGEST VAR_4 = (*VAR_0)[2].longconst;
 (*VAR_0) += 4;
 return FUNC_1 (VAR_3, VAR_4);
      }

    case 129:
      {
 struct value *VAR_5 = FUNC_0 ((*VAR_0)[2].symbol);
 (*VAR_0) += 4;
 return VAR_5;
      }



    case 128:
      (*VAR_0)++;
      VAR_2 = FUNC_3 (VAR_0);
      if (VAR_2)
 return FUNC_2 (VAR_2);
      else
 return 0;

    default:
      return 0;
    }
}
