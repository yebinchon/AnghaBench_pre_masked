
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timespec {scalar_t__ tv_nsec; scalar_t__ tv_sec; } ;
struct tcp_log {int srtt; int snd_wnd; int ssthresh; int snd_cwnd; int snd_una; int snd_nxt; int length; int dport; int daddr; int sport; int saddr; int tstamp; } ;
struct TYPE_2__ {int tail; int start; struct tcp_log* log; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct timespec FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int,char*,unsigned long,unsigned long,int *,int ,int *,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static int FUNC_4(char *VAR_2, int VAR_3)
{
 const struct tcp_log *VAR_4
  = VAR_1.log + VAR_1.tail % VAR_0;
 struct timespec VAR_5
  = FUNC_1(FUNC_0(VAR_4->tstamp, VAR_1.start));

 return FUNC_3(VAR_2, VAR_3,
   "%lu.%09lu %pI4:%u %pI4:%u %d %#x %#x %u %u %u %u\n",
   (unsigned long) VAR_5.tv_sec,
   (unsigned long) VAR_5.tv_nsec,
   &VAR_4->saddr, FUNC_2(VAR_4->sport),
   &VAR_4->daddr, FUNC_2(VAR_4->dport),
   VAR_4->length, VAR_4->snd_nxt, VAR_4->snd_una,
   VAR_4->snd_cwnd, VAR_4->ssthresh, VAR_4->snd_wnd, VAR_4->srtt);
}
