
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fib6_walker_t {int root; int node; int state; } ;


 int VAR_0 ;
 int FUNC_0 (struct fib6_walker_t*) ;
 int FUNC_1 (struct fib6_walker_t*) ;
 int FUNC_2 (struct fib6_walker_t*) ;

__attribute__((used)) static int FUNC_3(struct fib6_walker_t *VAR_1)
{
 int VAR_2;

 VAR_1->state = VAR_0;
 VAR_1->node = VAR_1->root;

 FUNC_1(VAR_1);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 <= 0)
  FUNC_2(VAR_1);
 return VAR_2;
}
