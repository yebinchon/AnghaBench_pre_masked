
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct filter {struct filter* next; } ;



int FUNC_0 (struct filter *VAR_0, int VAR_1)
{
 int VAR_2 = 1;

 if (!VAR_0)
  return 0;

 while (VAR_0->next && VAR_2 < VAR_1) {
  VAR_0 = VAR_0->next;
  ++VAR_2;
 }

 VAR_0->next = ((void*)0);
 return VAR_2;
}
