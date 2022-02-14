
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct debug_namespace {int dummy; } ;
struct debug_name {int dummy; } ;
struct debug_handle {TYPE_1__* current_file; TYPE_2__* current_block; int * current_unit; } ;
typedef enum debug_object_linkage { ____Placeholder_debug_object_linkage } debug_object_linkage ;
typedef enum debug_object_kind { ____Placeholder_debug_object_kind } debug_object_kind ;
struct TYPE_4__ {struct debug_namespace* locals; } ;
struct TYPE_3__ {struct debug_namespace* globals; } ;


 int FUNC_0 (char*) ;
 struct debug_name* FUNC_1 (struct debug_handle*,struct debug_namespace**,char const*,int,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static struct debug_name *
FUNC_3 (struct debug_handle *VAR_0, const char *VAR_1,
    enum debug_object_kind VAR_2,
    enum debug_object_linkage VAR_3)
{
  struct debug_namespace **VAR_4;

  if (VAR_0->current_unit == ((void*)0)
      || VAR_0->current_file == ((void*)0))
    {
      FUNC_2 (FUNC_0("debug_add_to_current_namespace: no current file"));
      return ((void*)0);
    }

  if (VAR_0->current_block != ((void*)0))
    VAR_4 = &VAR_0->current_block->locals;
  else
    VAR_4 = &VAR_0->current_file->globals;

  return FUNC_1 (VAR_0, VAR_4, VAR_1, VAR_2, VAR_3);
}
