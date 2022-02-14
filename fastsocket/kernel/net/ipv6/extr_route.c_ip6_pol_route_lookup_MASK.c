
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dst; } ;
struct rt6_info {TYPE_1__ u; } ;
struct net {int dummy; } ;
struct flowi {int fl6_src; int oif; int fl6_dst; } ;
struct fib6_table {int tb6_lock; int tb6_root; } ;
struct fib6_node {struct rt6_info* leaf; } ;


 int FUNC_0 (struct net*,int *) ;
 int FUNC_1 (int *,int ) ;
 struct fib6_node* FUNC_2 (int *,int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct rt6_info* FUNC_5 (struct net*,struct rt6_info*,int *,int ,int) ;

__attribute__((used)) static struct rt6_info *FUNC_6(struct net *VAR_1,
          struct fib6_table *VAR_2,
          struct flowi *VAR_3, int VAR_4)
{
 struct fib6_node *VAR_5;
 struct rt6_info *VAR_6;

 FUNC_3(&VAR_2->tb6_lock);
 VAR_5 = FUNC_2(&VAR_2->tb6_root, &VAR_3->fl6_dst, &VAR_3->fl6_src);
restart:
 VAR_6 = VAR_5->leaf;
 VAR_6 = FUNC_5(VAR_1, VAR_6, &VAR_3->fl6_src, VAR_3->oif, VAR_4);
 FUNC_0(VAR_1, &VAR_3->fl6_src);
out:
 FUNC_1(&VAR_6->u.dst, VAR_0);
 FUNC_4(&VAR_2->tb6_lock);
 return VAR_6;

}
