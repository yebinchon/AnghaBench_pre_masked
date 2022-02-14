
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slist {struct slist* next; } ;



void
FUNC_0(struct slist *VAR_0, struct slist *VAR_1)
{




 while (VAR_0->next)
  VAR_0 = VAR_0->next;
 VAR_0->next = VAR_1;
}
