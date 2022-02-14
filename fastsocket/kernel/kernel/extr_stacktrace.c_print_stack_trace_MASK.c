
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack_trace {int nr_entries; int * entries; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char) ;

void FUNC_3(struct stack_trace *VAR_0, int VAR_1)
{
 int VAR_2;

 if (FUNC_0(!VAR_0->entries))
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_entries; VAR_2++) {
  FUNC_2("%*c", 1 + VAR_1, ' ');
  FUNC_1(VAR_0->entries[VAR_2]);
 }
}
