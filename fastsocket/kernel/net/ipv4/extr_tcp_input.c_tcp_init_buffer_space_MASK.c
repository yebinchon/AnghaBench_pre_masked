
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int space; } ;
struct tcp_sock {int window_clamp; int advmss; int snd_cwnd_stamp; int rcv_ssthresh; int rcv_wnd; TYPE_1__ rcvq_space; } ;
struct sock {int sk_userlocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_2 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_5(VAR_4);
 int VAR_6;

 if (!(VAR_4->sk_userlocks & VAR_0))
  FUNC_2(VAR_4);
 if (!(VAR_4->sk_userlocks & VAR_1))
  FUNC_3(VAR_4);

 VAR_5->rcvq_space.space = VAR_5->rcv_wnd;

 VAR_6 = FUNC_4(VAR_4);

 if (VAR_5->window_clamp >= VAR_6) {
  VAR_5->window_clamp = VAR_6;

  if (VAR_2 && VAR_6 > 4 * VAR_5->advmss)
   VAR_5->window_clamp = FUNC_0(VAR_6 -
            (VAR_6 >> VAR_2),
            4 * VAR_5->advmss);
 }


 if (VAR_2 &&
     VAR_5->window_clamp > 2 * VAR_5->advmss &&
     VAR_5->window_clamp + VAR_5->advmss > VAR_6)
  VAR_5->window_clamp = FUNC_0(2 * VAR_5->advmss, VAR_6 - VAR_5->advmss);

 VAR_5->rcv_ssthresh = FUNC_1(VAR_5->rcv_ssthresh, VAR_5->window_clamp);
 VAR_5->snd_cwnd_stamp = VAR_3;
}
