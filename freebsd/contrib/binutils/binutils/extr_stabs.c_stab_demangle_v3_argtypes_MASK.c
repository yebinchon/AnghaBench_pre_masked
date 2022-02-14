
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct stab_handle {int dummy; } ;
struct TYPE_9__ {TYPE_3__* right; } ;
struct TYPE_10__ {TYPE_4__ s_binary; } ;
struct demangle_component {scalar_t__ type; TYPE_5__ u; } ;
typedef int debug_type ;
typedef int bfd_boolean ;
struct TYPE_6__ {int right; } ;
struct TYPE_7__ {TYPE_1__ s_binary; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (char*) ;
 struct demangle_component* FUNC_1 (char const*,int,void**) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (char const*) ;
 int * FUNC_5 (void*,struct stab_handle*,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static debug_type *
FUNC_6 (void *VAR_5, struct stab_handle *VAR_6,
      const char *VAR_7, bfd_boolean *VAR_8)
{
  struct demangle_component *VAR_9;
  void *VAR_10;
  debug_type *VAR_11;

  VAR_9 = FUNC_1 (VAR_7, VAR_3 | VAR_2, &VAR_10);
  if (VAR_9 == ((void*)0))
    {
      FUNC_4 (VAR_7);
      return ((void*)0);
    }



  if (VAR_9->type != VAR_1
      || VAR_9->u.s_binary.right->type != VAR_0)
    {
      FUNC_2 (VAR_4, "%s", FUNC_0("Demangled name is not a function\n"));
      FUNC_3 (VAR_10);
      return ((void*)0);
    }

  VAR_11 = FUNC_5 (VAR_5, VAR_6,
        VAR_9->u.s_binary.right->u.s_binary.right,
        VAR_8);

  FUNC_3 (VAR_10);

  return VAR_11;
}
