
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct debug_enum_type* kenum; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_handle {int dummy; } ;
struct debug_enum_type {char const** names; int * values; } ;
typedef struct debug_type* debug_type ;
typedef int bfd_signed_vma ;


 int VAR_0 ;
 struct debug_type* VAR_1 ;
 struct debug_type* FUNC_0 (struct debug_handle*,int ,int ) ;
 int FUNC_1 (struct debug_enum_type*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

debug_type
FUNC_3 (void *VAR_2, const char **VAR_3,
        bfd_signed_vma *VAR_4)
{
  struct debug_handle *VAR_5 = (struct debug_handle *) VAR_2;
  struct debug_type *VAR_6;
  struct debug_enum_type *VAR_7;

  VAR_6 = FUNC_0 (VAR_5, VAR_0, 0);
  if (VAR_6 == ((void*)0))
    return VAR_1;

  VAR_7 = (struct debug_enum_type *) FUNC_2 (sizeof *VAR_7);
  FUNC_1 (VAR_7, 0, sizeof *VAR_7);

  VAR_7->names = VAR_3;
  VAR_7->values = VAR_4;

  VAR_6->u.kenum = VAR_7;

  return VAR_6;
}
