
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct malloc_type {int dummy; } ;
typedef int * kobj_t ;
typedef TYPE_1__* kobj_class_t ;
struct TYPE_4__ {int size; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct malloc_type*) ;
 scalar_t__ FUNC_1 (int *,TYPE_1__*,int) ;
 int * FUNC_2 (int ,struct malloc_type*,int) ;

kobj_t
FUNC_3(kobj_class_t VAR_1, struct malloc_type *VAR_2, int VAR_3)
{
 kobj_t VAR_4;

 VAR_4 = FUNC_2(VAR_1->size, VAR_2, VAR_3 | VAR_0);
 if (VAR_4 == ((void*)0))
  return (((void*)0));
 if (FUNC_1(VAR_4, VAR_1, VAR_3) != 0) {
  FUNC_0(VAR_4, VAR_2);
  return (((void*)0));
 }
 return (VAR_4);
}
