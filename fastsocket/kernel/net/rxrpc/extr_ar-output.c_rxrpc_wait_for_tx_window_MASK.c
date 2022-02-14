
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_sock {int sk; } ;
struct rxrpc_call {int tx_waitq; int acks_winsz; int acks_tail; int acks_head; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,scalar_t__,long) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int *) ;
 int VAR_2 ;
 int FUNC_5 (int *) ;
 int VAR_3 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 long FUNC_8 (long) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (long) ;

__attribute__((used)) static int FUNC_12(struct rxrpc_sock *VAR_4,
        struct rxrpc_call *VAR_5,
        long *VAR_6)
{
 FUNC_1(VAR_3, VAR_2);
 int VAR_7;

 FUNC_2(",{%d},%ld",
        FUNC_0(VAR_5->acks_head, VAR_5->acks_tail, VAR_5->acks_winsz),
        *VAR_6);

 FUNC_4(&VAR_5->tx_waitq, &VAR_3);

 for (;;) {
  FUNC_9(VAR_0);
  VAR_7 = 0;
  if (FUNC_0(VAR_5->acks_head, VAR_5->acks_tail,
          VAR_5->acks_winsz) > 0)
   break;
  if (FUNC_10(VAR_2)) {
   VAR_7 = FUNC_11(*VAR_6);
   break;
  }

  FUNC_6(&VAR_4->sk);
  *VAR_6 = FUNC_8(*VAR_6);
  FUNC_5(&VAR_4->sk);
 }

 FUNC_7(&VAR_5->tx_waitq, &VAR_3);
 FUNC_9(VAR_1);
 FUNC_3(" = %d", VAR_7);
 return VAR_7;
}
