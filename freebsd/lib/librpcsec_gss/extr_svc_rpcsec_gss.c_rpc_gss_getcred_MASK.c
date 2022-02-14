
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rpc_gss_client {void* cl_cookie; int cl_ucred; int cl_rawcred; } ;
struct TYPE_2__ {scalar_t__ oa_flavor; } ;
struct svc_req {struct svc_rpc_gss_client* rq_clntcred; TYPE_1__ rq_cred; } ;
typedef int rpc_gss_ucred_t ;
typedef int rpc_gss_rawcred_t ;
typedef int bool_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

bool_t
FUNC_0(struct svc_req *VAR_3, rpc_gss_rawcred_t **VAR_4,
    rpc_gss_ucred_t **VAR_5, void **VAR_6)
{
 struct svc_rpc_gss_client *VAR_7;

 if (VAR_3->rq_cred.oa_flavor != VAR_1)
  return (VAR_0);

 VAR_7 = VAR_3->rq_clntcred;
 if (VAR_4)
  *VAR_4 = &VAR_7->cl_rawcred;
 if (VAR_5)
  *VAR_5 = &VAR_7->cl_ucred;
 if (VAR_6)
  *VAR_6 = VAR_7->cl_cookie;
 return (VAR_2);
}
