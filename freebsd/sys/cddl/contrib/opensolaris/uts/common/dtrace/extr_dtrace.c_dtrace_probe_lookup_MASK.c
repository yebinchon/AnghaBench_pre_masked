
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dtpv_name; } ;
typedef TYPE_1__ dtrace_provider_t ;
typedef scalar_t__ dtrace_provider_id_t ;
struct TYPE_5__ {char* dtpk_mod; char* dtpk_func; char* dtpk_name; int dtpk_id; int * dtpk_nmatch; int * dtpk_fmatch; int * dtpk_mmatch; int * dtpk_pmatch; int dtpk_prov; } ;
typedef TYPE_2__ dtrace_probekey_t ;
typedef int dtrace_id_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int ,int ,int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

dtrace_id_t
FUNC_4(dtrace_provider_id_t VAR_6, char *VAR_7,
    char *VAR_8, char *VAR_9)
{
 dtrace_probekey_t VAR_10;
 dtrace_id_t VAR_11;
 int VAR_12;

 VAR_10.dtpk_prov = ((dtrace_provider_t *)VAR_6)->dtpv_name;
 VAR_10.dtpk_pmatch = &VAR_4;
 VAR_10.dtpk_mod = VAR_7;
 VAR_10.dtpk_mmatch = VAR_7 ? &VAR_4 : &VAR_3;
 VAR_10.dtpk_func = VAR_8;
 VAR_10.dtpk_fmatch = VAR_8 ? &VAR_4 : &VAR_3;
 VAR_10.dtpk_name = VAR_9;
 VAR_10.dtpk_nmatch = VAR_9 ? &VAR_4 : &VAR_3;
 VAR_10.dtpk_id = VAR_0;

 FUNC_2(&VAR_2);
 VAR_12 = FUNC_1(&VAR_10, VAR_1, 0, 0,
     VAR_5, &VAR_11);
 FUNC_3(&VAR_2);

 FUNC_0(VAR_12 == 1 || VAR_12 == 0);
 return (VAR_12 ? VAR_11 : 0);
}
