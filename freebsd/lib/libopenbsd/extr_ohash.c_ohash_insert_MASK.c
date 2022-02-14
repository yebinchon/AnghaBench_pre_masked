
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ohash {int total; int size; TYPE_1__* t; int deleted; } ;
struct TYPE_2__ {void* p; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ohash*) ;

void *
FUNC_1(struct ohash *VAR_2, unsigned int VAR_3, void *VAR_4)
{



 if (VAR_2->t[VAR_3].p == VAR_0) {
  VAR_2->deleted--;
  VAR_2->t[VAR_3].p = VAR_4;
 } else {
  VAR_2->t[VAR_3].p = VAR_4;

  if (++VAR_2->total * 4 > VAR_2->size * 3)
   FUNC_0(VAR_2);
 }
 return VAR_4;
}
