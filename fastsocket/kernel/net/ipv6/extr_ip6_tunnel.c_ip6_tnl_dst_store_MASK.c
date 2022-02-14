
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt6_info {TYPE_1__* rt6i_node; } ;
struct ip6_tnl {struct dst_entry* dst_cache; int dst_cookie; } ;
struct dst_entry {int dummy; } ;
struct TYPE_2__ {int fn_sernum; } ;


 int FUNC_0 (struct dst_entry*) ;

__attribute__((used)) static inline void FUNC_1(struct ip6_tnl *VAR_0, struct dst_entry *VAR_1)
{
 struct rt6_info *VAR_2 = (struct rt6_info *) VAR_1;
 VAR_0->dst_cookie = VAR_2->rt6i_node ? VAR_2->rt6i_node->fn_sernum : 0;
 FUNC_0(VAR_0->dst_cache);
 VAR_0->dst_cache = VAR_1;
}
