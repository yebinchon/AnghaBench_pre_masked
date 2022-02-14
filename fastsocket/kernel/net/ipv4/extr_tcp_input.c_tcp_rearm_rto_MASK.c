
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int packets_out; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int icsk_rto; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*,int ,int ,int ) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_2)
{
 struct tcp_sock *VAR_3 = FUNC_3(VAR_2);

 if (!VAR_3->packets_out) {
  FUNC_1(VAR_2, VAR_0);
 } else {
  FUNC_2(VAR_2, VAR_0,
       FUNC_0(VAR_2)->icsk_rto, VAR_1);
 }
}
