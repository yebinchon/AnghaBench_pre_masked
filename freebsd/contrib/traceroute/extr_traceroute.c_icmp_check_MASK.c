
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct icmp {scalar_t__ icmp_id; scalar_t__ icmp_seq; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;

int
FUNC_1(const u_char *VAR_1, int VAR_2)
{
 struct icmp *const VAR_3 = (struct icmp *) VAR_1;

 return (VAR_3->icmp_id == FUNC_0(VAR_0)
     && VAR_3->icmp_seq == FUNC_0(VAR_2));
}
