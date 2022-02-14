
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; struct TYPE_6__* next; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int ucl_object_iter_t ;
struct ucl_object_safe_iter {TYPE_1__* impl_it; int * expl_it; } ;
typedef enum ucl_iterate_type { ____Placeholder_ucl_iterate_type } ucl_iterate_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ucl_object_safe_iter* FUNC_0 (int ) ;
 int FUNC_1 (struct ucl_object_safe_iter*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int **,int) ;
 TYPE_1__ const* FUNC_3 (int ,int) ;

const ucl_object_t*
FUNC_4 (ucl_object_iter_t VAR_4, enum ucl_iterate_type VAR_5)
{
 struct ucl_object_safe_iter *VAR_6 = FUNC_0 (VAR_4);
 const ucl_object_t *VAR_7 = ((void*)0);

 FUNC_1 (VAR_6);

 if (VAR_6->impl_it == ((void*)0)) {
  return ((void*)0);
 }

 if (VAR_6->impl_it->type == VAR_3 || VAR_6->impl_it->type == VAR_0) {
  VAR_7 = FUNC_2 (VAR_6->impl_it, &VAR_6->expl_it, 1);

  if (VAR_7 == ((void*)0) && (VAR_5 & VAR_2)) {

   VAR_6->impl_it = VAR_6->impl_it->next;
   VAR_6->expl_it = ((void*)0);

   return FUNC_3 (VAR_4, VAR_5);
  }
 }
 else {

  VAR_7 = VAR_6->impl_it;
  VAR_6->impl_it = VAR_6->impl_it->next;

  if (VAR_5 & VAR_1) {

   if (VAR_7->type == VAR_3 || VAR_7->type == VAR_0) {
    return FUNC_3 (VAR_4, VAR_5);
   }
  }
 }

 return VAR_7;
}
