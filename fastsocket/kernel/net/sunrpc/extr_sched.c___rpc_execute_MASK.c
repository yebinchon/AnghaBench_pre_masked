
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_wait_queue {int lock; } ;
struct rpc_task {void (* tk_callback ) (struct rpc_task*) ;void (* tk_action ) (struct rpc_task*) ;int tk_status; int tk_pid; int tk_flags; int tk_runstate; struct rpc_wait_queue* tk_waitqueue; int tk_client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rpc_task*) ;
 int FUNC_2 (struct rpc_task*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int FUNC_5 (struct rpc_task*) ;
 int FUNC_6 (struct rpc_task*,int) ;
 int FUNC_7 (struct rpc_task*) ;
 int FUNC_8 (struct rpc_task*) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct rpc_task*,void (*) (struct rpc_task*)) ;

__attribute__((used)) static void FUNC_12(struct rpc_task *VAR_5)
{
 struct rpc_wait_queue *VAR_6;
 int VAR_7 = FUNC_1(VAR_5);
 int VAR_8 = 0;

 FUNC_3("RPC: %5u __rpc_execute flags=0x%x\n",
   VAR_5->tk_pid, VAR_5->tk_flags);

 FUNC_0(FUNC_2(VAR_5));

 for (;;) {
  void (*VAR_9)(struct rpc_task *);




  VAR_9 = VAR_5->tk_callback;
  VAR_5->tk_callback = ((void*)0);
  if (VAR_9 == ((void*)0)) {






   VAR_9 = VAR_5->tk_action;
   if (VAR_9 == ((void*)0))
    break;
  }
  FUNC_11(VAR_5->tk_client, VAR_5, VAR_5->tk_action);
  VAR_9(VAR_5);




  if (!FUNC_2(VAR_5))
   continue;
  VAR_6 = VAR_5->tk_waitqueue;
  FUNC_9(&VAR_6->lock);
  if (!FUNC_2(VAR_5)) {
   FUNC_10(&VAR_6->lock);
   continue;
  }
  FUNC_5(VAR_5);
  FUNC_10(&VAR_6->lock);
  if (VAR_7)
   return;


  FUNC_3("RPC: %5u sync task going to sleep\n", VAR_5->tk_pid);
  VAR_8 = FUNC_4(&VAR_5->tk_runstate,
    VAR_2, VAR_4,
    VAR_3);
  if (VAR_8 == -VAR_0) {






   FUNC_3("RPC: %5u got signal\n", VAR_5->tk_pid);
   VAR_5->tk_flags |= VAR_1;
   FUNC_6(VAR_5, -VAR_0);
  }
  FUNC_8(VAR_5);
  FUNC_3("RPC: %5u sync task resuming\n", VAR_5->tk_pid);
 }

 FUNC_3("RPC: %5u return %d, status %d\n", VAR_5->tk_pid, VAR_8,
   VAR_5->tk_status);

 FUNC_7(VAR_5);
}
