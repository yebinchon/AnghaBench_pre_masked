
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int state; int state_lock; int ack_timer; int events; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;

 int FUNC_0 (char*) ;
 int FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (struct rxrpc_call*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rxrpc_call *VAR_3)
{

 FUNC_5(&VAR_3->state_lock);

 switch (VAR_3->state) {
 case 129:
  VAR_3->state = VAR_1;
  FUNC_0("request final ACK");



  FUNC_1(VAR_3);
  FUNC_3(VAR_0, &VAR_3->events);
  if (FUNC_4(&VAR_3->ack_timer) >= 0)
   FUNC_2(VAR_3);
  break;

 case 128:
  VAR_3->state = VAR_2;
 default:
  break;
 }

 FUNC_6(&VAR_3->state_lock);
}
