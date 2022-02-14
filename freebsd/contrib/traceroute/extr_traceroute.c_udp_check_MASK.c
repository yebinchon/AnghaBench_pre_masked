
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct udphdr {int uh_dport; int uh_sport; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;

int
FUNC_1(const u_char *VAR_3, int VAR_4)
{
 struct udphdr *const VAR_5 = (struct udphdr *) VAR_3;

 return (FUNC_0(VAR_5->uh_sport) == VAR_1 + (VAR_0 ? VAR_4 : 0) &&
     FUNC_0(VAR_5->uh_dport) == VAR_2 + (VAR_0 ? 0 : VAR_4));
}
