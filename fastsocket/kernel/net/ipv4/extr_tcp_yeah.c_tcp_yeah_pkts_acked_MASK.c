
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct yeah {int pkts_acked; } ;
struct sock {int dummy; } ;
struct inet_connection_sock {scalar_t__ icsk_ca_state; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct yeah* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1, u32 VAR_2, s32 VAR_3)
{
 const struct inet_connection_sock *VAR_4 = FUNC_0(VAR_1);
 struct yeah *VAR_5 = FUNC_1(VAR_1);

 if (VAR_4->icsk_ca_state == VAR_0)
  VAR_5->pkts_acked = VAR_2;

 FUNC_2(VAR_1, VAR_2, VAR_3);
}
