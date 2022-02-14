
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct rt6_info* rt6_next; } ;
struct TYPE_5__ {TYPE_3__ dst; } ;
struct rt6_info {int rt6i_flags; TYPE_2__ u; int rt6i_gateway; struct net_device* rt6i_dev; } ;
struct net_device {int dummy; } ;
struct in6_addr {int dummy; } ;
struct TYPE_4__ {struct rt6_info* leaf; } ;
struct fib6_table {int tb6_lock; TYPE_1__ tb6_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_3__*) ;
 struct fib6_table* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,struct in6_addr*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

struct rt6_info *FUNC_6(struct in6_addr *VAR_3, struct net_device *VAR_4)
{
 struct rt6_info *VAR_5;
 struct fib6_table *VAR_6;

 VAR_6 = FUNC_2(FUNC_0(VAR_4), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 FUNC_4(&VAR_6->tb6_lock);
 for (VAR_5 = VAR_6->tb6_root.leaf; VAR_5; VAR_5=VAR_5->u.dst.rt6_next) {
  if (VAR_4 == VAR_5->rt6i_dev &&
      ((VAR_5->rt6i_flags & (VAR_1 | VAR_2)) == (VAR_1 | VAR_2)) &&
      FUNC_3(&VAR_5->rt6i_gateway, VAR_3))
   break;
 }
 if (VAR_5)
  FUNC_1(&VAR_5->u.dst);
 FUNC_5(&VAR_6->tb6_lock);
 return VAR_5;
}
