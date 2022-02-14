
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {unsigned int packets_out; int frto_counter; int snd_nxt; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int end_seq; } ;
struct TYPE_3__ {int icsk_rto; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int ,int ) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_2, struct sk_buff *VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_4(VAR_2);
 unsigned int VAR_5 = VAR_4->packets_out;

 FUNC_3(VAR_2, VAR_3);
 VAR_4->snd_nxt = FUNC_0(VAR_3)->end_seq;


 if (VAR_4->frto_counter == 2)
  VAR_4->frto_counter = 3;

 VAR_4->packets_out += FUNC_5(VAR_3);
 if (!VAR_5)
  FUNC_2(VAR_2, VAR_0,
       FUNC_1(VAR_2)->icsk_rto, VAR_1);
}
