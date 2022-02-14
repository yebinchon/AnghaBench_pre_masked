
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef TYPE_1__* stmt_ann_t ;
struct TYPE_3__ {int has_volatile_ops; int * addresses_taken; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5 (tree VAR_3)
{
  stmt_ann_t VAR_4 = FUNC_1 (VAR_3);



  if (VAR_4)
    {
      VAR_4->has_volatile_ops = 0;
      if (VAR_4->addresses_taken)
 VAR_4->addresses_taken = ((void*)0);
    }

  FUNC_4 ();

  FUNC_3 (VAR_3);
  FUNC_2 (VAR_2);
  FUNC_2 (VAR_0);
  FUNC_2 (VAR_1);

  FUNC_0 (VAR_3);
}
