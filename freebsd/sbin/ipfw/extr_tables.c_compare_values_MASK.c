
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _table_value {scalar_t__ spare1; } ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 struct _table_value *VAR_2, *VAR_3;

 VAR_2 = (struct _table_value *)VAR_0;
 VAR_3 = (struct _table_value *)VAR_1;

 if (VAR_2->spare1 < VAR_3->spare1)
  return (-1);
 else if (VAR_2->spare1 > VAR_3->spare1)
  return (1);

 return (0);
}
