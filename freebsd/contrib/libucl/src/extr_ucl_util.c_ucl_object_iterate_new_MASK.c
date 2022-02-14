
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
typedef int ucl_object_iter_t ;
struct ucl_object_safe_iter {int const* impl_it; int * expl_it; int magic; } ;


 struct ucl_object_safe_iter* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int) ;
 int VAR_0 ;

ucl_object_iter_t
FUNC_2 (const ucl_object_t *VAR_1)
{
 struct ucl_object_safe_iter *VAR_2;

 VAR_2 = FUNC_0 (sizeof (*VAR_2));
 if (VAR_2 != ((void*)0)) {
  FUNC_1 (VAR_2->magic, VAR_0, sizeof (VAR_2->magic));
  VAR_2->expl_it = ((void*)0);
  VAR_2->impl_it = VAR_1;
 }

 return (ucl_object_iter_t)VAR_2;
}
