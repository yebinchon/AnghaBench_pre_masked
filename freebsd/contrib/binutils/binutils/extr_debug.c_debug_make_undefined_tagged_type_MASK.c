
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct debug_type {int dummy; } ;
struct debug_handle {int dummy; } ;
typedef enum debug_type_kind { ____Placeholder_debug_type_kind } debug_type_kind ;
typedef int debug_type ;







 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 struct debug_type* FUNC_2 (struct debug_handle*,int,int ) ;
 int FUNC_3 (void*,char const*,struct debug_type*) ;

debug_type
FUNC_4 (void *VAR_1, const char *VAR_2,
      enum debug_type_kind VAR_3)
{
  struct debug_handle *VAR_4 = (struct debug_handle *) VAR_1;
  struct debug_type *VAR_5;

  if (VAR_2 == ((void*)0))
    return VAR_0;

  switch (VAR_3)
    {
    case 130:
    case 129:
    case 132:
    case 128:
    case 131:
      break;

    default:
      FUNC_1 (FUNC_0("debug_make_undefined_type: unsupported kind"));
      return VAR_0;
    }

  VAR_5 = FUNC_2 (VAR_4, VAR_3, 0);
  if (VAR_5 == ((void*)0))
    return VAR_0;

  return FUNC_3 (VAR_1, VAR_2, VAR_5);
}
