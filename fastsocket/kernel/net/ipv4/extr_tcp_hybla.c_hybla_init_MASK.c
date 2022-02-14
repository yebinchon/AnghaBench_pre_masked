
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int snd_cwnd; int snd_cwnd_clamp; int srtt; } ;
struct sock {int dummy; } ;
struct hybla {int rho; int hybla_en; int minrtt; scalar_t__ snd_cwnd_cents; scalar_t__ rho2_7ls; scalar_t__ rho_3ls; scalar_t__ rho2; } ;


 int FUNC_0 (struct sock*) ;
 struct hybla* FUNC_1 (struct sock*) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct tcp_sock *VAR_1 = FUNC_2(VAR_0);
 struct hybla *VAR_2 = FUNC_1(VAR_0);

 VAR_2->rho = 0;
 VAR_2->rho2 = 0;
 VAR_2->rho_3ls = 0;
 VAR_2->rho2_7ls = 0;
 VAR_2->snd_cwnd_cents = 0;
 VAR_2->hybla_en = 1;
 VAR_1->snd_cwnd = 2;
 VAR_1->snd_cwnd_clamp = 65535;


 FUNC_0(VAR_0);


 VAR_2->minrtt = VAR_1->srtt;
 VAR_1->snd_cwnd = VAR_2->rho;
}
