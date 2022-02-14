
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct callchain_root {scalar_t__ max_depth; int node; } ;
struct callchain_cursor {scalar_t__ nr; } ;


 int FUNC_0 (int *,struct callchain_cursor*,int ) ;
 int FUNC_1 (struct callchain_cursor*) ;

int FUNC_2(struct callchain_root *VAR_0,
       struct callchain_cursor *VAR_1,
       u64 VAR_2)
{
 if (!VAR_1->nr)
  return 0;

 FUNC_1(VAR_1);

 FUNC_0(&VAR_0->node, VAR_1, VAR_2);

 if (VAR_1->nr > VAR_0->max_depth)
  VAR_0->max_depth = VAR_1->nr;

 return 0;
}
