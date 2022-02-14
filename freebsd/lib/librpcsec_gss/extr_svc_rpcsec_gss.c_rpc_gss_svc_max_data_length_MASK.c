
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int service; } ;
struct svc_rpc_gss_client {int cl_mech; int cl_qop; int cl_ctx; TYPE_1__ cl_rawcred; } ;
struct svc_req {struct svc_rpc_gss_client* rq_clntcred; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int,int ,int,scalar_t__*) ;
 int FUNC_1 (char*,int ,scalar_t__,scalar_t__) ;





int
FUNC_2(struct svc_req *VAR_3, int VAR_4)
{
 struct svc_rpc_gss_client *VAR_5 = VAR_3->rq_clntcred;
 int VAR_6;
 OM_uint32 VAR_7;
 OM_uint32 VAR_8, VAR_9;
 int VAR_10;

 switch (VAR_5->cl_rawcred.service) {
 case 129:
  return (VAR_4);
  break;

 case 131:
 case 130:
  VAR_6 = VAR_0;
  break;

 case 128:
  VAR_6 = VAR_2;
  break;

 default:
  return (0);
 }

 VAR_8 = FUNC_0(&VAR_9, VAR_5->cl_ctx, VAR_6,
     VAR_5->cl_qop, VAR_4, &VAR_7);

 if (VAR_8 == VAR_1) {
  VAR_10 = (int) VAR_7;
  if (VAR_10 < 0)
   VAR_10 = 0;
  return (VAR_10);
 } else {
  FUNC_1("gss_wrap_size_limit", VAR_5->cl_mech,
      VAR_8, VAR_9);
  return (0);
 }
}
