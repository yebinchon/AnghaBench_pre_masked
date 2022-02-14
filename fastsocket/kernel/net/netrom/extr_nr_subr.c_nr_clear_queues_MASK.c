
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_queue; } ;
struct nr_sock {int frag_queue; int reseq_queue; int ack_queue; } ;


 struct nr_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct sock *VAR_0)
{
 struct nr_sock *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->sk_write_queue);
 FUNC_1(&VAR_1->ack_queue);
 FUNC_1(&VAR_1->reseq_queue);
 FUNC_1(&VAR_1->frag_queue);
}
