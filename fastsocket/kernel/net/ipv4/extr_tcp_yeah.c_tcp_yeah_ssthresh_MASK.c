
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct yeah {scalar_t__ doing_reno_now; int lastQ; int reno_count; scalar_t__ fast_count; } ;
struct tcp_sock {int snd_cwnd; } ;
struct sock {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct yeah* FUNC_0 (struct sock*) ;
 void* FUNC_1 (int,unsigned int) ;
 int FUNC_2 (int,void*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static u32 FUNC_4(struct sock *VAR_2) {
 const struct tcp_sock *VAR_3 = FUNC_3(VAR_2);
 struct yeah *VAR_4 = FUNC_0(VAR_2);
 u32 VAR_5;

 if (VAR_4->doing_reno_now < VAR_1) {
  VAR_5 = VAR_4->lastQ;

  VAR_5 = FUNC_2( VAR_5, FUNC_1(VAR_3->snd_cwnd>>1, 2U) );

  VAR_5 = FUNC_1( VAR_5, VAR_3->snd_cwnd >> VAR_0);
 } else
  VAR_5 = FUNC_1(VAR_3->snd_cwnd>>1, 2U);

 VAR_4->fast_count = 0;
 VAR_4->reno_count = FUNC_1(VAR_4->reno_count>>1, 2U);

 return VAR_3->snd_cwnd - VAR_5;
}
