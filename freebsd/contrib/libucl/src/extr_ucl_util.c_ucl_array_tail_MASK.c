
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * av; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ value; } ;
typedef TYPE_2__ ucl_object_t ;
struct TYPE_10__ {int n; TYPE_2__ const** a; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__ const*) ;
 TYPE_3__* VAR_1 ;

const ucl_object_t *
FUNC_1 (const ucl_object_t *VAR_2)
{
 FUNC_0 (VAR_1, VAR_2);

 if (VAR_2 == ((void*)0) || VAR_2->type != VAR_0 || VAR_2->value.av == ((void*)0)) {
  return ((void*)0);
 }

 return (VAR_1->n > 0 ? VAR_1->a[VAR_1->n - 1] : ((void*)0));
}
