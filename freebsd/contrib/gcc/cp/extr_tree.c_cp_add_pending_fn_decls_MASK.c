
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int varray_type ;
typedef scalar_t__ tree ;
struct saved_scope {scalar_t__ function_decl; struct saved_scope* prev; } ;


 int FUNC_0 (int ,scalar_t__) ;
 struct saved_scope* VAR_0 ;

tree
FUNC_1 (void* VAR_1, tree VAR_2)
{
  varray_type *VAR_3 = (varray_type *)VAR_1;
  struct saved_scope *VAR_4;

  for (VAR_4 = VAR_0; VAR_4; VAR_4 = VAR_4->prev)
    if (VAR_4->function_decl && VAR_4->function_decl != VAR_2)
      {
 FUNC_0 (*VAR_3, VAR_4->function_decl);
 VAR_2 = VAR_4->function_decl;
      }

  return VAR_2;
}
