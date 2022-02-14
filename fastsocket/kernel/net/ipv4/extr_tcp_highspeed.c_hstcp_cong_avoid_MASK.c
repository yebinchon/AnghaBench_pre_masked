
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; scalar_t__ snd_ssthresh; scalar_t__ snd_cwnd_clamp; scalar_t__ snd_cwnd_cnt; } ;
struct sock {int dummy; } ;
struct hstcp {size_t ai; } ;
struct TYPE_2__ {scalar_t__ cwnd; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct hstcp* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,int ) ;
 struct tcp_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct tcp_sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct tcp_sock *VAR_5 = FUNC_2(VAR_2);
 struct hstcp *VAR_6 = FUNC_0(VAR_2);

 if (!FUNC_1(VAR_2, VAR_4))
  return;

 if (VAR_5->snd_cwnd <= VAR_5->snd_ssthresh)
  FUNC_3(VAR_5);
 else {







  if (VAR_5->snd_cwnd > VAR_1[VAR_6->ai].cwnd) {
   while (VAR_5->snd_cwnd > VAR_1[VAR_6->ai].cwnd &&
          VAR_6->ai < VAR_0 - 1)
    VAR_6->ai++;
  } else if (VAR_6->ai && VAR_5->snd_cwnd <= VAR_1[VAR_6->ai-1].cwnd) {
   while (VAR_6->ai && VAR_5->snd_cwnd <= VAR_1[VAR_6->ai-1].cwnd)
    VAR_6->ai--;
  }


  if (VAR_5->snd_cwnd < VAR_5->snd_cwnd_clamp) {

   VAR_5->snd_cwnd_cnt += VAR_6->ai + 1;
   if (VAR_5->snd_cwnd_cnt >= VAR_5->snd_cwnd) {
    VAR_5->snd_cwnd_cnt -= VAR_5->snd_cwnd;
    VAR_5->snd_cwnd++;
   }
  }
 }
}
