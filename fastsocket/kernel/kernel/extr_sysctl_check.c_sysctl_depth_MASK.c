
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_table {struct ctl_table* parent; } ;



__attribute__((used)) static int FUNC_0(struct ctl_table *VAR_0)
{
 struct ctl_table *VAR_1;
 int VAR_2;

 VAR_2 = 0;
 for (VAR_1 = VAR_0; VAR_1->parent; VAR_1 = VAR_1->parent)
  VAR_2++;

 return VAR_2;
}
