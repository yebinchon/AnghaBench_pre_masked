
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ohash {int deleted; int total; TYPE_1__* t; } ;
struct TYPE_2__ {void* p; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ohash*) ;

void *
FUNC_1(struct ohash *VAR_3, unsigned int VAR_4)
{
 void *VAR_5 = (void *)VAR_3->t[VAR_4].p;

 if (VAR_5 == ((void*)0) || VAR_5 == VAR_0)
  return ((void*)0);




 VAR_3->t[VAR_4].p = VAR_0;
 VAR_3->deleted++;
 if (VAR_3->deleted >= VAR_1 && 4 * VAR_3->deleted > VAR_3->total)
  FUNC_0(VAR_3);
 return VAR_5;
}
