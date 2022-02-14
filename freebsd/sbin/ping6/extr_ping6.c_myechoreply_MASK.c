
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct icmp6_hdr {int icmp6_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(const struct icmp6_hdr *VAR_1)
{
 if (FUNC_0(VAR_1->icmp6_id) == VAR_0)
  return 1;
 else
  return 0;
}
