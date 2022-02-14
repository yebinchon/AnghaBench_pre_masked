
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; struct resource* sibling; struct resource* parent; struct resource* child; } ;
typedef scalar_t__ resource_size_t ;



__attribute__((used)) static struct resource * FUNC_0(struct resource *VAR_0, struct resource *VAR_1)
{
 resource_size_t VAR_2 = VAR_1->start;
 resource_size_t VAR_3 = VAR_1->end;
 struct resource *VAR_4, **VAR_5;

 if (VAR_3 < VAR_2)
  return VAR_0;
 if (VAR_2 < VAR_0->start)
  return VAR_0;
 if (VAR_3 > VAR_0->end)
  return VAR_0;
 VAR_5 = &VAR_0->child;
 for (;;) {
  VAR_4 = *VAR_5;
  if (!VAR_4 || VAR_4->start > VAR_3) {
   VAR_1->sibling = VAR_4;
   *VAR_5 = VAR_1;
   VAR_1->parent = VAR_0;
   return ((void*)0);
  }
  VAR_5 = &VAR_4->sibling;
  if (VAR_4->end < VAR_2)
   continue;
  return VAR_4;
 }
}
