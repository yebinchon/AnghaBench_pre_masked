
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct svc_rpc_gss_client {int cl_state; int cl_mech; int cl_ctx; } ;
struct TYPE_6__ {int oa_length; int * oa_base; } ;
struct opaque_auth {scalar_t__ oa_length; int oa_base; int oa_flavor; } ;
struct TYPE_7__ {TYPE_1__ cb_verf; struct opaque_auth cb_cred; scalar_t__ cb_proc; scalar_t__ cb_vers; scalar_t__ cb_prog; scalar_t__ cb_rpcvers; } ;
struct rpc_msg {TYPE_2__ rm_call; int rm_direction; scalar_t__ rm_xid; } ;
typedef int rpchdr ;
typedef int int32_t ;
typedef int gss_qop_t ;
struct TYPE_8__ {int length; int * value; } ;
typedef TYPE_3__ gss_buffer_desc ;
typedef int caddr_t ;
typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,TYPE_3__*,TYPE_3__*,int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int *,int ,int) ;

__attribute__((used)) static bool_t
FUNC_8(struct svc_rpc_gss_client *VAR_4, struct rpc_msg *VAR_5,
 gss_qop_t *VAR_6)
{
 struct opaque_auth *VAR_7;
 gss_buffer_desc VAR_8, VAR_9;
 OM_uint32 VAR_10, VAR_11;
 gss_qop_t VAR_12;
 int32_t VAR_13[128 / sizeof(int32_t)];
 int32_t *VAR_14;

 FUNC_4("in svc_rpc_gss_validate()");

 FUNC_7(VAR_13, 0, sizeof(VAR_13));


 VAR_14 = VAR_13;
 FUNC_1(VAR_14, VAR_5->rm_xid);
 FUNC_0(VAR_14, VAR_5->rm_direction);
 FUNC_1(VAR_14, VAR_5->rm_call.cb_rpcvers);
 FUNC_1(VAR_14, VAR_5->rm_call.cb_prog);
 FUNC_1(VAR_14, VAR_5->rm_call.cb_vers);
 FUNC_1(VAR_14, VAR_5->rm_call.cb_proc);
 VAR_7 = &VAR_5->rm_call.cb_cred;
 FUNC_0(VAR_14, VAR_7->oa_flavor);
 FUNC_1(VAR_14, VAR_7->oa_length);
 if (VAR_7->oa_length) {
  FUNC_6((caddr_t)VAR_14, VAR_7->oa_base, VAR_7->oa_length);
  VAR_14 += FUNC_2(VAR_7->oa_length) / sizeof(int32_t);
 }
 VAR_8.value = VAR_13;
 VAR_8.length = (u_char *)VAR_14 - (u_char *)VAR_13;

 VAR_9.value = VAR_5->rm_call.cb_verf.oa_base;
 VAR_9.length = VAR_5->rm_call.cb_verf.oa_length;

 VAR_10 = FUNC_3(&VAR_11, VAR_4->cl_ctx, &VAR_8, &VAR_9,
      &VAR_12);

 if (VAR_10 != VAR_2) {
  FUNC_5("gss_verify_mic", VAR_4->cl_mech,
      VAR_10, VAR_11);
  VAR_4->cl_state = VAR_0;
  return (VAR_1);
 }
 *VAR_6 = VAR_12;
 return (VAR_3);
}
