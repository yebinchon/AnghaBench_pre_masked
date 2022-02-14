
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int * rq_gssclient; struct gss_svc_data* rq_auth_data; } ;
struct rsc {int mechctx; } ;
struct rpc_gss_wire_cred {int gc_svc; } ;
struct gss_svc_data {struct rpc_gss_wire_cred clcred; struct rsc* rsci; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (struct svc_rqst*) ;

__attribute__((used)) static int
FUNC_2(struct svc_rqst *VAR_4)
{
 struct gss_svc_data *VAR_5 = VAR_4->rq_auth_data;
 struct rsc *VAR_6 = VAR_5->rsci;
 struct rpc_gss_wire_cred *VAR_7 = &VAR_5->clcred;
 int VAR_8;
 VAR_4->rq_gssclient = FUNC_0(VAR_6->mechctx, VAR_7->gc_svc);
 if (VAR_4->rq_gssclient == ((void*)0))
  return VAR_1;
 VAR_8 = FUNC_1(VAR_4);
 if (VAR_8 == VAR_2 || VAR_8 == VAR_0)
  return VAR_8;
 return VAR_3;
}
