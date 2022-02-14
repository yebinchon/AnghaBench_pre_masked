
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int kobjop_desc_t ;
typedef int kobj_method_t ;
typedef TYPE_1__* kobj_class_t ;
struct TYPE_4__ {struct TYPE_4__** baseclasses; } ;


 int * FUNC_0 (TYPE_1__*,int ) ;

__attribute__((used)) static kobj_method_t*
FUNC_1(kobj_class_t VAR_0,
        kobjop_desc_t VAR_1)
{
 kobj_method_t *VAR_2;
 kobj_class_t *VAR_3;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_3 = VAR_0->baseclasses;
 if (VAR_3) {
  for (; *VAR_3; VAR_3++) {
   VAR_2 = FUNC_1(*VAR_3, VAR_1);
   if (VAR_2)
    return VAR_2;
  }
 }

 return ((void*)0);
}
