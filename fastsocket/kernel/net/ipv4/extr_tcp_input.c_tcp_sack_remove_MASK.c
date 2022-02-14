
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_sacks; } ;
struct tcp_sock {TYPE_1__ rx_opt; struct tcp_sack_block* selective_acks; int rcv_nxt; int out_of_order_queue; } ;
struct tcp_sack_block {int end_seq; int start_seq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tcp_sock *VAR_0)
{
 struct tcp_sack_block *VAR_1 = &VAR_0->selective_acks[0];
 int VAR_2 = VAR_0->rx_opt.num_sacks;
 int VAR_3;


 if (FUNC_2(&VAR_0->out_of_order_queue)) {
  VAR_0->rx_opt.num_sacks = 0;
  return;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2;) {

  if (!FUNC_1(VAR_0->rcv_nxt, VAR_1->start_seq)) {
   int VAR_4;


   FUNC_0(FUNC_1(VAR_0->rcv_nxt, VAR_1->end_seq));


   for (VAR_4=VAR_3+1; VAR_4 < VAR_2; VAR_4++)
    VAR_0->selective_acks[VAR_4-1] = VAR_0->selective_acks[VAR_4];
   VAR_2--;
   continue;
  }
  VAR_3++;
  VAR_1++;
 }
 VAR_0->rx_opt.num_sacks = VAR_2;
}
