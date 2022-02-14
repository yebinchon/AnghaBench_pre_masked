
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {struct rt6_info* rt6_next; } ;
struct TYPE_7__ {TYPE_4__ dst; } ;
struct rt6_info {int rt6i_flags; TYPE_3__ u; int rt6i_gateway; TYPE_1__* rt6i_dev; } ;
struct TYPE_6__ {struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_2__ ipv6; } ;
struct ip6rd_flowi {int gateway; } ;
struct flowi {scalar_t__ oif; int fl6_src; int fl6_dst; } ;
struct fib6_table {int tb6_lock; int tb6_root; } ;
struct fib6_node {struct rt6_info* leaf; } ;
struct TYPE_5__ {scalar_t__ ifindex; } ;


 int FUNC_0 (struct net*,int *) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 struct fib6_node* FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct rt6_info*) ;

__attribute__((used)) static struct rt6_info *FUNC_7(struct net *VAR_1,
          struct fib6_table *VAR_2,
          struct flowi *VAR_3,
          int VAR_4)
{
 struct ip6rd_flowi *VAR_5 = (struct ip6rd_flowi *)VAR_3;
 struct rt6_info *VAR_6;
 struct fib6_node *VAR_7;
 FUNC_4(&VAR_2->tb6_lock);
 VAR_7 = FUNC_2(&VAR_2->tb6_root, &VAR_3->fl6_dst, &VAR_3->fl6_src);
restart:
 for (VAR_6 = VAR_7->leaf; VAR_6; VAR_6 = VAR_6->u.dst.rt6_next) {
  if (FUNC_6(VAR_6))
   continue;
  if (!(VAR_6->rt6i_flags & VAR_0))
   continue;
  if (VAR_3->oif != VAR_6->rt6i_dev->ifindex)
   continue;
  if (!FUNC_3(&VAR_5->gateway, &VAR_6->rt6i_gateway))
   continue;
  break;
 }

 if (!VAR_6)
  VAR_6 = VAR_1->ipv6.ip6_null_entry;
 FUNC_0(VAR_1, &VAR_3->fl6_src);
out:
 FUNC_1(&VAR_6->u.dst);

 FUNC_5(&VAR_2->tb6_lock);

 return VAR_6;
}
