
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ucl_object_t ;
struct TYPE_4__ {unsigned int n; } ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int * FUNC_1 (TYPE_1__,unsigned int) ;
 TYPE_1__* VAR_0 ;

unsigned int
FUNC_2 (ucl_object_t *VAR_1, ucl_object_t *VAR_2)
{
 FUNC_0 (VAR_0, VAR_1);
 unsigned VAR_3;

 if (VAR_0 == ((void*)0)) {
  return (unsigned int)(-1);
 }

 for (VAR_3 = 0; VAR_3 < VAR_0->n; VAR_3 ++) {
  if (FUNC_1 (*VAR_0, VAR_3) == VAR_2) {
   return VAR_3;
  }
 }

 return (unsigned int)(-1);
}
