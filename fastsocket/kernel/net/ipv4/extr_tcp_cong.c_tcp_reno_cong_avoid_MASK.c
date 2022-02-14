
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcp_sock {int snd_cwnd; int snd_ssthresh; int bytes_acked; int mss_cache; int snd_cwnd_clamp; } ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct tcp_sock*,int) ;
 int FUNC_1 (struct sock*,int ) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct tcp_sock*) ;

void FUNC_4(struct sock *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tcp_sock *VAR_4 = FUNC_2(VAR_1);

 if (!FUNC_1(VAR_1, VAR_3))
  return;


 if (VAR_4->snd_cwnd <= VAR_4->snd_ssthresh)
  FUNC_3(VAR_4);


 else if (VAR_0) {



  if (VAR_4->bytes_acked >= VAR_4->snd_cwnd*VAR_4->mss_cache) {
   VAR_4->bytes_acked -= VAR_4->snd_cwnd*VAR_4->mss_cache;
   if (VAR_4->snd_cwnd < VAR_4->snd_cwnd_clamp)
    VAR_4->snd_cwnd++;
  }
 } else {
  FUNC_0(VAR_4, VAR_4->snd_cwnd);
 }
}
