
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct veno {int cntrtt; int minrtt; int basertt; int diff; int inc; int doing_veno_now; } ;
struct tcp_sock {int snd_cwnd; int snd_ssthresh; int snd_cwnd_cnt; int snd_cwnd_clamp; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 struct veno* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct tcp_sock*,int) ;
 int FUNC_3 (struct sock*,int) ;
 int FUNC_4 (struct sock*,int,int) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_7(struct sock *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_5(VAR_2);
 struct veno *VAR_6 = FUNC_1(VAR_2);

 if (!VAR_6->doing_veno_now) {
  FUNC_4(VAR_2, VAR_3, VAR_4);
  return;
 }


 if (!FUNC_3(VAR_2, VAR_4))
  return;


 if (VAR_6->cntrtt <= 2) {



  FUNC_4(VAR_2, VAR_3, VAR_4);
 } else {
  u64 VAR_7;
  u32 VAR_8;





  VAR_8 = VAR_6->minrtt;

  VAR_7 = (VAR_5->snd_cwnd * VAR_6->basertt);
  VAR_7 <<= VAR_0;
  FUNC_0(VAR_7, VAR_8);

  VAR_6->diff = (VAR_5->snd_cwnd << VAR_0) - VAR_7;

  if (VAR_5->snd_cwnd <= VAR_5->snd_ssthresh) {

   FUNC_6(VAR_5);
  } else {

   if (VAR_6->diff < VAR_1) {



    FUNC_2(VAR_5, VAR_5->snd_cwnd);
   } else {



    if (VAR_5->snd_cwnd_cnt >= VAR_5->snd_cwnd) {
     if (VAR_6->inc
         && VAR_5->snd_cwnd <
         VAR_5->snd_cwnd_clamp) {
      VAR_5->snd_cwnd++;
      VAR_6->inc = 0;
     } else
      VAR_6->inc = 1;
     VAR_5->snd_cwnd_cnt = 0;
    } else
     VAR_5->snd_cwnd_cnt++;
   }

  }
  if (VAR_5->snd_cwnd < 2)
   VAR_5->snd_cwnd = 2;
  else if (VAR_5->snd_cwnd > VAR_5->snd_cwnd_clamp)
   VAR_5->snd_cwnd = VAR_5->snd_cwnd_clamp;
 }


 VAR_6->minrtt = 0x7fffffff;
}
