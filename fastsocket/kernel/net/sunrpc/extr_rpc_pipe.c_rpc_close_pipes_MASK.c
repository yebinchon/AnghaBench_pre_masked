
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_ops {int (* release_pipe ) (struct inode*) ;int destroy_msg; } ;
struct rpc_inode {scalar_t__ nreaders; scalar_t__ nwriters; int queue_timeout; struct rpc_pipe_ops* ops; scalar_t__ pipelen; int pipe; int in_upcall; } ;
struct inode {int i_mutex; int i_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct rpc_inode* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*,int *) ;
 int FUNC_7 (struct rpc_inode*,int *,int ,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*) ;

__attribute__((used)) static void
FUNC_11(struct inode *VAR_2)
{
 struct rpc_inode *VAR_3 = FUNC_1(VAR_2);
 const struct rpc_pipe_ops *VAR_4;
 int VAR_5;

 FUNC_4(&VAR_2->i_mutex);
 VAR_4 = VAR_3->ops;
 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_1);
  FUNC_8(&VAR_2->i_lock);
  VAR_5 = VAR_3->nreaders != 0 || VAR_3->nwriters != 0;
  VAR_3->nreaders = 0;
  FUNC_3(&VAR_3->in_upcall, &VAR_1);
  FUNC_3(&VAR_3->pipe, &VAR_1);
  VAR_3->pipelen = 0;
  VAR_3->ops = ((void*)0);
  FUNC_9(&VAR_2->i_lock);
  FUNC_7(VAR_3, &VAR_1, VAR_4->destroy_msg, -VAR_0);
  VAR_3->nwriters = 0;
  if (VAR_5 && VAR_4->release_pipe)
   VAR_4->release_pipe(VAR_2);
  FUNC_2(&VAR_3->queue_timeout);
 }
 FUNC_6(VAR_2, ((void*)0));
 FUNC_5(&VAR_2->i_mutex);
}
