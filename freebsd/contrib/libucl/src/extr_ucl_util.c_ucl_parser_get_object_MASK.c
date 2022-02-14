
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_object_t ;
struct ucl_parser {scalar_t__ state; int * top_obj; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int *) ;

ucl_object_t*
FUNC_1 (struct ucl_parser *VAR_1)
{
 if (VAR_1->state != VAR_0 && VAR_1->top_obj != ((void*)0)) {
  return FUNC_0 (VAR_1->top_obj);
 }

 return ((void*)0);
}
