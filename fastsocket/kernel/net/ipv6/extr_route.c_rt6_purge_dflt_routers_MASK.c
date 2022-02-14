
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct rt6_info* rt6_next; } ;
struct TYPE_4__ {TYPE_3__ dst; } ;
struct rt6_info {int rt6i_flags; TYPE_1__ u; } ;
struct net {int dummy; } ;
struct TYPE_5__ {struct rt6_info* leaf; } ;
struct fib6_table {int tb6_lock; TYPE_2__ tb6_root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 struct fib6_table* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct rt6_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct net *VAR_3)
{
 struct rt6_info *VAR_4;
 struct fib6_table *VAR_5;


 VAR_5 = FUNC_1(VAR_3, VAR_0);
 if (VAR_5 == ((void*)0))
  return;

restart:
 FUNC_3(&VAR_5->tb6_lock);
 for (VAR_4 = VAR_5->tb6_root.leaf; VAR_4; VAR_4 = VAR_4->u.dst.rt6_next) {
  if (VAR_4->rt6i_flags & (VAR_2 | VAR_1)) {
   FUNC_0(&VAR_4->u.dst);
   FUNC_4(&VAR_5->tb6_lock);
   FUNC_2(VAR_4);
   goto restart;
  }
 }
 FUNC_4(&VAR_5->tb6_lock);
}
