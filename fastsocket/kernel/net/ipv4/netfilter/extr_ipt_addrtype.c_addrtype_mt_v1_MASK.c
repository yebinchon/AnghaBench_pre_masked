
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_match_param {struct net_device* out; struct net_device* in; struct ipt_addrtype_info_v1* matchinfo; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipt_addrtype_info_v1 {int flags; scalar_t__ dest; scalar_t__ source; } ;
struct iphdr {int daddr; int saddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct net* FUNC_0 (struct net_device*) ;
 struct iphdr* FUNC_1 (struct sk_buff const*) ;
 int FUNC_2 (struct net*,struct net_device const*,int ,scalar_t__) ;

__attribute__((used)) static bool
FUNC_3(const struct sk_buff *VAR_4, const struct xt_match_param *VAR_5)
{
 struct net *VAR_6 = FUNC_0(VAR_5->in ? VAR_5->in : VAR_5->out);
 const struct ipt_addrtype_info_v1 *VAR_7 = VAR_5->matchinfo;
 const struct iphdr *VAR_8 = FUNC_1(VAR_4);
 const struct net_device *VAR_9 = ((void*)0);
 bool VAR_10 = 1;

 if (VAR_7->flags & VAR_2)
  VAR_9 = VAR_5->in;
 else if (VAR_7->flags & VAR_3)
  VAR_9 = VAR_5->out;

 if (VAR_7->source)
  VAR_10 &= FUNC_2(VAR_6, VAR_9, VAR_8->saddr, VAR_7->source) ^
         (VAR_7->flags & VAR_1);
 if (VAR_10 && VAR_7->dest)
  VAR_10 &= FUNC_2(VAR_6, VAR_9, VAR_8->daddr, VAR_7->dest) ^
         !!(VAR_7->flags & VAR_0);
 return VAR_10;
}
