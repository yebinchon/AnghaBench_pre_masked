
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_clobbers_to_add; } ;
struct TYPE_4__ {TYPE_1__ insn; } ;
struct decision_test {scalar_t__ type; TYPE_2__ u; } ;
typedef enum routine_type { ____Placeholder_routine_type } routine_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;



 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1 (struct decision_test *VAR_2, enum routine_type VAR_3)
{
  if (VAR_2->type == VAR_1)
    return 1;

  if (VAR_2->type == VAR_0)
    {
      switch (VAR_3)
 {
 case 129:
   return (VAR_2->u.insn.num_clobbers_to_add == 0);
 case 128:
   return 1;
 case 130:
   return -1;
 default:
   FUNC_0 ();
 }
    }

  return 0;
}
