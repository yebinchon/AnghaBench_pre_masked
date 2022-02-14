
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_2__ {int num_sacks; } ;
struct tcp_sock {TYPE_1__ rx_opt; struct tcp_sack_block* selective_acks; } ;
struct tcp_sack_block {void* end_seq; void* start_seq; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tcp_sack_block,struct tcp_sack_block) ;
 scalar_t__ FUNC_1 (struct tcp_sack_block*,void*,void*) ;
 int FUNC_2 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_3(VAR_1);
 struct tcp_sack_block *VAR_5 = &VAR_4->selective_acks[0];
 int VAR_6 = VAR_4->rx_opt.num_sacks;
 int VAR_7;

 if (!VAR_6)
  goto new_sack;

 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++, VAR_5++) {
  if (FUNC_1(VAR_5, VAR_2, VAR_3)) {

   for (; VAR_7 > 0; VAR_7--, VAR_5--)
    FUNC_0(*VAR_5, *(VAR_5 - 1));
   if (VAR_6 > 1)
    FUNC_2(VAR_4);
   return;
  }
 }







 if (VAR_7 >= VAR_0) {
  VAR_7--;
  VAR_4->rx_opt.num_sacks--;
  VAR_5--;
 }
 for (; VAR_7 > 0; VAR_7--, VAR_5--)
  *VAR_5 = *(VAR_5 - 1);

new_sack:

 VAR_5->start_seq = VAR_2;
 VAR_5->end_seq = VAR_3;
 VAR_4->rx_opt.num_sacks++;
}
