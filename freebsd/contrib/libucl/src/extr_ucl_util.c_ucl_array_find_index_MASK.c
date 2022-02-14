
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ucl_object_t ;
struct TYPE_4__ {unsigned int n; } ;


 int FUNC_0 (TYPE_1__*,int const*) ;
 int const* FUNC_1 (TYPE_1__,unsigned int) ;
 TYPE_1__* VAR_0 ;

const ucl_object_t *
FUNC_2 (const ucl_object_t *VAR_1, unsigned int VAR_2)
{
 FUNC_0 (VAR_0, VAR_1);

 if (VAR_0 != ((void*)0) && VAR_0->n > 0 && VAR_2 < VAR_0->n) {
  return FUNC_1 (*VAR_0, VAR_2);
 }

 return ((void*)0);
}
