
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_root {int node; } ;
struct callchain_cursor {int dummy; } ;


 int FUNC_0 (struct callchain_cursor*,int *,int *) ;

int FUNC_1(struct callchain_cursor *VAR_0,
      struct callchain_root *VAR_1, struct callchain_root *VAR_2)
{
 return FUNC_0(VAR_0, &VAR_1->node, &VAR_2->node);
}
