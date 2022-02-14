
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ obsolete; struct rt6_info* rt6_next; } ;
struct TYPE_8__ {TYPE_3__ dst; } ;
struct TYPE_6__ {scalar_t__ plen; } ;
struct rt6_info {int rt6i_flags; TYPE_4__ u; TYPE_2__ rt6i_src; struct fib6_node* rt6i_node; } ;
struct nl_info {struct net* nl_net; } ;
struct TYPE_5__ {struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_node {int fn_flags; struct rt6_info* leaf; struct fib6_node* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fib6_node*,struct rt6_info**,struct nl_info*) ;
 int FUNC_2 (struct net*,struct fib6_node*,struct rt6_info*) ;

int FUNC_3(struct rt6_info *VAR_4, struct nl_info *VAR_5)
{
 struct net *VAR_6 = VAR_5->nl_net;
 struct fib6_node *VAR_7 = VAR_4->rt6i_node;
 struct rt6_info **VAR_8;







 if (VAR_7 == ((void*)0) || VAR_4 == VAR_6->ipv6.ip6_null_entry)
  return -VAR_0;

 FUNC_0(!(VAR_7->fn_flags & VAR_3));

 if (!(VAR_4->rt6i_flags&VAR_1)) {
  struct fib6_node *VAR_9 = VAR_7;
  FUNC_2(VAR_5->nl_net, VAR_9, VAR_4);
 }





 for (VAR_8 = &VAR_7->leaf; *VAR_8; VAR_8 = &(*VAR_8)->u.dst.rt6_next) {
  if (*VAR_8 == VAR_4) {
   FUNC_1(VAR_7, VAR_8, VAR_5);
   return 0;
  }
 }
 return -VAR_0;
}
