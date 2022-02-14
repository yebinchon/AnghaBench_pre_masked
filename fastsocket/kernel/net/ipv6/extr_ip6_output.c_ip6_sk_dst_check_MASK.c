
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct rt6_info {int rt6i_src; int rt6i_dst; } ;
struct ipv6_pinfo {int saddr_cache; int daddr_cache; } ;
struct flowi {scalar_t__ oif; int fl6_src; int fl6_dst; } ;
struct dst_entry {TYPE_2__* dev; TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ ifindex; } ;
struct TYPE_3__ {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dst_entry*) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 scalar_t__ FUNC_2 (int *,int *,int ) ;

__attribute__((used)) static struct dst_entry *FUNC_3(struct sock *VAR_1,
       struct dst_entry *VAR_2,
       struct flowi *VAR_3)
{
 struct ipv6_pinfo *VAR_4 = FUNC_1(VAR_1);
 struct rt6_info *VAR_5;

 if (!VAR_2)
  goto out;

 if (VAR_2->ops->family != VAR_0) {
  FUNC_0(VAR_2);
  return ((void*)0);
 }

 VAR_5 = (struct rt6_info *)VAR_2;
 if (FUNC_2(&VAR_5->rt6i_dst, &VAR_3->fl6_dst, VAR_4->daddr_cache) ||



     (VAR_3->oif && VAR_3->oif != VAR_2->dev->ifindex)) {
  FUNC_0(VAR_2);
  VAR_2 = ((void*)0);
 }

out:
 return VAR_2;
}
