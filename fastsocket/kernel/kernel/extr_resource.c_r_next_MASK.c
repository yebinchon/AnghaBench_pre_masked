
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct resource {void* child; void* sibling; struct resource* parent; } ;
typedef int loff_t ;



__attribute__((used)) static void *FUNC_0(struct seq_file *VAR_0, void *VAR_1, loff_t *VAR_2)
{
 struct resource *VAR_3 = VAR_1;
 (*VAR_2)++;
 if (VAR_3->child)
  return VAR_3->child;
 while (!VAR_3->sibling && VAR_3->parent)
  VAR_3 = VAR_3->parent;
 return VAR_3->sibling;
}
