
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_10__ {scalar_t__ length; scalar_t__ value; } ;
struct svc_rpc_gss_client {TYPE_4__ cl_verf; int cl_state; int cl_mech; int cl_qop; int cl_ctx; } ;
struct svc_req {TYPE_2__* rq_xprt; } ;
typedef int nseq ;
struct TYPE_9__ {int length; int * value; } ;
typedef TYPE_3__ gss_buffer_desc ;
typedef scalar_t__ caddr_t ;
typedef int bool_t ;
struct TYPE_7__ {scalar_t__ oa_length; scalar_t__ oa_base; int oa_flavor; } ;
struct TYPE_8__ {TYPE_1__ xp_verf; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int ,TYPE_3__*,TYPE_4__*) ;
 int FUNC_1 (scalar_t__*,TYPE_4__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static bool_t
FUNC_5(struct svc_rpc_gss_client *VAR_5,
    struct svc_req *VAR_6, u_int VAR_7)
{
 gss_buffer_desc VAR_8;
 OM_uint32 VAR_9, VAR_10;
 uint32_t VAR_11;

 FUNC_3("in svc_rpc_gss_nextverf()");

 VAR_11 = FUNC_2(VAR_7);
 VAR_8.value = &VAR_11;
 VAR_8.length = sizeof(VAR_11);

 if (VAR_5->cl_verf.value)
  FUNC_1(&VAR_10, &VAR_5->cl_verf);

 VAR_9 = FUNC_0(&VAR_10, VAR_5->cl_ctx, VAR_5->cl_qop,
     &VAR_8, &VAR_5->cl_verf);

 if (VAR_9 != VAR_2) {
  FUNC_4("gss_get_mic", VAR_5->cl_mech, VAR_9, VAR_10);
  VAR_5->cl_state = VAR_0;
  return (VAR_1);
 }
 VAR_6->rq_xprt->xp_verf.oa_flavor = VAR_3;
 VAR_6->rq_xprt->xp_verf.oa_base = (caddr_t)VAR_5->cl_verf.value;
 VAR_6->rq_xprt->xp_verf.oa_length = (u_int)VAR_5->cl_verf.length;

 return (VAR_4);
}
