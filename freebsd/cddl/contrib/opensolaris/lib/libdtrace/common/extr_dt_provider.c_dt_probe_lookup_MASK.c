
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int dtrace_probedesc_t ;
typedef int dtrace_hdl_t ;
struct TYPE_6__ {int pv_probes; int * pv_hdl; } ;
typedef TYPE_1__ dt_provider_t ;
typedef int dt_probe_t ;
struct TYPE_7__ {int * di_data; } ;
typedef TYPE_2__ dt_ident_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (size_t) ;
 TYPE_2__* FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int *,int ,int *) ;
 int * FUNC_3 (TYPE_1__*,int *) ;
 char* FUNC_4 (int *,int ) ;
 size_t FUNC_5 (int *) ;
 int FUNC_6 (int *,scalar_t__) ;
 scalar_t__ FUNC_7 (int *,int ,char const*,int *) ;
 scalar_t__ VAR_5 ;

dt_probe_t *
FUNC_8(dt_provider_t *VAR_6, const char *VAR_7)
{
 dtrace_hdl_t *VAR_8 = VAR_6->pv_hdl;
 dtrace_probedesc_t VAR_9;
 dt_ident_t *VAR_10;
 size_t VAR_11;
 char *VAR_12;

 if (FUNC_7(VAR_8, VAR_1, VAR_7, &VAR_9) != 0)
  return (((void*)0));

 VAR_11 = FUNC_5(&VAR_9);
 VAR_12 = FUNC_4(&VAR_9, FUNC_0(VAR_11));






 if ((VAR_10 = FUNC_1(VAR_6->pv_probes, VAR_12)) != ((void*)0))
  return (VAR_10->di_data);





 if (FUNC_2(VAR_8, VAR_0, &VAR_9) == 0)
  return (FUNC_3(VAR_6, &VAR_9));

 if (VAR_5 == VAR_4 || VAR_5 == VAR_2)
  (void) FUNC_6(VAR_8, VAR_3);
 else
  (void) FUNC_6(VAR_8, VAR_5);

 return (((void*)0));
}
