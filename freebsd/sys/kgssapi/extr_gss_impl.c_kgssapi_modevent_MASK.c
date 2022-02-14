
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int module_t ;
struct TYPE_2__ {int rpc_gss_svc_max_data_length; int rpc_gss_get_principal_name; int rpc_gss_clear_callback; int rpc_gss_set_callback; int rpc_gss_getcred; int rpc_gss_clear_svc_name; int rpc_gss_set_svc_name; int rpc_gss_is_installed; int rpc_gss_get_versions; int rpc_gss_get_mechanisms; int rpc_gss_qop_to_num; int rpc_gss_oid_to_mech; int rpc_gss_mech_to_oid; int rpc_gss_get_error; int rpc_gss_max_data_length; int rpc_gss_set_defaults; int rpc_gss_seccreate; int rpc_gss_secpurge; int rpc_gss_secfind; int rpc_gss_refresh_auth; } ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static int
FUNC_4(module_t VAR_24, int VAR_25, void *VAR_26)
{
 int VAR_27 = 0;

 switch (VAR_25) {
 case 129:
  VAR_5.rpc_gss_refresh_auth = VAR_16;
  VAR_5.rpc_gss_secfind = VAR_18;
  VAR_5.rpc_gss_secpurge = VAR_19;
  VAR_5.rpc_gss_seccreate = VAR_17;
  VAR_5.rpc_gss_set_defaults = VAR_21;
  VAR_5.rpc_gss_max_data_length =
      VAR_12;
  VAR_5.rpc_gss_get_error = VAR_6;
  VAR_5.rpc_gss_mech_to_oid = VAR_13;
  VAR_5.rpc_gss_oid_to_mech = VAR_14;
  VAR_5.rpc_gss_qop_to_num = VAR_15;
  VAR_5.rpc_gss_get_mechanisms = VAR_7;
  VAR_5.rpc_gss_get_versions = VAR_9;
  VAR_5.rpc_gss_is_installed = VAR_11;
  VAR_5.rpc_gss_set_svc_name = VAR_22;
  VAR_5.rpc_gss_clear_svc_name = VAR_4;
  VAR_5.rpc_gss_getcred = VAR_10;
  VAR_5.rpc_gss_set_callback = VAR_20;
  VAR_5.rpc_gss_clear_callback = VAR_3;
  VAR_5.rpc_gss_get_principal_name =
      VAR_8;
  VAR_5.rpc_gss_svc_max_data_length =
      VAR_23;
  FUNC_3(&VAR_2, "kgss_gssd_lock", ((void*)0), VAR_1);
  VAR_27 = FUNC_0();
  break;
 case 128:
  FUNC_1();
  FUNC_2(&VAR_2);






 default:
  VAR_27 = VAR_0;
 }
 return (VAR_27);
}
