
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int (* xdrproc_t ) (int *,int ) ;
struct TYPE_4__ {scalar_t__ service; } ;
struct svc_rpc_gss_client {scalar_t__ cl_state; int cl_seq; TYPE_1__ cl_rawcred; int cl_qop; int cl_ctx; } ;
typedef int caddr_t ;
typedef int bool_t ;
typedef int XDR ;
struct TYPE_5__ {scalar_t__ svc_ah_private; } ;
typedef TYPE_2__ SVCAUTH ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int (*) (int *,int ),int ,int ,int ,scalar_t__,int ) ;

bool_t
FUNC_2(SVCAUTH *VAR_2, XDR *VAR_3, xdrproc_t VAR_4, caddr_t VAR_5)
{
 struct svc_rpc_gss_client *VAR_6;

 FUNC_0("in svc_rpc_gss_unwrap()");

 VAR_6 = (struct svc_rpc_gss_client *) VAR_2->svc_ah_private;
 if (VAR_6->cl_state != VAR_0
     || VAR_6->cl_rawcred.service == VAR_1) {
  return VAR_4(VAR_3, VAR_5);
 }
 return (FUNC_1(VAR_3, VAR_4, VAR_5,
  VAR_6->cl_ctx, VAR_6->cl_qop,
  VAR_6->cl_rawcred.service, VAR_6->cl_seq));
}
