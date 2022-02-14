
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int xdrproc_t ;
struct accept_sec_context_res {scalar_t__ major_status; int minor_status; int ret_flags; int time_rec; scalar_t__ delegated_cred_handle; int output_token; int src_name; scalar_t__ ctx; int mech_type; } ;
struct accept_sec_context_args {int input_chan_bindings; int input_token; scalar_t__ cred; scalar_t__ ctx; } ;
struct _gss_name_t {int dummy; } ;
struct _gss_cred_id_t {int dummy; } ;
typedef int res ;
typedef TYPE_1__* gss_name_t ;
typedef TYPE_2__* gss_ctx_id_t ;
typedef TYPE_3__* gss_cred_id_t ;
typedef int gss_channel_bindings_t ;
typedef int * gss_buffer_t ;
typedef int gss_OID ;
typedef enum clnt_stat { ____Placeholder_clnt_stat } clnt_stat ;
struct TYPE_15__ {scalar_t__ handle; } ;
struct TYPE_14__ {scalar_t__ handle; } ;
struct TYPE_13__ {int handle; } ;
typedef int OM_uint32 ;
typedef int CLIENT ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct accept_sec_context_res*,int) ;
 int FUNC_3 (int*,TYPE_3__**) ;
 int FUNC_4 (int*,TYPE_1__**) ;
 int FUNC_5 (struct accept_sec_context_args*,struct accept_sec_context_res*,int *) ;
 int FUNC_6 (int *,int *) ;
 TYPE_2__* FUNC_7 (int ) ;
 int * FUNC_8 () ;
 scalar_t__ FUNC_9 (TYPE_2__*) ;
 void* FUNC_10 (int,int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_11 (int ,struct accept_sec_context_res*) ;

OM_uint32 FUNC_12(OM_uint32 *VAR_8,
    gss_ctx_id_t *VAR_9,
    const gss_cred_id_t VAR_10,
    const gss_buffer_t VAR_11,
    const gss_channel_bindings_t VAR_12,
    gss_name_t *VAR_13,
    gss_OID *VAR_14,
    gss_buffer_t VAR_15,
    OM_uint32 *VAR_16,
    OM_uint32 *VAR_17,
    gss_cred_id_t *VAR_18)
{
 struct accept_sec_context_res VAR_19;
 struct accept_sec_context_args VAR_20;
 enum clnt_stat VAR_21;
 gss_ctx_id_t VAR_22 = *VAR_9;
 gss_name_t VAR_23;
 gss_cred_id_t VAR_24;
 CLIENT *VAR_25;

 VAR_25 = FUNC_8();
 if (VAR_25 == ((void*)0)) {
  *VAR_8 = 0;
  return (VAR_3);
 }

 if (VAR_22)
  VAR_20.ctx = VAR_22->handle;
 else
  VAR_20.ctx = 0;
 if (VAR_10)
  VAR_20.cred = VAR_10->handle;
 else
  VAR_20.cred = 0;
 VAR_20.input_token = *VAR_11;
 VAR_20.input_chan_bindings = VAR_12;

 FUNC_2(&VAR_19, sizeof(VAR_19));
 VAR_21 = FUNC_5(&VAR_20, &VAR_19, VAR_25);
 FUNC_0(VAR_25);
 if (VAR_21 != VAR_6) {
  *VAR_8 = VAR_21;
  return (VAR_3);
 }

 if (VAR_19.major_status != VAR_1
     && VAR_19.major_status != VAR_2) {
  *VAR_8 = VAR_19.minor_status;
  FUNC_11((xdrproc_t) VAR_7, &VAR_19);
  return (VAR_19.major_status);
 }

 *VAR_8 = VAR_19.minor_status;

 if (!VAR_22) {
  VAR_22 = FUNC_7(VAR_19.mech_type);
  if (!VAR_22) {
   FUNC_11((xdrproc_t) VAR_7, &VAR_19);
   *VAR_8 = 0;
   return (VAR_0);
  }
 }
 *VAR_9 = VAR_22;

 VAR_22->handle = VAR_19.ctx;
 VAR_23 = FUNC_10(sizeof(struct _gss_name_t), VAR_4, VAR_5);
 VAR_23->handle = VAR_19.src_name;
 if (VAR_13) {
  *VAR_13 = VAR_23;
 } else {
  OM_uint32 VAR_26;
  FUNC_4(&VAR_26, &VAR_23);
 }
 if (VAR_14)
  *VAR_14 = FUNC_1(VAR_22);
 FUNC_6(&VAR_19.output_token, VAR_15);
 if (VAR_16)
  *VAR_16 = VAR_19.ret_flags;
 if (VAR_17)
  *VAR_17 = VAR_19.time_rec;
 VAR_24 = FUNC_10(sizeof(struct _gss_cred_id_t), VAR_4, VAR_5);
 VAR_24->handle = VAR_19.delegated_cred_handle;
 if (VAR_18) {
  *VAR_18 = VAR_24;
 } else {
  OM_uint32 VAR_27;
  FUNC_3(&VAR_27, &VAR_24);
 }

 FUNC_11((xdrproc_t) VAR_7, &VAR_19);






 if (VAR_19.major_status == VAR_1)
  VAR_19.major_status = FUNC_9(VAR_22);

 return (VAR_19.major_status);
}
