
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt6_info {struct fib6_table* rt6i_table; } ;
struct nl_info {int dummy; } ;
struct fib6_table {int tb6_lock; int tb6_root; } ;


 int FUNC_0 (int *,struct rt6_info*,struct nl_info*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct rt6_info *VAR_0, struct nl_info *VAR_1)
{
 int VAR_2;
 struct fib6_table *VAR_3;

 VAR_3 = VAR_0->rt6i_table;
 FUNC_1(&VAR_3->tb6_lock);
 VAR_2 = FUNC_0(&VAR_3->tb6_root, VAR_0, VAR_1);
 FUNC_2(&VAR_3->tb6_lock);

 return VAR_2;
}
