
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {unsigned int advmss; scalar_t__ pred_flags; int rcv_nxt; int copied_seq; int rcv_ssthresh; } ;
struct sock {scalar_t__ sk_rcvbuf; int sk_rmem_alloc; int sk_receive_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sock*,char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,unsigned int) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int *,int ,int *,int ,int ) ;
 int FUNC_10 (struct sock*) ;
 scalar_t__ VAR_2 ;
 int FUNC_11 (struct sock*) ;
 struct tcp_sock* FUNC_12 (struct sock*) ;

__attribute__((used)) static int FUNC_13(struct sock *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_12(VAR_3);

 FUNC_1(VAR_3, "prune_queue: c=%x\n", VAR_4->copied_seq);

 FUNC_0(FUNC_7(VAR_3), VAR_0);

 if (FUNC_2(&VAR_3->sk_rmem_alloc) >= VAR_3->sk_rcvbuf)
  FUNC_8(VAR_3);
 else if (VAR_2)
  VAR_4->rcv_ssthresh = FUNC_3(VAR_4->rcv_ssthresh, 4U * VAR_4->advmss);

 FUNC_10(VAR_3);
 if (!FUNC_6(&VAR_3->sk_receive_queue))
  FUNC_9(VAR_3, &VAR_3->sk_receive_queue,
        FUNC_5(&VAR_3->sk_receive_queue),
        ((void*)0),
        VAR_4->copied_seq, VAR_4->rcv_nxt);
 FUNC_4(VAR_3);

 if (FUNC_2(&VAR_3->sk_rmem_alloc) <= VAR_3->sk_rcvbuf)
  return 0;




 FUNC_11(VAR_3);

 if (FUNC_2(&VAR_3->sk_rmem_alloc) <= VAR_3->sk_rcvbuf)
  return 0;





 FUNC_0(FUNC_7(VAR_3), VAR_1);


 VAR_4->pred_flags = 0;
 return -1;
}
