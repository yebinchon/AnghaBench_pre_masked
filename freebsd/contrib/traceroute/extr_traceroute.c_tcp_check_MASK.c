
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef scalar_t__ tcp_seq ;
struct tcphdr {int th_sport; int th_dport; scalar_t__ th_seq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;

int
FUNC_1(const u_char *VAR_3, int VAR_4)
{
 struct tcphdr *const VAR_5 = (struct tcphdr *) VAR_3;

 return (FUNC_0(VAR_5->th_sport) == VAR_1
     && FUNC_0(VAR_5->th_dport) == VAR_2 + (VAR_0 ? 0 : VAR_4)
     && VAR_5->th_seq == (tcp_seq)((VAR_5->th_sport << 16) | VAR_5->th_dport));
}
