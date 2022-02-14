
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int __use; int lastuse; } ;
struct TYPE_8__ {TYPE_4__ dst; } ;
struct rt6_info {int rt6i_flags; TYPE_3__ u; int rt6i_nexthop; } ;
struct TYPE_7__ {struct rt6_info* ip6_null_entry; TYPE_1__* devconf_all; } ;
struct net {TYPE_2__ ipv6; } ;
struct flowi {int fl6_dst; int fl6_src; } ;
struct fib6_table {int tb6_lock; int tb6_root; } ;
struct fib6_node {int dummy; } ;
struct TYPE_6__ {scalar_t__ forwarding; } ;


 int FUNC_0 (struct net*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 struct fib6_node* FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (struct rt6_info*) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct rt6_info* FUNC_7 (struct rt6_info*,int *) ;
 struct rt6_info* FUNC_8 (struct rt6_info*,int *,int *) ;
 struct rt6_info* FUNC_9 (struct fib6_node*,int,int) ;

__attribute__((used)) static struct rt6_info *FUNC_10(struct net *VAR_6, struct fib6_table *VAR_7, int VAR_8,
          struct flowi *VAR_9, int VAR_10, bool VAR_11)
{
 struct fib6_node *VAR_12;
 struct rt6_info *VAR_13, *VAR_14;
 int VAR_15 = 0;
 int VAR_16 = 3;
 int VAR_17;
 int VAR_18 = VAR_6->ipv6.devconf_all->forwarding ? 0 : VAR_1;
 int VAR_19 = VAR_4;

 VAR_15 |= VAR_10 & VAR_0;
 if (VAR_11)
  VAR_19 |= VAR_3;

relookup:
 FUNC_5(&VAR_7->tb6_lock);

restart_2:
 VAR_12 = FUNC_3(&VAR_7->tb6_root, &VAR_9->fl6_dst, &VAR_9->fl6_src);

restart:
 VAR_13 = FUNC_9(VAR_12, VAR_8, VAR_15 | VAR_18);

 FUNC_0(VAR_6, &VAR_9->fl6_src);
 if (VAR_13 == VAR_6->ipv6.ip6_null_entry ||
     VAR_13->rt6i_flags & VAR_2)
  goto out;

 FUNC_1(&VAR_13->u.dst);
 FUNC_6(&VAR_7->tb6_lock);

 if (!VAR_13->rt6i_nexthop &&
     !(VAR_13->rt6i_flags & VAR_19))
  VAR_14 = FUNC_8(VAR_13, &VAR_9->fl6_dst, &VAR_9->fl6_src);
 else {



  goto out2;

 }

 FUNC_2(&VAR_13->u.dst);
 VAR_13 = VAR_14 ? : VAR_6->ipv6.ip6_null_entry;

 FUNC_1(&VAR_13->u.dst);
 if (VAR_14) {
  VAR_17 = FUNC_4(VAR_14);
  if (!VAR_17)
   goto out2;
 }

 if (--VAR_16 <= 0)
  goto out2;





 FUNC_2(&VAR_13->u.dst);
 goto relookup;

out:
 if (VAR_18) {
  VAR_18 = 0;
  goto restart_2;
 }
 FUNC_1(&VAR_13->u.dst);
 FUNC_6(&VAR_7->tb6_lock);
out2:
 VAR_13->u.dst.lastuse = VAR_5;
 VAR_13->u.dst.__use++;

 return VAR_13;
}
