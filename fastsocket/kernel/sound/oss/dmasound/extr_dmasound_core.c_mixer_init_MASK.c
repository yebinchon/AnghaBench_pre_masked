
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* mixer_init ) () ;} ;
struct TYPE_6__ {TYPE_1__ mach; scalar_t__ bass; scalar_t__ treble; } ;
struct TYPE_5__ {scalar_t__ busy; } ;


 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void)
{

 int VAR_3;

 VAR_3 = FUNC_0(&VAR_2, -1);
 if (VAR_3 < 0)
  return;

 VAR_1.busy = 0;
 VAR_0.treble = 0;
 VAR_0.bass = 0;
 if (VAR_0.mach.mixer_init)
     VAR_0.mach.mixer_init();
}
