
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {struct rt6_info* rt6_next; } ;
struct TYPE_6__ {TYPE_3__ dst; } ;
struct rt6_info {scalar_t__ rt6i_metric; TYPE_2__ u; int rt6i_gateway; TYPE_1__* rt6i_dev; } ;
struct fib6_table {int tb6_lock; int tb6_root; } ;
struct fib6_node {struct rt6_info* leaf; } ;
struct TYPE_8__ {int nl_net; } ;
struct fib6_config {scalar_t__ fc_ifindex; int fc_flags; scalar_t__ fc_metric; TYPE_4__ fc_nlinfo; int fc_gateway; int fc_src_len; int fc_src; int fc_dst_len; int fc_dst; int fc_table; } ;
struct TYPE_5__ {scalar_t__ ifindex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rt6_info*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;
 struct fib6_table* FUNC_2 (int ,int ) ;
 struct fib6_node* FUNC_3 (int *,int *,int ,int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct fib6_config *VAR_2)
{
 struct fib6_table *VAR_3;
 struct fib6_node *VAR_4;
 struct rt6_info *VAR_5;
 int VAR_6 = -VAR_0;

 VAR_3 = FUNC_2(VAR_2->fc_nlinfo.nl_net, VAR_2->fc_table);
 if (VAR_3 == ((void*)0))
  return VAR_6;

 FUNC_5(&VAR_3->tb6_lock);

 VAR_4 = FUNC_3(&VAR_3->tb6_root,
    &VAR_2->fc_dst, VAR_2->fc_dst_len,
    &VAR_2->fc_src, VAR_2->fc_src_len);

 if (VAR_4) {
  for (VAR_5 = VAR_4->leaf; VAR_5; VAR_5 = VAR_5->u.dst.rt6_next) {
   if (VAR_2->fc_ifindex &&
       (VAR_5->rt6i_dev == ((void*)0) ||
        VAR_5->rt6i_dev->ifindex != VAR_2->fc_ifindex))
    continue;
   if (VAR_2->fc_flags & VAR_1 &&
       !FUNC_4(&VAR_2->fc_gateway, &VAR_5->rt6i_gateway))
    continue;
   if (VAR_2->fc_metric && VAR_2->fc_metric != VAR_5->rt6i_metric)
    continue;
   FUNC_1(&VAR_5->u.dst);
   FUNC_6(&VAR_3->tb6_lock);

   return FUNC_0(VAR_5, &VAR_2->fc_nlinfo);
  }
 }
 FUNC_6(&VAR_3->tb6_lock);

 return VAR_6;
}
