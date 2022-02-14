
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * ucl_object_iter_t ;
struct ucl_object_safe_iter {int * expl_it; } ;


 int FUNC_0 (int,int *) ;
 struct ucl_object_safe_iter* FUNC_1 (int *) ;
 int FUNC_2 (struct ucl_object_safe_iter*) ;

void
FUNC_3 (ucl_object_iter_t VAR_0)
{
 struct ucl_object_safe_iter *VAR_1 = FUNC_1 (VAR_0);

 FUNC_2 (VAR_1);

 if (VAR_1->expl_it != ((void*)0)) {
  FUNC_0 (sizeof (*VAR_1->expl_it), VAR_1->expl_it);
 }

 FUNC_0 (sizeof (*VAR_1), VAR_0);
}
