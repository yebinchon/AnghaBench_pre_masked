
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xdrproc_t ;
struct TYPE_6__ {scalar_t__ oa_flavor; } ;
struct svc_req {int rq_proc; TYPE_1__ rq_cred; } ;
struct TYPE_7__ {int uid; int gid; int gidlen; int* gidlist; } ;
typedef TYPE_2__ rpc_gss_ucred_t ;
struct TYPE_8__ {int service; char* mechanism; } ;
typedef TYPE_3__ rpc_gss_rawcred_t ;
typedef int SVCXPRT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct svc_req*,TYPE_3__**,TYPE_2__**,int *) ;
 int FUNC_2 (struct svc_req*) ;
 int FUNC_3 (struct svc_req*,int ,char*) ;
 int FUNC_4 (struct svc_req*,int ,char*) ;
 int FUNC_5 (struct svc_req*) ;
 int FUNC_6 (struct svc_req*) ;
 int FUNC_7 (struct svc_req*) ;
 int FUNC_8 (struct svc_req*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(struct svc_req *VAR_3, register SVCXPRT *VAR_4)
{
 rpc_gss_rawcred_t *VAR_5;
 rpc_gss_ucred_t *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_3->rq_cred.oa_flavor != VAR_0) {
  FUNC_8(VAR_3);
  return;
 }

 if (!FUNC_1(VAR_3, &VAR_5, &VAR_6, ((void*)0))) {
  FUNC_7(VAR_3);
  return;
 }

 FUNC_0("svc=%d, mech=%s, uid=%d, gid=%d, gids={",
     VAR_5->service, VAR_5->mechanism, VAR_6->uid, VAR_6->gid);
 for (VAR_7 = 0; VAR_7 < VAR_6->gidlen; VAR_7++) {
  if (VAR_7 > 0) FUNC_0(",");
  FUNC_0("%d", VAR_6->gidlist[VAR_7]);
 }
 FUNC_0("}\n");

 switch (VAR_3->rq_proc) {
 case 0:
  if (!FUNC_3(VAR_3, (xdrproc_t) VAR_2, 0)) {
   FUNC_5(VAR_3);
   goto out;
  }
  if (!FUNC_4(VAR_3, (xdrproc_t) VAR_2, 0)) {
   FUNC_7(VAR_3);
  }
  goto out;

 case 1:
  if (!FUNC_3(VAR_3, (xdrproc_t) VAR_1,
   (char *) &VAR_8)) {
   FUNC_5(VAR_3);
   goto out;
  }
  VAR_8 += 100;
  if (!FUNC_4(VAR_3, (xdrproc_t) VAR_1,
   (char *) &VAR_8)) {
   FUNC_7(VAR_3);
  }
  goto out;

 default:
  FUNC_6(VAR_3);
  goto out;
 }

out:
 FUNC_2(VAR_3);
 return;
}
