
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {int snd_cwnd; int mss_cache; } ;
struct sock {int sk_gso_max_size; } ;
struct TYPE_2__ {int sk_gso_max_segs; } ;


 scalar_t__ FUNC_0 (struct sock const*) ;
 TYPE_1__* FUNC_1 (struct sock const*) ;
 int VAR_0 ;
 int FUNC_2 (struct tcp_sock const*) ;
 struct tcp_sock* FUNC_3 (struct sock const*) ;

int FUNC_4(const struct sock *VAR_1, u32 VAR_2)
{
 const struct tcp_sock *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4;

 if (VAR_2 >= VAR_3->snd_cwnd)
  return 1;

 VAR_4 = VAR_3->snd_cwnd - VAR_2;
 if (FUNC_0(VAR_1) &&
     VAR_4 * VAR_0 < VAR_3->snd_cwnd &&
     VAR_4 * VAR_3->mss_cache < VAR_1->sk_gso_max_size &&
     VAR_4 < FUNC_1(VAR_1)->sk_gso_max_segs)
  return 1;
 return VAR_4 <= FUNC_2(VAR_3);
}
