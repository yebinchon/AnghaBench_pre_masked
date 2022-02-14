
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct debug_function* function; } ;
struct debug_name {TYPE_2__ u; } ;
struct debug_handle {TYPE_1__* current_file; struct debug_function* current_block; struct debug_function* current_function; int * current_unit; } ;
struct debug_function {struct debug_function* blocks; void* end; void* start; int * return_type; } ;
struct debug_block {struct debug_block* blocks; void* end; void* start; int * return_type; } ;
typedef int * debug_type ;
typedef void* bfd_vma ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_3__ {int globals; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 struct debug_name* FUNC_1 (struct debug_handle*,int *,char const*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct debug_function*,int ,int) ;
 scalar_t__ FUNC_4 (int) ;

bfd_boolean
FUNC_5 (void *VAR_5, const char *VAR_6,
         debug_type VAR_7, bfd_boolean VAR_8,
         bfd_vma VAR_9)
{
  struct debug_handle *VAR_10 = (struct debug_handle *) VAR_5;
  struct debug_function *VAR_11;
  struct debug_block *VAR_12;
  struct debug_name *VAR_13;

  if (VAR_6 == ((void*)0))
    VAR_6 = "";
  if (VAR_7 == ((void*)0))
    return VAR_3;

  if (VAR_10->current_unit == ((void*)0))
    {
      FUNC_2 (FUNC_0("debug_record_function: no debug_set_filename call"));
      return VAR_3;
    }

  VAR_11 = (struct debug_function *) FUNC_4 (sizeof *VAR_11);
  FUNC_3 (VAR_11, 0, sizeof *VAR_11);

  VAR_11->return_type = VAR_7;

  VAR_12 = (struct debug_block *) FUNC_4 (sizeof *VAR_12);
  FUNC_3 (VAR_12, 0, sizeof *VAR_12);

  VAR_12->start = VAR_9;
  VAR_12->end = (bfd_vma) -1;

  VAR_11->blocks = VAR_12;

  VAR_10->current_function = VAR_11;
  VAR_10->current_block = VAR_12;



  VAR_13 = FUNC_1 (VAR_10,
         &VAR_10->current_file->globals,
         VAR_6,
         VAR_2,
         (VAR_8
          ? VAR_0
          : VAR_1));
  if (VAR_13 == ((void*)0))
    return VAR_3;

  VAR_13->u.function = VAR_11;

  return VAR_4;
}
