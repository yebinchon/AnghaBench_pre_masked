
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_multiport_v1 {int count; int flags; } ;
struct xt_mtchk_param {struct xt_multiport_v1* matchinfo; struct ip6t_ip6* entryinfo; } ;
struct ip6t_ip6 {int invflags; int proto; } ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct xt_mtchk_param *VAR_0)
{
 const struct ip6t_ip6 *VAR_1 = VAR_0->entryinfo;
 const struct xt_multiport_v1 *VAR_2 = VAR_0->matchinfo;

 return FUNC_0(VAR_1->proto, VAR_1->invflags, VAR_2->flags,
       VAR_2->count);
}
