
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct tcp_sock {unsigned int snd_cwnd; int bytes_acked; int mss_cache; int snd_cwnd_cnt; int snd_cwnd_clamp; } ;


 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct tcp_sock *VAR_2)
{
 int VAR_3;
 unsigned int VAR_4 = 0;
 u32 VAR_5 = VAR_2->snd_cwnd;

 if (FUNC_2(!VAR_5)) {
  FUNC_1("snd_cwnd is nul, please report this bug.\n");
  VAR_5 = 1U;
 }
 if (VAR_0 && VAR_2->bytes_acked < VAR_2->mss_cache)
  return;

 if (VAR_1 > 0 && VAR_2->snd_cwnd > VAR_1)
  VAR_3 = VAR_1 >> 1;
 else
  VAR_3 = VAR_5;




 if (VAR_0 > 1 && VAR_2->bytes_acked >= 2*VAR_2->mss_cache)
  VAR_3 <<= 1;
 VAR_2->bytes_acked = 0;

 VAR_2->snd_cwnd_cnt += VAR_3;
 while (VAR_2->snd_cwnd_cnt >= VAR_5) {
  VAR_2->snd_cwnd_cnt -= VAR_5;
  VAR_4++;
 }
 VAR_2->snd_cwnd = FUNC_0(VAR_5 + VAR_4, VAR_2->snd_cwnd_clamp);
}
