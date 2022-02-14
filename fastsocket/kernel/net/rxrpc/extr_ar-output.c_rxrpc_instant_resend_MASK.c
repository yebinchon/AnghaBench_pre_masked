
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {scalar_t__ state; int state_lock; int events; int flags; int resend_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rxrpc_call*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static inline void FUNC_6(struct rxrpc_call *VAR_3)
{
 FUNC_1(&VAR_3->state_lock);
 if (FUNC_5(&VAR_3->resend_timer) >= 0) {
  FUNC_0(VAR_2, &VAR_3->flags);
  if (VAR_3->state < VAR_0 &&
      !FUNC_4(VAR_1, &VAR_3->events))
   FUNC_3(VAR_3);
 }
 FUNC_2(&VAR_3->state_lock);
}
