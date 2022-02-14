
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_14__ ;


typedef int xdrproc_t ;
struct init_sec_context_res {scalar_t__ major_status; void* time_rec; void* ret_flags; int output_token; scalar_t__ ctx; int actual_mech_type; void* minor_status; } ;
struct TYPE_21__ {int * value; scalar_t__ length; } ;
struct init_sec_context_args {TYPE_5__ input_token; int input_chan_bindings; void* time_req; void* req_flags; int mech_type; int name; scalar_t__ ctx; scalar_t__ cred; int uid; } ;
typedef int res ;
typedef TYPE_2__* gss_name_t ;
typedef TYPE_3__* gss_ctx_id_t ;
typedef TYPE_4__* gss_cred_id_t ;
typedef int gss_channel_bindings_t ;
typedef TYPE_5__* gss_buffer_t ;
typedef int gss_OID ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_20__ {scalar_t__ handle; } ;
struct TYPE_19__ {scalar_t__ handle; } ;
struct TYPE_18__ {int handle; } ;
struct TYPE_17__ {int cr_uid; } ;
struct TYPE_16__ {TYPE_1__* td_ucred; } ;
typedef void* OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_2 (struct init_sec_context_res*,int) ;
 TYPE_14__* VAR_5 ;
 int FUNC_3 (struct init_sec_context_args*,struct init_sec_context_res*,int *) ;
 int FUNC_4 (int *,TYPE_5__*) ;
 TYPE_3__* FUNC_5 (int ) ;
 int * FUNC_6 () ;
 scalar_t__ FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ,struct init_sec_context_res*) ;
 scalar_t__ VAR_6 ;

OM_uint32
FUNC_9(OM_uint32 * VAR_7,
    const gss_cred_id_t VAR_8,
    gss_ctx_id_t * VAR_9,
    const gss_name_t VAR_10,
    const gss_OID VAR_11,
    OM_uint32 VAR_12,
    OM_uint32 VAR_13,
    const gss_channel_bindings_t VAR_14,
    const gss_buffer_t VAR_15,
    gss_OID * VAR_16,
    gss_buffer_t VAR_17,
    OM_uint32 * VAR_18,
    OM_uint32 * VAR_19)
{
 struct init_sec_context_res VAR_20;
 struct init_sec_context_args VAR_21;
 enum clnt_stat VAR_22;
 gss_ctx_id_t VAR_23 = *VAR_9;
 CLIENT *VAR_24;

 *VAR_7 = 0;

 VAR_24 = FUNC_6();
 if (VAR_24 == ((void*)0))
  return (VAR_3);

 VAR_21.uid = VAR_5->td_ucred->cr_uid;
 if (VAR_8)
  VAR_21.cred = VAR_8->handle;
 else
  VAR_21.cred = 0;
 if (VAR_23)
  VAR_21.ctx = VAR_23->handle;
 else
  VAR_21.ctx = 0;
 VAR_21.name = VAR_10->handle;
 VAR_21.mech_type = VAR_11;
 VAR_21.req_flags = VAR_12;
 VAR_21.time_req = VAR_13;
 VAR_21.input_chan_bindings = VAR_14;
 if (VAR_15)
  VAR_21.input_token = *VAR_15;
 else {
  VAR_21.input_token.length = 0;
  VAR_21.input_token.value = ((void*)0);
 }

 FUNC_2(&VAR_20, sizeof(VAR_20));
 VAR_22 = FUNC_3(&VAR_21, &VAR_20, VAR_24);
 FUNC_0(VAR_24);
 if (VAR_22 != VAR_4) {
  *VAR_7 = VAR_22;
  return (VAR_3);
 }

 if (VAR_20.major_status != VAR_1
     && VAR_20.major_status != VAR_2) {
  *VAR_7 = VAR_20.minor_status;
  FUNC_8((xdrproc_t) VAR_6, &VAR_20);
  return (VAR_20.major_status);
 }

 *VAR_7 = VAR_20.minor_status;

 if (!VAR_23) {
  VAR_23 = FUNC_5(VAR_20.actual_mech_type);
  if (!VAR_23) {
   FUNC_8((xdrproc_t) VAR_6, &VAR_20);
   *VAR_7 = 0;
   return (VAR_0);
  }
 }
 *VAR_9 = VAR_23;
 VAR_23->handle = VAR_20.ctx;
 if (VAR_16)
  *VAR_16 = FUNC_1(VAR_23);
 FUNC_4(&VAR_20.output_token, VAR_17);
 if (VAR_18)
  *VAR_18 = VAR_20.ret_flags;
 if (VAR_19)
  *VAR_19 = VAR_20.time_rec;

 FUNC_8((xdrproc_t) VAR_6, &VAR_20);






 if (VAR_20.major_status == VAR_1)
  VAR_20.major_status = FUNC_7(VAR_23);

 return (VAR_20.major_status);
}
