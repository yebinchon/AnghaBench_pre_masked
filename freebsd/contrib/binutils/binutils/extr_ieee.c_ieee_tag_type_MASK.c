
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int string; } ;
struct ieee_name_type_hash_entry {TYPE_3__ root; struct ieee_name_type* types; } ;
struct TYPE_4__ {void* unsignedp; void* localp; int name; scalar_t__ indx; int size; } ;
struct ieee_name_type {char const* tag; unsigned int id; int kind; TYPE_1__ type; struct ieee_name_type* next; scalar_t__ indx; void* defined; } ;
struct ieee_handle {TYPE_2__* type_stack; scalar_t__ type_indx; int tags; struct ieee_name_type* enums; } ;
struct ieee_defined_enum {char const* tag; unsigned int id; int kind; TYPE_1__ type; struct ieee_defined_enum* next; scalar_t__ indx; void* defined; } ;
typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;
typedef void* bfd_boolean ;
struct TYPE_5__ {TYPE_1__ type; } ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 () ;
 struct ieee_name_type_hash_entry* FUNC_1 (int *,char const*,void*,void*) ;
 void* FUNC_2 (struct ieee_handle*,scalar_t__,int ,void*,void*) ;
 int FUNC_3 (struct ieee_name_type*,int ,int) ;
 int FUNC_4 (char*,char*,unsigned int) ;
 scalar_t__ FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_3, const char *VAR_4, unsigned int VAR_5,
        enum debug_type_kind VAR_6)
{
  struct ieee_handle *VAR_7 = (struct ieee_handle *) VAR_3;
  bfd_boolean VAR_8;
  bfd_boolean VAR_9;
  char VAR_10[20];
  struct ieee_name_type_hash_entry *VAR_11;
  struct ieee_name_type *VAR_12;

  if (VAR_6 == VAR_0)
    {
      struct ieee_defined_enum *VAR_13;

      if (VAR_4 == ((void*)0))
 FUNC_0 ();
      for (VAR_13 = VAR_7->enums; VAR_13 != ((void*)0); VAR_13 = VAR_13->next)
 if (VAR_13->tag != ((void*)0) && FUNC_5 (VAR_13->tag, VAR_4) == 0)
   return FUNC_2 (VAR_7, VAR_13->indx, 0, VAR_2, VAR_1);

      VAR_13 = (struct ieee_defined_enum *) FUNC_6 (sizeof *VAR_13);
      FUNC_3 (VAR_13, 0, sizeof *VAR_13);

      VAR_13->indx = VAR_7->type_indx;
      ++VAR_7->type_indx;
      VAR_13->tag = VAR_4;
      VAR_13->defined = VAR_1;

      VAR_13->next = VAR_7->enums;
      VAR_7->enums = VAR_13;

      return FUNC_2 (VAR_7, VAR_13->indx, 0, VAR_2, VAR_1);
    }

  VAR_8 = VAR_1;

  VAR_9 = VAR_1;
  if (VAR_4 == ((void*)0))
    {
      FUNC_4 (VAR_10, "__anon%u", VAR_5);
      VAR_4 = VAR_10;
      VAR_9 = VAR_2;
    }

  VAR_11 = FUNC_1 (&VAR_7->tags, VAR_4, VAR_2, VAR_9);
  if (VAR_11 == ((void*)0))
    return VAR_1;

  for (VAR_12 = VAR_11->types; VAR_12 != ((void*)0); VAR_12 = VAR_12->next)
    {
      if (VAR_12->id == VAR_5)
 {
   if (! FUNC_2 (VAR_7, VAR_12->type.indx, VAR_12->type.size,
    VAR_12->type.unsignedp, VAR_12->type.localp))
     return VAR_1;

   VAR_7->type_stack->type = VAR_12->type;
   return VAR_2;
 }

      if (! VAR_12->type.localp)
 {


   VAR_8 = VAR_2;
 }
    }

  VAR_12 = (struct ieee_name_type *) FUNC_6 (sizeof *VAR_12);
  FUNC_3 (VAR_12, 0, sizeof *VAR_12);

  VAR_12->id = VAR_5;
  VAR_12->type.name = VAR_11->root.string;
  VAR_12->type.indx = VAR_7->type_indx;
  VAR_12->type.localp = VAR_8;
  ++VAR_7->type_indx;
  VAR_12->kind = VAR_6;

  VAR_12->next = VAR_11->types;
  VAR_11->types = VAR_12;

  if (! FUNC_2 (VAR_7, VAR_12->type.indx, 0, VAR_1, VAR_8))
    return VAR_1;

  VAR_7->type_stack->type.name = VAR_11->root.string;

  return VAR_2;
}
