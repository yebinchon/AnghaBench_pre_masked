
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dst; } ;
struct rt6_info {TYPE_2__ u; struct fib6_table* rt6i_table; int rt6i_dev; } ;
struct nl_info {int dummy; } ;
struct TYPE_3__ {struct rt6_info* ip6_null_entry; } ;
struct net {TYPE_1__ ipv6; } ;
struct fib6_table {int tb6_lock; } ;


 int VAR_0 ;
 struct net* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rt6_info*,struct nl_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct rt6_info *VAR_1, struct nl_info *VAR_2)
{
 int VAR_3;
 struct fib6_table *VAR_4;
 struct net *VAR_5 = FUNC_0(VAR_1->rt6i_dev);

 if (VAR_1 == VAR_5->ipv6.ip6_null_entry)
  return -VAR_0;

 VAR_4 = VAR_1->rt6i_table;
 FUNC_3(&VAR_4->tb6_lock);

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 FUNC_1(&VAR_1->u.dst);

 FUNC_4(&VAR_4->tb6_lock);

 return VAR_3;
}
