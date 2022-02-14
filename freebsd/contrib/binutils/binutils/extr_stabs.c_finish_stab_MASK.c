
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stab_tag {int kind; int slot; int name; struct stab_tag* next; } ;
struct stab_handle {struct stab_tag* tags; scalar_t__ function_end; scalar_t__ within_function; } ;
typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;
typedef scalar_t__ bfd_vma ;
typedef scalar_t__ bfd_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (void*,scalar_t__) ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (void*,struct stab_handle*) ;

bfd_boolean
FUNC_3 (void *VAR_5, void *VAR_6)
{
  struct stab_handle *VAR_7 = (struct stab_handle *) VAR_6;
  struct stab_tag *VAR_8;

  if (VAR_7->within_function)
    {
      if (! FUNC_2 (VAR_5, VAR_7)
   || ! FUNC_0 (VAR_5, VAR_7->function_end))
 return VAR_3;
      VAR_7->within_function = VAR_3;
      VAR_7->function_end = (bfd_vma) -1;
    }

  for (VAR_8 = VAR_7->tags; VAR_8 != ((void*)0); VAR_8 = VAR_8->next)
    {
      enum debug_type_kind VAR_9;

      VAR_9 = VAR_8->kind;
      if (VAR_9 == VAR_0)
 VAR_9 = VAR_1;
      VAR_8->slot = FUNC_1 (VAR_5, VAR_8->name, VAR_9);
      if (VAR_8->slot == VAR_2)
 return VAR_3;
    }

  return VAR_4;
}
