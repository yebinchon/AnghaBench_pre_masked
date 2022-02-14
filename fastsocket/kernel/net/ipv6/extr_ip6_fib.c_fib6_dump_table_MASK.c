
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlink_callback {int* args; } ;
struct fib6_walker_t {int * root; } ;
struct fib6_table {int tb6_lock; int tb6_root; } ;


 int FUNC_0 (struct fib6_walker_t*) ;
 int FUNC_1 (struct fib6_walker_t*) ;
 int FUNC_2 (struct fib6_walker_t*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct fib6_table *VAR_0, struct sk_buff *VAR_1,
      struct netlink_callback *VAR_2)
{
 struct fib6_walker_t *VAR_3;
 int VAR_4;

 VAR_3 = (void *)VAR_2->args[2];
 VAR_3->root = &VAR_0->tb6_root;

 if (VAR_2->args[4] == 0) {
  FUNC_3(&VAR_0->tb6_lock);
  VAR_4 = FUNC_0(VAR_3);
  FUNC_4(&VAR_0->tb6_lock);
  if (VAR_4 > 0)
   VAR_2->args[4] = 1;
 } else {
  FUNC_3(&VAR_0->tb6_lock);
  VAR_4 = FUNC_1(VAR_3);
  FUNC_4(&VAR_0->tb6_lock);
  if (VAR_4 <= 0) {
   FUNC_2(VAR_3);
   VAR_2->args[4] = 0;
  }
 }

 return VAR_4;
}
