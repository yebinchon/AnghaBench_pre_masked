
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct tcphdr {int th_sport; int th_dport; int th_seq; int th_off; scalar_t__ th_sum; int th_flags; scalar_t__ th_ack; } ;
struct outdata {scalar_t__ seq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

void
FUNC_2(struct outdata *VAR_8)
{
 struct tcphdr *const VAR_9 = (struct tcphdr *) VAR_5;

 VAR_9->th_sport = FUNC_0(VAR_3);
 VAR_9->th_dport = FUNC_0(VAR_6 + (VAR_2 ? 0 : VAR_8->seq));
 VAR_9->th_seq = (VAR_9->th_sport << 16) | VAR_9->th_dport;
 VAR_9->th_ack = 0;
 VAR_9->th_off = 5;
 VAR_9->th_flags = VAR_0;
 VAR_9->th_sum = 0;

 if (VAR_1)
     VAR_9->th_sum = FUNC_1(VAR_4, (u_short*)VAR_9, VAR_7, VAR_7);
}
