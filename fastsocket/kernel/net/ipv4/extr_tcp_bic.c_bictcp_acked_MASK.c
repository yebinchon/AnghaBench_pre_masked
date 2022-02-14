
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; } ;
struct bictcp {int delayed_ack; } ;
typedef int s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct bictcp* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_2, u32 VAR_3, s32 VAR_4)
{
 const struct inet_connection_sock *VAR_5 = FUNC_0(VAR_2);

 if (VAR_5->icsk_ca_state == VAR_1) {
  struct bictcp *VAR_6 = FUNC_1(VAR_2);
  VAR_3 -= VAR_6->delayed_ack >> VAR_0;
  VAR_6->delayed_ack += VAR_3;
 }
}
