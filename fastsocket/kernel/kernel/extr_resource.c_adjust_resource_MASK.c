
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {scalar_t__ start; scalar_t__ end; struct resource* sibling; struct resource* child; struct resource* parent; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int FUNC_2(struct resource *VAR_2, resource_size_t VAR_3, resource_size_t VAR_4)
{
 struct resource *VAR_5, *VAR_6 = VAR_2->parent;
 resource_size_t VAR_7 = VAR_3 + VAR_4 - 1;
 int VAR_8 = -VAR_0;

 FUNC_0(&VAR_1);

 if ((VAR_3 < VAR_6->start) || (VAR_7 > VAR_6->end))
  goto out;

 for (VAR_5 = VAR_2->child; VAR_5; VAR_5 = VAR_5->sibling) {
  if ((VAR_5->start < VAR_3) || (VAR_5->end > VAR_7))
   goto out;
 }

 if (VAR_2->sibling && (VAR_2->sibling->start <= VAR_7))
  goto out;

 VAR_5 = VAR_6->child;
 if (VAR_5 != VAR_2) {
  while (VAR_5->sibling != VAR_2)
   VAR_5 = VAR_5->sibling;
  if (VAR_3 <= VAR_5->end)
   goto out;
 }

 VAR_2->start = VAR_3;
 VAR_2->end = VAR_7;
 VAR_8 = 0;

 out:
 FUNC_1(&VAR_1);
 return VAR_8;
}
