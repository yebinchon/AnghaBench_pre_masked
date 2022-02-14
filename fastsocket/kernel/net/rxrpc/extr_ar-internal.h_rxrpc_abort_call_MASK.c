
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rxrpc_call {scalar_t__ state; int state_lock; int events; int abort_code; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct rxrpc_call *VAR_3, u32 VAR_4)
{
 FUNC_1(&VAR_3->state_lock);
 if (VAR_3->state < VAR_1) {
  VAR_3->abort_code = VAR_4;
  VAR_3->state = VAR_2;
  FUNC_0(VAR_0, &VAR_3->events);
 }
 FUNC_2(&VAR_3->state_lock);
}
