
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dba_array {size_t eu; int* em; int pos; } ;
typedef size_t int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;

void
FUNC_2(struct dba_array *VAR_0)
{
 int32_t VAR_1;

 VAR_0->pos = FUNC_1();
 for (VAR_1 = 0; VAR_1 < VAR_0->eu; VAR_1++)
  if (VAR_0->em[VAR_1] != -1)
   FUNC_0(VAR_0->em[VAR_1]);
}
