
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_sock {int fragment_queue; int interrupt_out_queue; int interrupt_in_queue; int ack_queue; } ;
struct sock {int sk_write_queue; } ;


 int FUNC_0 (int *) ;
 struct x25_sock* FUNC_1 (struct sock*) ;

void FUNC_2(struct sock *VAR_0)
{
 struct x25_sock *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(&VAR_0->sk_write_queue);
 FUNC_0(&VAR_1->ack_queue);
 FUNC_0(&VAR_1->interrupt_in_queue);
 FUNC_0(&VAR_1->interrupt_out_queue);
 FUNC_0(&VAR_1->fragment_queue);
}
