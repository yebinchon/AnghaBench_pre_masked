
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef int u_long ;
struct TYPE_4__ {int oa_flavor; } ;
struct svc_req {scalar_t__ rq_clntcred; TYPE_2__ rq_cred; } ;
struct authunix_parms {int aup_gid; int aup_uid; } ;
struct TYPE_3__ {int name; } ;
struct authdes_cred {TYPE_1__ adc_fullname; } ;
typedef int gid_t ;
typedef int SVCXPRT ;




 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct svc_req *VAR_1, uid_t *VAR_2, gid_t *VAR_3, SVCXPRT *VAR_4)
{
  struct authunix_parms *VAR_5 = (struct authunix_parms *) ((void*)0);




  switch (VAR_1->rq_cred.oa_flavor) {

  case 128:
    VAR_5 = (struct authunix_parms *) VAR_1->rq_clntcred;
    *VAR_2 = VAR_5->aup_uid;
    *VAR_3 = VAR_5->aup_gid;
    break;
  default:
    *VAR_2 = *VAR_3 = VAR_0;
    FUNC_1(VAR_4);
    return -1;
  }

  return 0;
}
