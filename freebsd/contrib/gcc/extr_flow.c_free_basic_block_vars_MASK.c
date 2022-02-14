
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {TYPE_3__* rtl; } ;
struct TYPE_12__ {TYPE_4__ il; int * aux; } ;
struct TYPE_8__ {TYPE_1__* rtl; } ;
struct TYPE_11__ {TYPE_2__ il; int * aux; } ;
struct TYPE_9__ {int * global_live_at_end; } ;
struct TYPE_7__ {int * global_live_at_start; } ;


 TYPE_6__* VAR_0 ;
 TYPE_5__* VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 () ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

void
FUNC_1 (void)
{
  if (VAR_2)
    {
      FUNC_0 ();
      VAR_2 = ((void*)0);
    }
  VAR_5 = 0;
  VAR_4 = 0;
  VAR_6 = 0;

  VAR_3 = ((void*)0);

  VAR_0->aux = ((void*)0);
  VAR_0->il.rtl->global_live_at_end = ((void*)0);
  VAR_1->aux = ((void*)0);
  VAR_1->il.rtl->global_live_at_start = ((void*)0);
}
