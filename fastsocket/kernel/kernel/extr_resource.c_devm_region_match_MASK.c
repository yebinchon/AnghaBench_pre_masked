
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct region_devres {scalar_t__ parent; scalar_t__ start; scalar_t__ n; } ;
struct device {int dummy; } ;



__attribute__((used)) static int FUNC_0(struct device *VAR_0, void *VAR_1, void *VAR_2)
{
 struct region_devres *VAR_3 = VAR_1, *VAR_4 = VAR_2;

 return VAR_3->parent == VAR_4->parent &&
  VAR_3->start == VAR_4->start && VAR_3->n == VAR_4->n;
}
