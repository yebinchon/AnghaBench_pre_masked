
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthr {uintptr_t paddr; struct kthr* next; } ;


 struct kthr* VAR_0 ;

struct kthr *
FUNC_0(uintptr_t VAR_1)
{
 struct kthr *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2 != ((void*)0) && VAR_2->paddr != VAR_1)
  VAR_2 = VAR_2->next;
 return (VAR_2);
}
