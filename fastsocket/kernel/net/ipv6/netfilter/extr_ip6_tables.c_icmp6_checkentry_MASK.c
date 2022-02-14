
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_mtchk_param {struct ip6t_icmp* matchinfo; } ;
struct ip6t_icmp {int invflags; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct xt_mtchk_param *VAR_1)
{
 const struct ip6t_icmp *VAR_2 = VAR_1->matchinfo;


 return !(VAR_2->invflags & ~VAR_0);
}
