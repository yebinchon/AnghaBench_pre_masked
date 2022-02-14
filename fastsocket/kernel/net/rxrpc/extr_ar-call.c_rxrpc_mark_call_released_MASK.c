
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {scalar_t__ state; int state_lock; int events; int abort_code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,struct rxrpc_call*) ;
 int FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rxrpc_call *VAR_6)
{
 bool VAR_7;

 FUNC_3(&VAR_6->state_lock);
 if (VAR_6->state < VAR_2) {
  VAR_7 = 0;
  if (VAR_6->state < VAR_1) {
   FUNC_0("abort call %p", VAR_6);
   VAR_6->state = VAR_3;
   VAR_6->abort_code = VAR_5;
   if (!FUNC_2(VAR_0, &VAR_6->events))
    VAR_7 = 1;
  }
  if (!FUNC_2(VAR_4, &VAR_6->events))
   VAR_7 = 1;
  if (VAR_7)
   FUNC_1(VAR_6);
 }
 FUNC_4(&VAR_6->state_lock);
}
