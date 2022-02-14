
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* size; struct TYPE_4__* class_count; struct TYPE_4__* class_type; } ;
typedef TYPE_1__ mesh_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(mesh_t *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->class_type)
   FUNC_0(VAR_0->class_type);

  if (VAR_0->class_count)
   FUNC_0(VAR_0->class_count);

  if (VAR_0->size)
   FUNC_0(VAR_0->size);

  FUNC_0(VAR_0);
 }
}
