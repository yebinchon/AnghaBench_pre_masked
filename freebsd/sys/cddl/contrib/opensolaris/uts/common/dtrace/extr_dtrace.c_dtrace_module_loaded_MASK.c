
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int task_func_t ;
struct TYPE_8__ {int mod_busy; } ;
typedef TYPE_2__ modctl_t ;
struct TYPE_7__ {int (* dtps_provide_module ) (int ,TYPE_2__*) ;} ;
struct TYPE_9__ {int dtpv_arg; TYPE_1__ dtpv_pops; struct TYPE_9__* dtpv_next; } ;
typedef TYPE_3__ dtrace_provider_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,TYPE_2__*) ;
 int FUNC_5 (int ,int *,int *,int ) ;

__attribute__((used)) static void
FUNC_6(modctl_t *VAR_8)
{
 dtrace_provider_t *VAR_9;

 FUNC_2(&VAR_4);
 for (VAR_9 = VAR_3; VAR_9 != ((void*)0); VAR_9 = VAR_9->dtpv_next)
  VAR_9->dtpv_pops.dtps_provide_module(VAR_9->dtpv_arg, VAR_8);




 FUNC_3(&VAR_4);
 FUNC_2(&VAR_2);

 if (VAR_5 == ((void*)0)) {
  FUNC_3(&VAR_2);
  return;
 }

 (void) FUNC_5(VAR_6,
     (task_func_t *)VAR_1, ((void*)0), VAR_0);

 FUNC_3(&VAR_2);
 FUNC_1(1);
}
