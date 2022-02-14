
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* kobjop_desc_t ;
typedef int kobj_method_t ;
typedef int kobj_class_t ;
struct TYPE_4__ {int deflt; } ;


 int * FUNC_0 (int ,TYPE_1__*) ;

kobj_method_t*
FUNC_1(kobj_class_t VAR_0,
     kobj_method_t **VAR_1,
     kobjop_desc_t VAR_2)
{
 kobj_method_t *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_2);
 if (!VAR_3)
  VAR_3 = &VAR_2->deflt;
 if (VAR_1)
  *VAR_1 = VAR_3;
 return VAR_3;
}
