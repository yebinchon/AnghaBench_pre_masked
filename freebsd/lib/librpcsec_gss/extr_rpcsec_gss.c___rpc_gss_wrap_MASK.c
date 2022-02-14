
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ (* xdrproc_t ) (int *,void*) ;
typedef int tmpheader ;
struct TYPE_7__ {scalar_t__ gc_proc; scalar_t__ gc_svc; int gc_seq; } ;
struct rpc_gss_data {scalar_t__ gd_state; TYPE_2__ gd_cred; int gd_qop; int gd_ctx; int gd_mech; } ;
struct opaque_auth {char* oa_base; size_t oa_length; void* oa_flavor; } ;
struct TYPE_6__ {size_t length; char* value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int credbuf ;
typedef scalar_t__ bool_t ;
typedef int XDR ;
typedef scalar_t__ OM_uint32 ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *) ;
 int VAR_12 ;
 void* FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,size_t) ;
 struct opaque_auth VAR_13 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (scalar_t__*,int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (scalar_t__*,TYPE_1__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_10 (int *,struct opaque_auth*) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_12 (int *,scalar_t__ (*) (int *,void*),void*,int ,int ,scalar_t__,int ) ;
 int FUNC_13 (int *,char*,int,int ) ;

bool_t
FUNC_14(AUTH *VAR_15, void *VAR_16, size_t VAR_17,
    XDR* VAR_18, xdrproc_t VAR_19, void *VAR_20)
{
 XDR VAR_21;
 char VAR_22[VAR_5];
 char VAR_23[VAR_5];
 struct opaque_auth VAR_24, VAR_25;
 struct rpc_gss_data *VAR_26;
 gss_buffer_desc VAR_27, VAR_28;
 OM_uint32 VAR_29, VAR_30;
 bool_t VAR_31;

 FUNC_7("in rpc_gss_wrap()");

 VAR_26 = FUNC_0(VAR_15);

 if (VAR_26->gd_state == VAR_8)
  VAR_26->gd_cred.gc_seq++;






 FUNC_13(&VAR_21, VAR_22, sizeof(VAR_22), VAR_12);
 if (!FUNC_11(&VAR_21, &VAR_26->gd_cred)) {
  FUNC_1(&VAR_21);
  FUNC_4(VAR_10, VAR_0);
  return (VAR_2);
 }
 VAR_24.oa_flavor = VAR_6;
 VAR_24.oa_base = VAR_22;
 VAR_24.oa_length = FUNC_2(&VAR_21);
 FUNC_1(&VAR_21);

 FUNC_13(&VAR_21, VAR_23, sizeof(VAR_23), VAR_12);
 if (!FUNC_3(&VAR_21, VAR_16, VAR_17) ||
     !FUNC_10(&VAR_21, &VAR_24)) {
  FUNC_1(&VAR_21);
  FUNC_4(VAR_10, VAR_0);
  return (VAR_2);
 }
 VAR_17 = FUNC_2(&VAR_21);
 FUNC_1(&VAR_21);

 if (!FUNC_3(VAR_18, VAR_23, VAR_17)) {
  FUNC_4(VAR_10, VAR_0);
  return (VAR_2);
 }

 if (VAR_26->gd_cred.gc_proc == VAR_9 ||
     VAR_26->gd_cred.gc_proc == VAR_7) {
  if (!FUNC_10(VAR_18, &VAR_13)) {
   FUNC_4(VAR_10, VAR_0);
   return (VAR_2);
  }
 } else {




  VAR_27.length = VAR_17;
  VAR_27.value = VAR_23;

  VAR_29 = FUNC_5(&VAR_30, VAR_26->gd_ctx, VAR_26->gd_qop,
      &VAR_27, &VAR_28);

  if (VAR_29 != VAR_3) {
   FUNC_8("gss_get_mic", VAR_26->gd_mech,
       VAR_29, VAR_30);
   if (VAR_29 == VAR_4) {
    FUNC_9(VAR_15, VAR_11);
   }
   FUNC_4(VAR_10, VAR_1);
   return (VAR_2);
  }

  VAR_25.oa_flavor = VAR_6;
  VAR_25.oa_base = VAR_28.value;
  VAR_25.oa_length = VAR_28.length;

  VAR_31 = FUNC_10(VAR_18, &VAR_25);
  FUNC_6(&VAR_30, &VAR_28);
  if (!VAR_31) {
   FUNC_4(VAR_10, VAR_0);
   return (VAR_2);
  }
 }

 if (VAR_26->gd_state != VAR_8 ||
     VAR_26->gd_cred.gc_svc == VAR_14) {
  return (VAR_19(VAR_18, VAR_20));
 }
 return (FUNC_12(VAR_18, VAR_19, VAR_20,
  VAR_26->gd_ctx, VAR_26->gd_qop, VAR_26->gd_cred.gc_svc,
  VAR_26->gd_cred.gc_seq));
}
