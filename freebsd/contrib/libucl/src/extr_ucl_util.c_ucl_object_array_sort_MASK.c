
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_1__ ucl_object_t ;
struct TYPE_11__ {int n; int a; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_1 (int ,int ,int,int (*) (void const*,void const*)) ;
 TYPE_4__* VAR_1 ;

void
FUNC_2 (ucl_object_t *VAR_2,
  int (*VAR_3)(const ucl_object_t **VAR_4, const ucl_object_t **VAR_5))
{
 FUNC_0 (VAR_1, VAR_2);

 if (VAR_3 == ((void*)0) || VAR_2 == ((void*)0) || VAR_2->type != VAR_0) {
  return;
 }

 FUNC_1 (VAR_1->a, VAR_1->n, sizeof (ucl_object_t *),
   (int (*)(const void *, const void *))VAR_3);
}
