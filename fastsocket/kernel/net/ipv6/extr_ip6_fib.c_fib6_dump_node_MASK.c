
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct rt6_info* rt6_next; } ;
struct TYPE_4__ {TYPE_1__ dst; } ;
struct rt6_info {TYPE_2__ u; } ;
struct fib6_walker_t {struct rt6_info* leaf; int args; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct rt6_info*,int ) ;

__attribute__((used)) static int FUNC_2(struct fib6_walker_t *VAR_0)
{
 int VAR_1;
 struct rt6_info *VAR_2;

 for (VAR_2 = VAR_0->leaf; VAR_2; VAR_2 = VAR_2->u.dst.rt6_next) {
  VAR_1 = FUNC_1(VAR_2, VAR_0->args);
  if (VAR_1 < 0) {

   VAR_0->leaf = VAR_2;
   return 1;
  }
  FUNC_0(VAR_1 == 0);
 }
 VAR_0->leaf = ((void*)0);
 return 0;
}
