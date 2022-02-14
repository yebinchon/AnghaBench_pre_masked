
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
struct TYPE_2__ {int opcode; int symbol; struct type* type; } ;
typedef int LONGEST ;


 int VAR_0 ;
 int VAR_1 ;

 struct type* FUNC_0 (int ) ;
 int FUNC_1 (struct type*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct type*) ;
 struct type* FUNC_3 (struct type*) ;


 struct type* FUNC_4 (struct value*) ;
 int VAR_5 ;
 struct type* FUNC_5 (struct type*) ;
 int FUNC_6 (char*) ;
 struct value* FUNC_7 (int ,struct expression*,int*,int ) ;
 struct value* FUNC_8 (int ,int ) ;

__attribute__((used)) static struct value *
FUNC_9 (struct expression *VAR_6, int *VAR_7)
{
  enum exp_opcode VAR_8;
  int VAR_9;
  struct type *VAR_10;
  struct value *VAR_11;

  VAR_9 = (*VAR_7);
  VAR_8 = VAR_6->elts[VAR_9].opcode;

  switch (VAR_8)
    {




    case 129:
      (*VAR_7)++;
      VAR_11 = FUNC_7 (VAR_1, VAR_6, VAR_7, VAR_0);
      VAR_10 = FUNC_5 (FUNC_4 (VAR_11));
      if (FUNC_1 (VAR_10) != VAR_3
   && FUNC_1 (VAR_10) != VAR_4
   && FUNC_1 (VAR_10) != VAR_2)
 FUNC_6 ("Attempt to take contents of a non-pointer value.");
      VAR_10 = FUNC_5 (FUNC_3 (VAR_10));
      return FUNC_8 (VAR_5, (LONGEST)
     FUNC_2 (VAR_10));

    case 128:
      (*VAR_7) += 3;
      VAR_10 = FUNC_5 (VAR_6->elts[VAR_9 + 1].type);
      return FUNC_8 (VAR_5,
     (LONGEST) FUNC_2 (VAR_10));

    case 130:
      (*VAR_7) += 4;
      VAR_10 = FUNC_5 (FUNC_0 (VAR_6->elts[VAR_9 + 2].symbol));
      return
 FUNC_8 (VAR_5, (LONGEST) FUNC_2 (VAR_10));

    default:
      VAR_11 = FUNC_7 (VAR_1, VAR_6, VAR_7, VAR_0);
      return FUNC_8 (VAR_5,
     (LONGEST) FUNC_2 (FUNC_4 (VAR_11)));
    }
}
