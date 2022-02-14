
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_pipe_msg {scalar_t__ len; int list; } ;
struct rpc_inode {int flags; int waitq; int pipelen; int pipe; int queue_timeout; scalar_t__ nreaders; int * ops; } ;
struct inode {int i_lock; } ;


 int VAR_0 ;
 struct rpc_inode* FUNC_0 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int
FUNC_7(struct inode *VAR_4, struct rpc_pipe_msg *VAR_5)
{
 struct rpc_inode *VAR_6 = FUNC_0(VAR_4);
 int VAR_7 = -VAR_0;

 FUNC_4(&VAR_4->i_lock);
 if (VAR_6->ops == ((void*)0))
  goto out;
 if (VAR_6->nreaders) {
  FUNC_1(&VAR_5->list, &VAR_6->pipe);
  VAR_6->pipelen += VAR_5->len;
  VAR_7 = 0;
 } else if (VAR_6->flags & VAR_1) {
  if (FUNC_2(&VAR_6->pipe))
   FUNC_3(VAR_3,
     &VAR_6->queue_timeout,
     VAR_2);
  FUNC_1(&VAR_5->list, &VAR_6->pipe);
  VAR_6->pipelen += VAR_5->len;
  VAR_7 = 0;
 }
out:
 FUNC_5(&VAR_4->i_lock);
 FUNC_6(&VAR_6->waitq);
 return VAR_7;
}
