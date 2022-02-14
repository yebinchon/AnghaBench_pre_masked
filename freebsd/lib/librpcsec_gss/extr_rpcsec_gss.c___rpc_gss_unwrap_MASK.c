
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int (* xdrproc_t ) (int *,void*) ;
struct TYPE_2__ {scalar_t__ gc_svc; int gc_seq; } ;
struct rpc_gss_data {scalar_t__ gd_state; TYPE_1__ gd_cred; int gd_qop; int gd_ctx; } ;
typedef int bool_t ;
typedef int XDR ;
typedef int AUTH ;


 struct rpc_gss_data* FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,int (*) (int *,void*),void*,int ,int ,scalar_t__,int ) ;

bool_t
FUNC_3(AUTH *VAR_2, XDR *VAR_3, xdrproc_t VAR_4, void *VAR_5)
{
 struct rpc_gss_data *VAR_6;

 FUNC_1("in rpc_gss_unwrap()");

 VAR_6 = FUNC_0(VAR_2);

 if (VAR_6->gd_state != VAR_0 ||
     VAR_6->gd_cred.gc_svc == VAR_1) {
  return (VAR_4(VAR_3, VAR_5));
 }
 return (FUNC_2(VAR_3, VAR_4, VAR_5,
  VAR_6->gd_ctx, VAR_6->gd_qop, VAR_6->gd_cred.gc_svc,
  VAR_6->gd_cred.gc_seq));
}
