
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rt6_info {int dummy; } ;
struct TYPE_4__ {struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_node {int fn_flags; TYPE_3__* right; TYPE_2__* left; } ;
struct TYPE_6__ {struct rt6_info* leaf; } ;
struct TYPE_5__ {struct rt6_info* leaf; } ;


 struct fib6_node* FUNC_0 (struct fib6_node*) ;
 int VAR_0 ;

__attribute__((used)) static struct rt6_info *FUNC_1(struct net *VAR_1, struct fib6_node *VAR_2)
{
 if (VAR_2->fn_flags&VAR_0)
  return VAR_1->ipv6.ip6_null_entry;

 while(VAR_2) {
  if(VAR_2->left)
   return VAR_2->left->leaf;

  if(VAR_2->right)
   return VAR_2->right->leaf;

  VAR_2 = FUNC_0(VAR_2);
 }
 return ((void*)0);
}
