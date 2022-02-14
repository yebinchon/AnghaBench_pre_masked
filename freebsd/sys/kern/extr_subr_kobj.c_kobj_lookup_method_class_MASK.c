
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ kobjop_desc_t ;
struct TYPE_5__ {scalar_t__ desc; } ;
typedef TYPE_1__ kobj_method_t ;
typedef TYPE_2__* kobj_class_t ;
struct TYPE_6__ {TYPE_1__* methods; } ;



__attribute__((used)) static kobj_method_t*
FUNC_0(kobj_class_t VAR_0, kobjop_desc_t VAR_1)
{
 kobj_method_t *VAR_2 = VAR_0->methods;
 kobj_method_t *VAR_3;

 for (VAR_3 = VAR_2; VAR_3 && VAR_3->desc; VAR_3++) {
  if (VAR_3->desc == VAR_1) {
   return VAR_3;
  }
 }

 return ((void*)0);
}
