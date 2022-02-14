
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * mod_mp; scalar_t__ mod_busy; struct TYPE_9__* mod_next; } ;
typedef TYPE_2__ modctl_t ;
struct TYPE_8__ {int (* dtps_provide_module ) (int ,TYPE_2__*) ;int (* dtps_provide ) (int ,int *) ;} ;
struct TYPE_10__ {int dtpv_arg; TYPE_1__ dtpv_pops; struct TYPE_10__* dtpv_next; } ;
typedef TYPE_3__ dtrace_provider_t ;
typedef int dtrace_probedesc_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_6(dtrace_probedesc_t *VAR_4, dtrace_provider_t *VAR_5)
{



 int VAR_6 = 0;

 FUNC_0(FUNC_1(&VAR_1));

 if (VAR_5 == ((void*)0)) {
  VAR_6 = 1;
  VAR_5 = VAR_0;
 }

 do {



  VAR_5->dtpv_pops.dtps_provide(VAR_5->dtpv_arg, VAR_4);
 } while (VAR_6 && (VAR_5 = VAR_5->dtpv_next) != ((void*)0));
}
