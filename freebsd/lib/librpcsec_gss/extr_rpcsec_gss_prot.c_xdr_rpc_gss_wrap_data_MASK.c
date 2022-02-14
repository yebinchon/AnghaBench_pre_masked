
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int (* xdrproc_t ) (int *,int ) ;
typedef int u_int ;
typedef scalar_t__ rpc_gss_service_t ;
typedef int gss_qop_t ;
typedef int gss_ctx_id_t ;
struct TYPE_8__ {int length; int value; } ;
typedef TYPE_1__ gss_buffer_desc ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__*,int ,int ,TYPE_1__*,TYPE_1__*) ;
 int FUNC_4 (scalar_t__*,TYPE_1__*) ;
 scalar_t__ FUNC_5 (scalar_t__*,int ,int ,int ,TYPE_1__*,int*,TYPE_1__*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int *,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int*) ;

bool_t
FUNC_10(XDR *VAR_5, xdrproc_t VAR_6, caddr_t VAR_7,
        gss_ctx_id_t VAR_8, gss_qop_t VAR_9,
        rpc_gss_service_t VAR_10, u_int VAR_11)
{
 gss_buffer_desc VAR_12, VAR_13;
 OM_uint32 VAR_14, VAR_15;
 int VAR_16, VAR_17, VAR_18;
 u_int VAR_19;
 bool_t VAR_20;


 VAR_16 = FUNC_0(VAR_5);
 FUNC_2(VAR_5, VAR_16 + 4);


 if (!FUNC_9(VAR_5, &VAR_11) || !VAR_6(VAR_5, VAR_7))
  return (VAR_0);
 VAR_17 = FUNC_0(VAR_5);


 VAR_12.length = VAR_17 - VAR_16 - 4;
 FUNC_2(VAR_5, VAR_16 + 4);
 VAR_12.value = FUNC_1(VAR_5, VAR_12.length);

 VAR_20 = VAR_0;

 if (VAR_10 == VAR_3) {

  FUNC_2(VAR_5, VAR_16);
  VAR_19 = VAR_12.length;
  if (!FUNC_9(VAR_5, &VAR_19))
   return (VAR_0);


  VAR_14 = FUNC_3(&VAR_15, VAR_8, VAR_9,
           &VAR_12, &VAR_13);
  if (VAR_14 != VAR_1) {
   FUNC_6("gss_get_mic failed");
   return (VAR_0);
  }

  FUNC_2(VAR_5, VAR_17);
  VAR_20 = FUNC_8(VAR_5, &VAR_13);
  FUNC_4(&VAR_15, &VAR_13);
 }
 else if (VAR_10 == VAR_4) {

  VAR_14 = FUNC_5(&VAR_15, VAR_8, VAR_2, VAR_9, &VAR_12,
        &VAR_18, &VAR_13);
  if (VAR_14 != VAR_1) {
   FUNC_7("gss_wrap", ((void*)0), VAR_14, VAR_15);
   return (VAR_0);
  }

  FUNC_2(VAR_5, VAR_16);
  VAR_20 = FUNC_8(VAR_5, &VAR_13);
  FUNC_4(&VAR_15, &VAR_13);
 }
 return (VAR_20);
}
