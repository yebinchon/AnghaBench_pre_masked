
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* kobj_ops_t ;
struct TYPE_9__ {TYPE_1__* desc; } ;
typedef TYPE_3__ kobj_method_t ;
typedef TYPE_4__* kobj_class_t ;
struct TYPE_10__ {TYPE_2__* ops; TYPE_3__* methods; } ;
struct TYPE_8__ {TYPE_4__* cls; int ** cache; } ;
struct TYPE_7__ {scalar_t__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_0(kobj_class_t VAR_3, kobj_ops_t VAR_4)
{
 kobj_method_t *VAR_5;
 int VAR_6;




 if (VAR_3->ops)
  return;




 for (VAR_6 = 0, VAR_5 = VAR_3->methods; VAR_5->desc; VAR_6++, VAR_5++) {
  if (VAR_5->desc->id == 0)
   VAR_5->desc->id = VAR_1++;
 }




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  VAR_4->cache[VAR_6] = &VAR_2;
 VAR_4->cls = VAR_3;
 VAR_3->ops = VAR_4;
}
