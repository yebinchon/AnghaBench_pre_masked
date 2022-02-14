
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {int dummy; } ;
struct cgraph_edge {struct cgraph_node* caller; } ;



__attribute__((used)) static inline struct cgraph_node *
FUNC_0 (struct cgraph_edge *VAR_0)
{
  return VAR_0->caller;
}
