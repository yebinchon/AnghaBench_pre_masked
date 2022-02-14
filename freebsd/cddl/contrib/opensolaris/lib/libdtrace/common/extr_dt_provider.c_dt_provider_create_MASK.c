
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_17__ {int dt_provbuckets; int dt_gen; } ;
typedef TYPE_3__ dtrace_hdl_t ;
struct TYPE_15__ {void* dtpa_args; void* dtpa_name; void* dtpa_func; void* dtpa_mod; void* dtpa_provider; } ;
struct TYPE_16__ {TYPE_1__ dtvd_attr; int dtvd_name; } ;
struct TYPE_18__ {TYPE_2__ pv_desc; int * pv_probes; TYPE_3__* pv_hdl; int pv_gen; } ;
typedef TYPE_4__ dt_provider_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_4__*) ;
 int * FUNC_1 (int ,int *,int ,int ) ;
 TYPE_4__* FUNC_2 (TYPE_3__*,TYPE_4__*,int) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (char const*,int *) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int) ;
 int FUNC_6 (int ,char const*,int ) ;

dt_provider_t *
FUNC_7(dtrace_hdl_t *VAR_3, const char *VAR_4)
{
 dt_provider_t *VAR_5;

 if ((VAR_5 = FUNC_5(VAR_3, sizeof (dt_provider_t))) == ((void*)0))
  return (((void*)0));

 (void) FUNC_6(VAR_5->pv_desc.dtvd_name, VAR_4, VAR_0);
 VAR_5->pv_probes = FUNC_1(VAR_5->pv_desc.dtvd_name, ((void*)0), 0, 0);
 VAR_5->pv_gen = VAR_3->dt_gen;
 VAR_5->pv_hdl = VAR_3;

 if (VAR_5->pv_probes == ((void*)0)) {
  FUNC_0(VAR_3, VAR_5);
  (void) FUNC_3(VAR_3, VAR_1);
  return (((void*)0));
 }

 VAR_5->pv_desc.dtvd_attr.dtpa_provider = VAR_2;
 VAR_5->pv_desc.dtvd_attr.dtpa_mod = VAR_2;
 VAR_5->pv_desc.dtvd_attr.dtpa_func = VAR_2;
 VAR_5->pv_desc.dtvd_attr.dtpa_name = VAR_2;
 VAR_5->pv_desc.dtvd_attr.dtpa_args = VAR_2;

 return (FUNC_2(VAR_3, VAR_5,
     FUNC_4(VAR_4, ((void*)0)) % VAR_3->dt_provbuckets));
}
