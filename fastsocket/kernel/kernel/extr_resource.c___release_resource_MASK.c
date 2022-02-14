
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct resource {struct resource* sibling; TYPE_1__* parent; } ;
struct TYPE_2__ {struct resource* child; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct resource *VAR_1)
{
 struct resource *VAR_2, **VAR_3;

 VAR_3 = &VAR_1->parent->child;
 for (;;) {
  VAR_2 = *VAR_3;
  if (!VAR_2)
   break;
  if (VAR_2 == VAR_1) {
   *VAR_3 = VAR_2->sibling;
   VAR_1->parent = ((void*)0);
   return 0;
  }
  VAR_3 = &VAR_2->sibling;
 }
 return -VAR_0;
}
