
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_lock; } ;
struct rpc_inode {int in_downcall; struct inode vfs_inode; } ;
struct gss_upcall_msg {int list; int count; int uid; struct rpc_inode* inode; } ;


 struct gss_upcall_msg* FUNC_0 (struct rpc_inode*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static inline struct gss_upcall_msg *
FUNC_5(struct gss_upcall_msg *VAR_0)
{
 struct rpc_inode *VAR_1 = VAR_0->inode;
 struct inode *VAR_2 = &VAR_1->vfs_inode;
 struct gss_upcall_msg *VAR_3;

 FUNC_3(&VAR_2->i_lock);
 VAR_3 = FUNC_0(VAR_1, VAR_0->uid);
 if (VAR_3 == ((void*)0)) {
  FUNC_1(&VAR_0->count);
  FUNC_2(&VAR_0->list, &VAR_1->in_downcall);
 } else
  VAR_0 = VAR_3;
 FUNC_4(&VAR_2->i_lock);
 return VAR_0;
}
