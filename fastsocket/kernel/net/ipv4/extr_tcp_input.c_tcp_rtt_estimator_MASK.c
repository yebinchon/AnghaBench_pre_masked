
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcp_sock {int srtt; int mdev; long mdev_max; long rttvar; int snd_nxt; int rtt_seq; int snd_una; } ;
struct sock {int dummy; } ;
typedef long __u32 ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (long,int) ;
 int FUNC_2 (struct sock*) ;
 struct tcp_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_0, const __u32 VAR_1)
{
 struct tcp_sock *VAR_2 = FUNC_3(VAR_0);
 long VAR_3 = VAR_1;
 if (VAR_3 == 0)
  VAR_3 = 1;
 if (VAR_2->srtt != 0) {
  VAR_3 -= (VAR_2->srtt >> 3);
  VAR_2->srtt += VAR_3;
  if (VAR_3 < 0) {
   VAR_3 = -VAR_3;
   VAR_3 -= (VAR_2->mdev >> 2);
   if (VAR_3 > 0)
    VAR_3 >>= 3;
  } else {
   VAR_3 -= (VAR_2->mdev >> 2);
  }
  VAR_2->mdev += VAR_3;
  if (VAR_2->mdev > VAR_2->mdev_max) {
   VAR_2->mdev_max = VAR_2->mdev;
   if (VAR_2->mdev_max > VAR_2->rttvar)
    VAR_2->rttvar = VAR_2->mdev_max;
  }
  if (FUNC_0(VAR_2->snd_una, VAR_2->rtt_seq)) {
   if (VAR_2->mdev_max < VAR_2->rttvar)
    VAR_2->rttvar -= (VAR_2->rttvar - VAR_2->mdev_max) >> 2;
   VAR_2->rtt_seq = VAR_2->snd_nxt;
   VAR_2->mdev_max = FUNC_2(VAR_0);
  }
 } else {

  VAR_2->srtt = VAR_3 << 3;
  VAR_2->mdev = VAR_3 << 1;
  VAR_2->mdev_max = VAR_2->rttvar = FUNC_1(VAR_2->mdev, FUNC_2(VAR_0));
  VAR_2->rtt_seq = VAR_2->snd_nxt;
 }
}
