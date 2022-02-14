
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kthr {int tid; struct kthr* next; } ;


 struct kthr* VAR_0 ;

struct kthr *
FUNC_0(int VAR_1)
{
 struct kthr *VAR_2;

 VAR_2 = VAR_0;
 while (VAR_2 != ((void*)0) && VAR_2->tid != VAR_1)
  VAR_2 = VAR_2->next;
 return (VAR_2);
}
