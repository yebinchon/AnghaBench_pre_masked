
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ohash {unsigned int size; TYPE_1__* t; } ;
struct TYPE_2__ {int * p; } ;


 int * VAR_0 ;

void *
FUNC_0(struct ohash *VAR_1, unsigned int *VAR_2)
{
 for (; *VAR_2 < VAR_1->size; (*VAR_2)++)
  if (VAR_1->t[*VAR_2].p != VAR_0 && VAR_1->t[*VAR_2].p != ((void*)0))
   return (void *)VAR_1->t[(*VAR_2)++].p;
 return ((void*)0);
}
