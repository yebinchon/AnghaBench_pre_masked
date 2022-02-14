
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_call {int state_lock; int state; int debug_id; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct rxrpc_call*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_1)
{
 struct rxrpc_call *VAR_2 = (struct rxrpc_call *) VAR_1;

 FUNC_0("{%d}", VAR_2->debug_id);

 FUNC_2(&VAR_2->state_lock);
 VAR_2->state = VAR_0;
 FUNC_3(&VAR_2->state_lock);
 FUNC_1(VAR_2);
}
