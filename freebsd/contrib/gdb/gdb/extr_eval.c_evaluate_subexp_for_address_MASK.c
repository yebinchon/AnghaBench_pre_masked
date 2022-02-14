
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct expression {TYPE_1__* elts; } ;
typedef enum noside { ____Placeholder_noside } noside ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;
typedef enum address_class { ____Placeholder_address_class } address_class ;
struct TYPE_2__ {int opcode; int block; struct symbol* symbol; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 int FUNC_2 (int ) ;
 int VAR_6 ;


 int FUNC_3 (struct value*) ;
 int FUNC_4 (struct value*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 struct value* FUNC_7 (int ,struct expression*,int*,int) ;
 struct value* FUNC_8 (struct symbol*,int ) ;
 struct type* FUNC_9 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 struct value* FUNC_10 (struct value*) ;
 struct value* FUNC_11 (struct type*,struct value*) ;
 struct value* FUNC_12 (struct type*,int ) ;

__attribute__((used)) static struct value *
FUNC_13 (struct expression *VAR_9, int *VAR_10,
        enum noside VAR_11)
{
  enum exp_opcode VAR_12;
  int VAR_13;
  struct symbol *VAR_14;

  VAR_13 = (*VAR_10);
  VAR_12 = VAR_9->elts[VAR_13].opcode;

  switch (VAR_12)
    {
    case 129:
      (*VAR_10)++;
      return FUNC_7 (VAR_5, VAR_9, VAR_10, VAR_11);

    case 128:
      (*VAR_10) += 3;
      return FUNC_11 (FUNC_9 (VAR_9->elts[VAR_13 + 1].type),
    FUNC_7 (VAR_5, VAR_9, VAR_10, VAR_11));

    case 130:
      VAR_14 = VAR_9->elts[VAR_13 + 2].symbol;



      if (FUNC_2 (FUNC_1 (VAR_14)) == VAR_6)
 goto default_case;

      (*VAR_10) += 4;
      if (VAR_11 == VAR_0)
 {
   struct type *VAR_15 =
   FUNC_9 (FUNC_1 (VAR_14));
   enum address_class VAR_16 = FUNC_0 (VAR_14);

   if (VAR_16 == VAR_1
       || VAR_16 == VAR_2
       || VAR_16 == VAR_3
       || VAR_16 == VAR_4)
     FUNC_6 ("Attempt to take address of register or constant.");

   return
     FUNC_12 (VAR_15, VAR_8);
 }
      else
 return
   FUNC_8
   (VAR_14,
    FUNC_5 (VAR_9->elts[VAR_13 + 1].block));

    default:
    default_case:
      if (VAR_11 == VAR_0)
 {
   struct value *VAR_17 = FUNC_7 (VAR_5, VAR_9, VAR_10, VAR_11);
   if (FUNC_3 (VAR_17) == VAR_7)
     return FUNC_12 (FUNC_9 (FUNC_4 (VAR_17)),
          VAR_8);
   else
     FUNC_6 ("Attempt to take address of non-lval");
 }
      return FUNC_10 (FUNC_7 (VAR_5, VAR_9, VAR_10, VAR_11));
    }
}
