
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct rpc_clnt {int dummy; } ;
struct gss_upcall_msg {struct gss_auth* auth; int uid; int count; int waitqueue; int rpc_waitqueue; int list; int inode; } ;
struct gss_auth {TYPE_1__** dentry; } ;
struct TYPE_2__ {int d_inode; } ;


 int VAR_0 ;
 struct gss_upcall_msg* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (struct gss_upcall_msg*,struct rpc_clnt*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct gss_upcall_msg*) ;
 struct gss_upcall_msg* FUNC_8 (int,int ) ;
 int FUNC_9 (int *,char*) ;

__attribute__((used)) static inline struct gss_upcall_msg *
FUNC_10(struct gss_auth *VAR_2, uid_t VAR_3, struct rpc_clnt *VAR_4,
  int VAR_5)
{
 struct gss_upcall_msg *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0))
  return FUNC_0(-VAR_0);
 VAR_7 = FUNC_4();
 if (VAR_7 < 0) {
  FUNC_7(VAR_6);
  return FUNC_0(VAR_7);
 }
 VAR_6->inode = FUNC_2(VAR_2->dentry[VAR_7]->d_inode);
 FUNC_1(&VAR_6->list);
 FUNC_9(&VAR_6->rpc_waitqueue, "RPCSEC_GSS upcall waitq");
 FUNC_6(&VAR_6->waitqueue);
 FUNC_3(&VAR_6->count, 1);
 VAR_6->uid = VAR_3;
 VAR_6->auth = VAR_2;
 FUNC_5(VAR_6, VAR_4, VAR_5);
 return VAR_6;
}
