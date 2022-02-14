
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct callchain_cursor_node {int dummy; } ;
struct callchain_cursor {scalar_t__ pos; scalar_t__ nr; struct callchain_cursor_node* curr; } ;



__attribute__((used)) static inline struct callchain_cursor_node *
FUNC_0(struct callchain_cursor *VAR_0)
{
 if (VAR_0->pos == VAR_0->nr)
  return ((void*)0);

 return VAR_0->curr;
}
