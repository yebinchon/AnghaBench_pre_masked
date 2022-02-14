
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ code; scalar_t__ k; } ;
struct slist {struct slist* next; TYPE_1__ s; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct slist *VAR_1, struct slist *VAR_2)
{
 for (;;) {
  while (VAR_1 && VAR_1->s.code == VAR_0)
   VAR_1 = VAR_1->next;
  while (VAR_2 && VAR_2->s.code == VAR_0)
   VAR_2 = VAR_2->next;
  if (VAR_1 == 0)
   return VAR_2 == 0;
  if (VAR_2 == 0)
   return VAR_1 == 0;
  if (VAR_1->s.code != VAR_2->s.code || VAR_1->s.k != VAR_2->s.k)
   return 0;
  VAR_1 = VAR_1->next;
  VAR_2 = VAR_2->next;
 }
}
