
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
typedef int uint32_t ;
struct TYPE_7__ {int gc_seq; } ;
struct TYPE_6__ {int length; int * value; } ;
struct rpc_gss_data {scalar_t__ gd_state; scalar_t__ gd_qop; int gd_mech; int gd_ctx; TYPE_2__ gd_cred; TYPE_1__ gd_verf; } ;
struct opaque_auth {int oa_length; int * oa_base; } ;
typedef int num ;
typedef scalar_t__ gss_qop_t ;
struct TYPE_8__ {int length; int * value; } ;
typedef TYPE_3__ gss_buffer_desc ;
typedef int bool_t ;
typedef scalar_t__ OM_uint32 ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,TYPE_3__*,TYPE_3__*,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ,scalar_t__,scalar_t__) ;
 int * FUNC_7 (int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int ) ;
 int VAR_8 ;
 int FUNC_10 (int ,char*) ;
 scalar_t__ VAR_9 ;

__attribute__((used)) static bool_t
FUNC_11(AUTH *VAR_10, struct opaque_auth *VAR_11)
{
 struct rpc_gss_data *VAR_12;
 gss_qop_t VAR_13;
 uint32_t VAR_14;
 gss_buffer_desc VAR_15, VAR_16;
 OM_uint32 VAR_17, VAR_18;

 FUNC_5("in rpc_gss_validate()");

 VAR_12 = FUNC_0(VAR_10);

 if (VAR_12->gd_state == VAR_5) {





  if (VAR_12->gd_verf.value)
   FUNC_10((xdrproc_t) VAR_9,
       (char *) &VAR_12->gd_verf);
  VAR_12->gd_verf.value = FUNC_7(VAR_11->oa_length);
  if (VAR_12->gd_verf.value == ((void*)0)) {
   FUNC_2(VAR_8, "gss_validate: out of memory\n");
   FUNC_1(VAR_6, VAR_0);
   return (VAR_2);
  }
  FUNC_8(VAR_12->gd_verf.value, VAR_11->oa_base, VAR_11->oa_length);
  VAR_12->gd_verf.length = VAR_11->oa_length;
  return (VAR_7);
 }

 VAR_14 = FUNC_4(VAR_12->gd_cred.gc_seq);
 VAR_15.value = &VAR_14;
 VAR_15.length = sizeof(VAR_14);

 VAR_16.value = VAR_11->oa_base;
 VAR_16.length = VAR_11->oa_length;

 VAR_17 = FUNC_3(&VAR_18, VAR_12->gd_ctx, &VAR_15,
     &VAR_16, &VAR_13);
 if (VAR_17 != VAR_3 || VAR_13 != VAR_12->gd_qop) {
  FUNC_6("gss_verify_mic", VAR_12->gd_mech, VAR_17, VAR_18);
  if (VAR_17 == VAR_4) {
   FUNC_9(VAR_10, VAR_7);
  }
  FUNC_1(VAR_6, VAR_1);
  return (VAR_2);
 }
 return (VAR_7);
}
