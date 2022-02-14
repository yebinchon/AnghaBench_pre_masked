
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_callback {int* args; void* done; } ;
struct fib6_walker_t {int dummy; } ;


 int FUNC_0 (struct fib6_walker_t*) ;
 int FUNC_1 (struct fib6_walker_t*) ;

__attribute__((used)) static void FUNC_2(struct netlink_callback *VAR_0)
{
 struct fib6_walker_t *VAR_1 = (void*)VAR_0->args[2];

 if (VAR_1) {
  if (VAR_0->args[4]) {
   VAR_0->args[4] = 0;
   FUNC_0(VAR_1);
  }
  VAR_0->args[2] = 0;
  FUNC_1(VAR_1);
 }
 VAR_0->done = (void*)VAR_0->args[3];
 VAR_0->args[1] = 3;
}
