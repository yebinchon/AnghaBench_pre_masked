
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {struct ipt_addrtype_info* matchinfo; scalar_t__ out; scalar_t__ in; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct ipt_addrtype_info {int invert_source; int invert_dest; scalar_t__ dest; scalar_t__ source; } ;
struct iphdr {int daddr; int saddr; } ;


 struct net* FUNC_0 (scalar_t__) ;
 struct iphdr* FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (struct net*,int *,int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_0, const struct xt_match_param *VAR_1)
{
 struct net *VAR_2 = FUNC_0(VAR_1->in ? VAR_1->in : VAR_1->out);
 const struct ipt_addrtype_info *VAR_3 = VAR_1->matchinfo;
 const struct iphdr *VAR_4 = FUNC_1(VAR_0);
 bool VAR_5 = 1;

 if (VAR_3->source)
  VAR_5 &= FUNC_2(VAR_2, ((void*)0), VAR_4->saddr, VAR_3->source) ^
         VAR_3->invert_source;
 if (VAR_3->dest)
  VAR_5 &= FUNC_2(VAR_2, ((void*)0), VAR_4->daddr, VAR_3->dest) ^
         VAR_3->invert_dest;

 return VAR_5;
}
