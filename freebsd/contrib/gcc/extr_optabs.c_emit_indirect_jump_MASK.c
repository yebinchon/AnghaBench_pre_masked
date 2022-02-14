
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_4__ {TYPE_1__* operand; } ;
struct TYPE_3__ {int (* predicate ) (int ,int ) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 TYPE_2__* VAR_2 ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5 (rtx VAR_3)
{
  if (!VAR_2[(int) VAR_0].operand[0].predicate
      (VAR_3, VAR_1))
    VAR_3 = FUNC_0 (VAR_1, VAR_3);

  FUNC_2 (FUNC_3 (VAR_3));
  FUNC_1 ();
}
