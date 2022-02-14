
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* rtl; } ;
struct TYPE_6__ {TYPE_2__ il; } ;
struct TYPE_4__ {int global_live_at_end; } ;


 TYPE_3__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

int
FUNC_2 (int VAR_4)
{
  if (VAR_2 == VAR_1)
    return 0;

  return ((FUNC_1 (VAR_4) > 1
    || FUNC_0 (VAR_0->il.rtl->global_live_at_end,
               VAR_4))
   && FUNC_0 (VAR_3, VAR_4));
}
