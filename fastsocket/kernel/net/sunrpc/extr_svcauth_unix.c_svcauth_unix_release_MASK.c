
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * cr_group_info; } ;
struct svc_rqst {TYPE_1__ rq_cred; int * rq_client; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int
FUNC_2(struct svc_rqst *VAR_0)
{


 if (VAR_0->rq_client)
  FUNC_0(VAR_0->rq_client);
 VAR_0->rq_client = ((void*)0);
 if (VAR_0->rq_cred.cr_group_info)
  FUNC_1(VAR_0->rq_cred.cr_group_info);
 VAR_0->rq_cred.cr_group_info = ((void*)0);

 return 0;
}
