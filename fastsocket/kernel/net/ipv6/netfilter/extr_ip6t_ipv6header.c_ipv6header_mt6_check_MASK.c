
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_ipv6header_info* matchinfo; } ;
struct ip6t_ipv6header_info {int invflags; int modeflag; } ;



__attribute__((used)) static bool FUNC_0(const struct xt_mtchk_param *VAR_0)
{
 const struct ip6t_ipv6header_info *VAR_1 = VAR_0->matchinfo;


 if ((!VAR_1->modeflag) && VAR_1->invflags != 0x00 &&
     VAR_1->invflags != 0xFF)
  return 0;

 return 1;
}
