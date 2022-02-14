
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int struct_types_alloc; struct stab_tag* struct_types; } ;
struct stab_write_handle {scalar_t__ type_index; TYPE_1__ type_cache; } ;
struct stab_tag {scalar_t__ index; char const* tag; int kind; unsigned int size; } ;
typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;


 int VAR_0 ;
 int FUNC_0 (struct stab_tag*,int ,size_t) ;
 scalar_t__ FUNC_1 (struct stab_tag*,size_t) ;

__attribute__((used)) static long
FUNC_2 (struct stab_write_handle *VAR_1, const char *VAR_2,
         unsigned int VAR_3, enum debug_type_kind VAR_4,
         unsigned int *VAR_5)
{
  if (VAR_3 >= VAR_1->type_cache.struct_types_alloc)
    {
      size_t VAR_6;

      VAR_6 = VAR_1->type_cache.struct_types_alloc;
      if (VAR_6 == 0)
 VAR_6 = 10;
      while (VAR_3 >= VAR_6)
 VAR_6 *= 2;
      VAR_1->type_cache.struct_types =
 (struct stab_tag *) FUNC_1 (VAR_1->type_cache.struct_types,
          VAR_6 * sizeof (struct stab_tag));
      FUNC_0 ((VAR_1->type_cache.struct_types
        + VAR_1->type_cache.struct_types_alloc),
       0,
       ((VAR_6 - VAR_1->type_cache.struct_types_alloc)
        * sizeof (struct stab_tag)));
      VAR_1->type_cache.struct_types_alloc = VAR_6;
    }

  if (VAR_1->type_cache.struct_types[VAR_3].index == 0)
    {
      VAR_1->type_cache.struct_types[VAR_3].index = VAR_1->type_index;
      ++VAR_1->type_index;
      VAR_1->type_cache.struct_types[VAR_3].tag = VAR_2;
      VAR_1->type_cache.struct_types[VAR_3].kind = VAR_4;
    }

  if (VAR_4 == VAR_0)
    {

      VAR_1->type_cache.struct_types[VAR_3].kind = VAR_4;
      VAR_1->type_cache.struct_types[VAR_3].size = *VAR_5;
    }
  else
    *VAR_5 = VAR_1->type_cache.struct_types[VAR_3].size;

  return VAR_1->type_cache.struct_types[VAR_3].index;
}
