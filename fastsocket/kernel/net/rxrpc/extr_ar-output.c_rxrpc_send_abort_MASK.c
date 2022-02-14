
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxrpc_call {scalar_t__ state; int state_lock; int flags; int events; int ack_timer; int resend_timer; int abort_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rxrpc_call*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rxrpc_call *VAR_6, u32 VAR_7)
{
 FUNC_4(&VAR_6->state_lock);

 if (VAR_6->state <= VAR_2) {
  VAR_6->state = VAR_3;
  VAR_6->abort_code = VAR_7;
  FUNC_3(VAR_0, &VAR_6->events);
  FUNC_1(&VAR_6->resend_timer);
  FUNC_1(&VAR_6->ack_timer);
  FUNC_0(VAR_4, &VAR_6->events);
  FUNC_0(VAR_1, &VAR_6->events);
  FUNC_0(VAR_5, &VAR_6->flags);
  FUNC_2(VAR_6);
 }

 FUNC_5(&VAR_6->state_lock);
}
