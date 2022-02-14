
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct rxrpc_call {size_t ackr_reason; int lock; } ;
typedef scalar_t__ s8 ;
typedef int __be32 ;


 int FUNC_0 (struct rxrpc_call*,size_t,int ,int) ;
 scalar_t__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct rxrpc_call *VAR_1, u8 VAR_2,
         __be32 VAR_3, bool VAR_4)
{
 s8 VAR_5 = VAR_0[VAR_2];

 if (VAR_5 > VAR_0[VAR_1->ackr_reason]) {
  FUNC_1(&VAR_1->lock);
  FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
  FUNC_2(&VAR_1->lock);
 }
}
