
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table {struct ctl_table* parent; } ;



__attribute__((used)) static struct ctl_table *FUNC_0(struct ctl_table *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_0 && VAR_2 < VAR_1; VAR_2++)
  VAR_0 = VAR_0->parent;

 return VAR_0;
}
