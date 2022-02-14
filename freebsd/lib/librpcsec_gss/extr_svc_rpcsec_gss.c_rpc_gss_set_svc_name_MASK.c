
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* u_int ;
struct svc_rpc_gss_svc_name {void* sn_version; void* sn_program; int sn_cred; void* sn_req_time; void* sn_mech; int sn_principal; } ;
typedef int gss_name_t ;
typedef int gss_cred_id_t ;
struct TYPE_5__ {int length; void* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
struct TYPE_6__ {int count; void* elements; } ;
typedef TYPE_2__ gss_OID_set_desc ;
typedef void* gss_OID ;
typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,struct svc_rpc_gss_svc_name*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,void*,TYPE_2__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_2 (scalar_t__*,TYPE_1__*,int ,int *) ;
 int FUNC_3 (scalar_t__*,int *) ;
 struct svc_rpc_gss_svc_name* FUNC_4 (int) ;
 int FUNC_5 (char const*,void**) ;
 int VAR_5 ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 () ;
 int VAR_6 ;

bool_t
FUNC_9(const char *VAR_7, const char *VAR_8,
    u_int VAR_9, u_int VAR_10, u_int VAR_11)
{
 OM_uint32 VAR_12, VAR_13;
 struct svc_rpc_gss_svc_name *VAR_14;
 gss_buffer_desc VAR_15;
 gss_name_t VAR_16;
 gss_OID VAR_17;
 gss_OID_set_desc VAR_18;
 gss_cred_id_t VAR_19;

 FUNC_8();

 if (!FUNC_5(VAR_8, &VAR_17))
  return (VAR_0);
 VAR_18.count = 1;
 VAR_18.elements = VAR_17;

 VAR_15.value = (void *)(intptr_t) VAR_7;
 VAR_15.length = FUNC_7(VAR_7);

 VAR_12 = FUNC_2(&VAR_13, &VAR_15,
       VAR_2, &VAR_16);
 if (VAR_12 != VAR_3)
  return (VAR_0);

 VAR_12 = FUNC_1(&VAR_13, VAR_16,
     VAR_9, &VAR_18, VAR_1, &VAR_19, ((void*)0), ((void*)0));
 if (VAR_12 != VAR_3)
  return (VAR_0);

 FUNC_3(&VAR_13, &VAR_16);

 VAR_14 = FUNC_4(sizeof(struct svc_rpc_gss_svc_name));
 if (!VAR_14)
  return (VAR_0);
 VAR_14->sn_principal = FUNC_6(VAR_7);
 VAR_14->sn_mech = VAR_17;
 VAR_14->sn_req_time = VAR_9;
 VAR_14->sn_cred = VAR_19;
 VAR_14->sn_program = VAR_10;
 VAR_14->sn_version = VAR_11;
 FUNC_0(&VAR_6, VAR_14, VAR_5);

 return (VAR_4);
}
