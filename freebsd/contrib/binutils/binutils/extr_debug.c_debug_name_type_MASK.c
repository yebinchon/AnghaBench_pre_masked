
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct debug_named_type* knamed; } ;
struct debug_type {TYPE_1__ u; } ;
struct debug_named_type {struct debug_name* name; struct debug_type* type; } ;
struct TYPE_6__ {struct debug_type* type; } ;
struct debug_name {TYPE_3__ u; } ;
struct debug_handle {TYPE_2__* current_file; int * current_unit; } ;
typedef struct debug_type* debug_type ;
struct TYPE_5__ {int globals; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct debug_type* VAR_3 ;
 int FUNC_0 (char*) ;
 struct debug_name* FUNC_1 (struct debug_handle*,int *,char const*,int ,int ) ;
 int FUNC_2 (int ) ;
 struct debug_type* FUNC_3 (struct debug_handle*,int ,int ) ;
 int FUNC_4 (struct debug_named_type*,int ,int) ;
 scalar_t__ FUNC_5 (int) ;

debug_type
FUNC_6 (void *VAR_4, const char *VAR_5, debug_type VAR_6)
{
  struct debug_handle *VAR_7 = (struct debug_handle *) VAR_4;
  struct debug_type *VAR_8;
  struct debug_named_type *VAR_9;
  struct debug_name *VAR_10;

  if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0))
    return VAR_3;

  if (VAR_7->current_unit == ((void*)0)
      || VAR_7->current_file == ((void*)0))
    {
      FUNC_2 (FUNC_0("debug_name_type: no current file"));
      return VAR_3;
    }

  VAR_8 = FUNC_3 (VAR_7, VAR_0, 0);
  if (VAR_8 == ((void*)0))
    return VAR_3;

  VAR_9 = (struct debug_named_type *) FUNC_5 (sizeof *VAR_9);
  FUNC_4 (VAR_9, 0, sizeof *VAR_9);

  VAR_9->type = VAR_6;

  VAR_8->u.knamed = VAR_9;




  VAR_10 = FUNC_1 (VAR_7, &VAR_7->current_file->globals, VAR_5,
          VAR_2, VAR_1);
  if (VAR_10 == ((void*)0))
    return VAR_3;

  VAR_10->u.type = VAR_8;

  VAR_9->name = VAR_10;

  return VAR_8;
}
