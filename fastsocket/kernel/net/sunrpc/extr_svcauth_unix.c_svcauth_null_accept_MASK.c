
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uid_t ;
struct svc_cred {int * cr_group_info; scalar_t__ cr_gid; scalar_t__ cr_uid; } ;
struct TYPE_4__ {struct kvec* head; } ;
struct TYPE_3__ {struct kvec* head; } ;
struct svc_rqst {int rq_flavor; int * rq_client; struct svc_cred rq_cred; TYPE_2__ rq_res; TYPE_1__ rq_arg; } ;
struct kvec {int iov_len; } ;
typedef scalar_t__ gid_t ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (struct kvec*) ;
 int FUNC_4 (struct kvec*,int ) ;

__attribute__((used)) static int
FUNC_5(struct svc_rqst *VAR_7, __be32 *VAR_8)
{
 struct kvec *VAR_9 = &VAR_7->rq_arg.head[0];
 struct kvec *VAR_10 = &VAR_7->rq_res.head[0];
 struct svc_cred *VAR_11 = &VAR_7->rq_cred;

 VAR_11->cr_group_info = ((void*)0);
 VAR_7->rq_client = ((void*)0);

 if (VAR_9->iov_len < 3*4)
  return VAR_3;

 if (FUNC_3(VAR_9) != 0) {
  FUNC_0("svc: bad null cred\n");
  *VAR_8 = VAR_5;
  return VAR_2;
 }
 if (FUNC_3(VAR_9) != FUNC_2(VAR_0) || FUNC_3(VAR_9) != 0) {
  FUNC_0("svc: bad null verf\n");
  *VAR_8 = VAR_6;
  return VAR_2;
 }


 VAR_11->cr_uid = (uid_t) -1;
 VAR_11->cr_gid = (gid_t) -1;
 VAR_11->cr_group_info = FUNC_1(0);
 if (VAR_11->cr_group_info == ((void*)0))
  return VAR_1;


 FUNC_4(VAR_10, VAR_0);
 FUNC_4(VAR_10, 0);

 VAR_7->rq_flavor = VAR_0;
 return VAR_4;
}
