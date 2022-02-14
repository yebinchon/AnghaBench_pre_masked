
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_type; scalar_t__ sk_state; int * sk_rcv_dst; int * sk_dst_cache; int sk_forward_alloc; int sk_wmem_queued; int sk_wmem_alloc; int sk_rmem_alloc; int sk_error_queue; int sk_receive_queue; } ;
struct inet_sock {int opt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct inet_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,struct sock*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,int ) ;

void FUNC_11(struct sock *VAR_3)
{
 struct inet_sock *VAR_4 = FUNC_4(VAR_3);

 FUNC_1(&VAR_3->sk_receive_queue);
 FUNC_1(&VAR_3->sk_error_queue);

 FUNC_8(VAR_3);

 if (VAR_3->sk_type == VAR_1 && VAR_3->sk_state != VAR_2) {
  FUNC_6("Attempt to release TCP socket in state %d %p\n",
         VAR_3->sk_state, VAR_3);
  return;
 }
 if (!FUNC_10(VAR_3, VAR_0)) {
  FUNC_6("Attempt to release alive inet socket %p\n", VAR_3);
  return;
 }

 FUNC_0(FUNC_2(&VAR_3->sk_rmem_alloc));
 FUNC_0(FUNC_2(&VAR_3->sk_wmem_alloc));
 FUNC_0(VAR_3->sk_wmem_queued);
 FUNC_0(VAR_3->sk_forward_alloc);

 FUNC_5(FUNC_7(VAR_4->opt));
 FUNC_3(VAR_3->sk_dst_cache);
 if (VAR_3->sk_rcv_dst) {

  FUNC_3(VAR_3->sk_rcv_dst);
  VAR_3->sk_rcv_dst = ((void*)0);
 }
 FUNC_9(VAR_3);
}
