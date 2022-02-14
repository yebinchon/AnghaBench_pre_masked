
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_4__ {int dsack; } ;
struct tcp_sock {TYPE_1__* duplicate_sack; TYPE_2__ rx_opt; int rcv_nxt; } ;
struct sock {int dummy; } ;
struct TYPE_3__ {void* end_seq; void* start_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (void*,int ) ;
 int FUNC_2 (struct sock*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (struct tcp_sock*) ;
 struct tcp_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_3, u32 VAR_4, u32 VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_4(VAR_3);

 if (FUNC_3(VAR_6) && VAR_2) {
  int VAR_7;

  if (FUNC_1(VAR_4, VAR_6->rcv_nxt))
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_0;

  FUNC_0(FUNC_2(VAR_3), VAR_7);

  VAR_6->rx_opt.dsack = 1;
  VAR_6->duplicate_sack[0].start_seq = VAR_4;
  VAR_6->duplicate_sack[0].end_seq = VAR_5;
 }
}
