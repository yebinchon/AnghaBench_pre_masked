
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rxrpc_call {scalar_t__ state; int state_lock; int flags; int events; int resend_timer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct rxrpc_call *VAR_4, u8 VAR_5,
        unsigned long VAR_6)
{
 FUNC_4(&VAR_4->state_lock);
 if (VAR_4->state >= VAR_0)
  VAR_5 = 0;

 if (VAR_5 & 1) {
  FUNC_0("SET RESEND");
  FUNC_6(VAR_1, &VAR_4->events);
 }

 if (VAR_5 & 2) {
  FUNC_0("MODIFY RESEND TIMER");
  FUNC_6(VAR_3, &VAR_4->flags);
  FUNC_3(&VAR_4->resend_timer, VAR_6);
 } else {
  FUNC_0("KILL RESEND TIMER");
  FUNC_2(&VAR_4->resend_timer);
  FUNC_1(VAR_2, &VAR_4->events);
  FUNC_1(VAR_3, &VAR_4->flags);
 }
 FUNC_5(&VAR_4->state_lock);
}
