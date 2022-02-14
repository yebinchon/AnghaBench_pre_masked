
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxrpc_call {int state; int state_lock; int flags; int events; int resend_timer; int acks_latest; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct rxrpc_call *VAR_5, u32 VAR_6)
{
 FUNC_4(&VAR_5->state_lock);

 switch (VAR_5->state) {
 case 128:
  VAR_5->state = VAR_0;
  VAR_5->acks_latest = VAR_6;

  FUNC_0("implicit ACKALL %%%u", VAR_5->acks_latest);
  FUNC_2(VAR_1, &VAR_5->events);
  FUNC_5(&VAR_5->state_lock);

  if (FUNC_3(&VAR_5->resend_timer) >= 0) {
   FUNC_1(VAR_3, &VAR_5->events);
   FUNC_1(VAR_2, &VAR_5->events);
   FUNC_1(VAR_4, &VAR_5->flags);
  }
  break;

 default:
  FUNC_5(&VAR_5->state_lock);
  break;
 }
}
