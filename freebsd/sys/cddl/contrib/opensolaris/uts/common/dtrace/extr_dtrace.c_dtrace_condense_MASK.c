
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void (* dtps_enable ) (void*,VAR_0,void*) ;int (* dtps_destroy ) (int ,int,int ) ;} ;
struct TYPE_9__ {int dtpv_arg; TYPE_1__ dtpv_pops; } ;
typedef TYPE_2__ dtrace_provider_t ;
typedef scalar_t__ dtrace_provider_id_t ;
struct TYPE_10__ {struct TYPE_10__* dtpr_name; struct TYPE_10__* dtpr_func; struct TYPE_10__* dtpr_mod; int dtpr_arg; int * dtpr_ecb; TYPE_2__* dtpr_provider; } ;
typedef TYPE_3__ dtrace_probe_t ;


 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__** VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int ,void*,int) ;

int
FUNC_9(dtrace_provider_id_t VAR_10)
{
 dtrace_provider_t *VAR_11 = (dtrace_provider_t *)VAR_10;
 int VAR_12;
 dtrace_probe_t *VAR_13;




 FUNC_0(VAR_11->dtpv_pops.dtps_enable !=
     (void (*)(void *, VAR_14, void *))VAR_7);

 FUNC_4(&VAR_9);
 FUNC_4(&VAR_5);




 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  if ((VAR_13 = VAR_8[VAR_12]) == ((void*)0))
   continue;

  if (VAR_13->dtpr_provider != VAR_11)
   continue;

  if (VAR_13->dtpr_ecb != ((void*)0))
   continue;

  VAR_8[VAR_12] = ((void*)0);

  FUNC_1(VAR_3, VAR_13);
  FUNC_1(VAR_2, VAR_13);
  FUNC_1(VAR_4, VAR_13);

  VAR_11->dtpv_pops.dtps_destroy(VAR_11->dtpv_arg, VAR_12 + 1,
      VAR_13->dtpr_arg);
  FUNC_3(VAR_13->dtpr_mod, FUNC_6(VAR_13->dtpr_mod) + 1);
  FUNC_3(VAR_13->dtpr_func, FUNC_6(VAR_13->dtpr_func) + 1);
  FUNC_3(VAR_13->dtpr_name, FUNC_6(VAR_13->dtpr_name) + 1);
  FUNC_3(VAR_13, sizeof (dtrace_probe_t));



  FUNC_2(VAR_1, VAR_12 + 1);

 }

 FUNC_5(&VAR_5);
 FUNC_5(&VAR_9);

 return (0);
}
