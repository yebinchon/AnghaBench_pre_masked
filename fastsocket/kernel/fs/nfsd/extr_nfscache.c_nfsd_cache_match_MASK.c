
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ len; } ;
struct svc_rqst {scalar_t__ rq_xid; scalar_t__ rq_proc; scalar_t__ rq_prot; scalar_t__ rq_vers; TYPE_1__ rq_arg; } ;
struct svc_cacherep {scalar_t__ c_xid; scalar_t__ c_proc; scalar_t__ c_prot; scalar_t__ c_vers; scalar_t__ c_len; scalar_t__ c_csum; int c_addr; } ;
struct sockaddr {int dummy; } ;
typedef scalar_t__ __wsum ;


 int VAR_0 ;
 int FUNC_0 (struct sockaddr*,struct sockaddr*) ;
 scalar_t__ FUNC_1 (struct sockaddr*) ;
 struct sockaddr* FUNC_2 (struct svc_rqst*) ;

__attribute__((used)) static bool
FUNC_3(struct svc_rqst *VAR_1, __wsum VAR_2, struct svc_cacherep *VAR_3)
{

 if (VAR_1->rq_xid != VAR_3->c_xid || VAR_1->rq_proc != VAR_3->c_proc ||
     VAR_1->rq_prot != VAR_3->c_prot || VAR_1->rq_vers != VAR_3->c_vers ||
     VAR_1->rq_arg.len != VAR_3->c_len ||
     !FUNC_0(FUNC_2(VAR_1), (struct sockaddr *)&VAR_3->c_addr) ||
     FUNC_1(FUNC_2(VAR_1)) != FUNC_1((struct sockaddr *)&VAR_3->c_addr))
  return 0;


 if (VAR_2 != VAR_3->c_csum) {
  ++VAR_0;
  return 0;
 }

 return 1;
}
