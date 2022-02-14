
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_inode {int * ops; int queue_timeout; int waitq; scalar_t__ pipelen; int pipe; int in_downcall; int in_upcall; scalar_t__ nwriters; scalar_t__ nreaders; int * private; int vfs_inode; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct rpc_inode *VAR_2 = (struct rpc_inode *) VAR_1;

 FUNC_3(&VAR_2->vfs_inode);
 VAR_2->private = ((void*)0);
 VAR_2->nreaders = 0;
 VAR_2->nwriters = 0;
 FUNC_1(&VAR_2->in_upcall);
 FUNC_1(&VAR_2->in_downcall);
 FUNC_1(&VAR_2->pipe);
 VAR_2->pipelen = 0;
 FUNC_2(&VAR_2->waitq);
 FUNC_0(&VAR_2->queue_timeout,
       VAR_0);
 VAR_2->ops = ((void*)0);
}
