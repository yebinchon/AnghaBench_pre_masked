
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_cred {int cr_uid; } ;
struct inode {int i_lock; } ;
struct TYPE_4__ {int errno; } ;
struct gss_upcall_msg {int waitqueue; TYPE_2__ msg; int * ctx; TYPE_1__* inode; } ;
struct gss_cred {struct rpc_cred gc_base; } ;
struct gss_auth {int client; } ;
struct TYPE_3__ {struct inode vfs_inode; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct gss_upcall_msg*) ;
 int FUNC_2 (struct gss_upcall_msg*) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct rpc_cred*,int *) ;
 int FUNC_6 (struct gss_upcall_msg*) ;
 struct gss_upcall_msg* FUNC_7 (int ,struct gss_auth*,struct rpc_cred*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_6 ;
 int FUNC_13 (int ,int,int) ;
 int FUNC_14 () ;

__attribute__((used)) static inline int
FUNC_15(struct gss_auth *VAR_7, struct gss_cred *VAR_8)
{
 struct inode *VAR_9;
 struct rpc_cred *VAR_10 = &VAR_8->gc_base;
 struct gss_upcall_msg *VAR_11;
 FUNC_0(VAR_6);
 int VAR_12 = 0;

 FUNC_3("RPC:       gss_upcall for uid %u\n", VAR_10->cr_uid);
retry:
 VAR_11 = FUNC_7(VAR_7->client, VAR_7, VAR_10);
 if (FUNC_2(VAR_11) == -VAR_0) {
  VAR_12 = FUNC_13(VAR_5,
    VAR_4 >= 0, 15*VAR_2);
  if (VAR_12)
   goto out;
  if (VAR_4 < 0)
   FUNC_14();
  goto retry;
 }
 if (FUNC_1(VAR_11)) {
  VAR_12 = FUNC_2(VAR_11);
  goto out;
 }
 VAR_9 = &VAR_11->inode->vfs_inode;
 for (;;) {
  FUNC_8(&VAR_11->waitqueue, &VAR_6, VAR_3);
  FUNC_11(&VAR_9->i_lock);
  if (VAR_11->ctx != ((void*)0) || VAR_11->msg.errno < 0) {
   break;
  }
  FUNC_12(&VAR_9->i_lock);
  if (FUNC_10()) {
   VAR_12 = -VAR_1;
   goto out_intr;
  }
  FUNC_9();
 }
 if (VAR_11->ctx)
  FUNC_5(VAR_10, VAR_11->ctx);
 else
  VAR_12 = VAR_11->msg.errno;
 FUNC_12(&VAR_9->i_lock);
out_intr:
 FUNC_4(&VAR_11->waitqueue, &VAR_6);
 FUNC_6(VAR_11);
out:
 FUNC_3("RPC:       gss_create_upcall for uid %u result %d\n",
   VAR_10->cr_uid, VAR_12);
 return VAR_12;
}
