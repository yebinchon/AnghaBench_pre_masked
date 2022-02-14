
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ children_hit; scalar_t__ hit; int * parent; int val; int children; int siblings; } ;
struct callchain_root {scalar_t__ max_depth; TYPE_1__ node; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static inline void FUNC_1(struct callchain_root *VAR_0)
{
 FUNC_0(&VAR_0->node.siblings);
 FUNC_0(&VAR_0->node.children);
 FUNC_0(&VAR_0->node.val);

 VAR_0->node.parent = ((void*)0);
 VAR_0->node.hit = 0;
 VAR_0->node.children_hit = 0;
 VAR_0->max_depth = 0;
}
