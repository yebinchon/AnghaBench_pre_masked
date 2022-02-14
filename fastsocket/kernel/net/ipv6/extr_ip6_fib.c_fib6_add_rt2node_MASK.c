
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {struct rt6_info* rt6_next; } ;
struct TYPE_9__ {TYPE_2__ dst; } ;
struct rt6_info {scalar_t__ rt6i_metric; scalar_t__ rt6i_dev; scalar_t__ rt6i_idev; int rt6i_flags; int rt6i_ref; TYPE_3__ u; struct fib6_node* rt6i_node; scalar_t__ rt6i_expires; int rt6i_gateway; } ;
struct nl_info {TYPE_6__* nl_net; TYPE_1__* nlh; } ;
struct fib6_node {int fn_flags; int * rr_ptr; struct rt6_info* leaf; } ;
struct TYPE_11__ {TYPE_4__* rt6_stats; } ;
struct TYPE_12__ {TYPE_5__ ipv6; } ;
struct TYPE_10__ {int fib_route_nodes; int fib_rt_entries; } ;
struct TYPE_7__ {int nlmsg_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct rt6_info*,struct nl_info*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct rt6_info*) ;

__attribute__((used)) static int FUNC_5(struct fib6_node *VAR_8, struct rt6_info *VAR_9,
       struct nl_info *VAR_10)
{
 struct rt6_info *VAR_11 = ((void*)0);
 struct rt6_info **VAR_12;
 int VAR_13 = (VAR_10->nlh &&
         (VAR_10->nlh->nlmsg_flags & VAR_4));
 int VAR_14 = (!VAR_10->nlh ||
     (VAR_10->nlh->nlmsg_flags & VAR_2));
 int VAR_15 = 0;

 VAR_12 = &VAR_8->leaf;

 for (VAR_11 = VAR_8->leaf; VAR_11; VAR_11=VAR_11->u.dst.rt6_next) {




  if (VAR_11->rt6i_metric == VAR_9->rt6i_metric) {



   if (VAR_10->nlh &&
       (VAR_10->nlh->nlmsg_flags & VAR_3))
    return -VAR_0;
   if (VAR_13) {
    VAR_15++;
    break;
   }

   if (VAR_11->rt6i_dev == VAR_9->rt6i_dev &&
       VAR_11->rt6i_idev == VAR_9->rt6i_idev &&
       FUNC_2(&VAR_11->rt6i_gateway,
         &VAR_9->rt6i_gateway)) {
    if (!(VAR_11->rt6i_flags&VAR_5))
     return -VAR_0;
    VAR_11->rt6i_expires = VAR_9->rt6i_expires;
    if (!(VAR_9->rt6i_flags&VAR_5)) {
     VAR_11->rt6i_flags &= ~VAR_5;
     VAR_11->rt6i_expires = 0;
    }
    return -VAR_0;
   }
  }

  if (VAR_11->rt6i_metric > VAR_9->rt6i_metric)
   break;

  VAR_12 = &VAR_11->u.dst.rt6_next;
 }


 if (VAR_12 == &VAR_8->leaf)
  VAR_8->rr_ptr = ((void*)0);




 if (!VAR_13) {
  if (!VAR_14)
   FUNC_3("NLM_F_CREATE should be set when creating new route\n");

add:
  VAR_9->u.dst.rt6_next = VAR_11;
  *VAR_12 = VAR_9;
  VAR_9->rt6i_node = VAR_8;
  FUNC_0(&VAR_9->rt6i_ref);
  FUNC_1(VAR_6, VAR_9, VAR_10);
  VAR_10->nl_net->ipv6.rt6_stats->fib_rt_entries++;

  if (!(VAR_8->fn_flags & VAR_7)) {
   VAR_10->nl_net->ipv6.rt6_stats->fib_route_nodes++;
   VAR_8->fn_flags |= VAR_7;
  }

 } else {
  if (!VAR_15) {
   if (VAR_14)
    goto add;
   FUNC_3("NLM_F_REPLACE set, but no existing node found!\n");
   return -VAR_1;
  }
  *VAR_12 = VAR_9;
  VAR_9->rt6i_node = VAR_8;
  VAR_9->u.dst.rt6_next = VAR_11->u.dst.rt6_next;
  FUNC_0(&VAR_9->rt6i_ref);
  FUNC_1(VAR_6, VAR_9, VAR_10);
  FUNC_4(VAR_11);
  if (!(VAR_8->fn_flags & VAR_7)) {
   VAR_10->nl_net->ipv6.rt6_stats->fib_route_nodes++;
   VAR_8->fn_flags |= VAR_7;
  }
 }

 return 0;
}
