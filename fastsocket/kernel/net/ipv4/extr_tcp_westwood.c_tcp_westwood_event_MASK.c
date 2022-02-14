
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct westwood {int reset_rtt_min; int bk; } ;
struct tcp_sock {void* snd_ssthresh; void* snd_cwnd; } ;
struct sock {int dummy; } ;
typedef enum tcp_ca_event { ____Placeholder_tcp_ca_event } tcp_ca_event ;






 struct westwood* FUNC_0 (struct sock*) ;
 struct tcp_sock* FUNC_1 (struct sock*) ;
 void* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct westwood*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_0, enum tcp_ca_event VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_1(VAR_0);
 struct westwood *VAR_3 = FUNC_0(VAR_0);

 switch (VAR_1) {
 case 130:
  FUNC_5(VAR_0);
  break;

 case 131:
  VAR_2->snd_cwnd = VAR_2->snd_ssthresh = FUNC_2(VAR_0);
  break;

 case 129:
  VAR_2->snd_ssthresh = FUNC_2(VAR_0);

  VAR_3->reset_rtt_min = 1;
  break;

 case 128:
  FUNC_6(VAR_0);
  VAR_3->bk += FUNC_4(VAR_0);
  FUNC_3(VAR_3);
  break;

 default:

  break;
 }
}
