
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stab_handle {int dummy; } ;
struct TYPE_3__ {int left; struct demangle_component* right; } ;
struct TYPE_4__ {TYPE_1__ s_binary; } ;
struct demangle_component {scalar_t__ type; TYPE_2__ u; } ;
typedef int * debug_type ;
typedef scalar_t__ bfd_boolean ;


 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int **) ;
 int * FUNC_3 (void*,struct stab_handle*,int ,int *,scalar_t__*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (unsigned int) ;
 scalar_t__ FUNC_5 (int **,unsigned int) ;

__attribute__((used)) static debug_type *
FUNC_6 (void *VAR_5, struct stab_handle *VAR_6,
     struct demangle_component *VAR_7,
     bfd_boolean *VAR_8)
{
  struct demangle_component *VAR_9;
  unsigned int VAR_10, VAR_11;
  debug_type *VAR_12;

  VAR_10 = 10;
  VAR_12 = (debug_type *) FUNC_4 (VAR_10 * sizeof *VAR_12);
  *VAR_8 = VAR_2;

  VAR_11 = 0;

  for (VAR_9 = VAR_7;
       VAR_9 != ((void*)0);
       VAR_9 = VAR_9->u.s_binary.right)
    {
      debug_type VAR_13;
      bfd_boolean VAR_14;

      if (VAR_9->type != VAR_1)
 {
   FUNC_1 (VAR_4, "%s", FUNC_0("Unexpected type in v3 arglist demangling\n"));
   FUNC_2 (VAR_12);
   return ((void*)0);
 }

      VAR_13 = FUNC_3 (VAR_5, VAR_6, VAR_9->u.s_binary.left,
      ((void*)0), &VAR_14);
      if (VAR_13 == ((void*)0))
 {
   if (VAR_14)
     {
       *VAR_8 = VAR_3;
       continue;
     }
   FUNC_2 (VAR_12);
   return ((void*)0);
 }

      if (VAR_11 + 1 >= VAR_10)
 {
   VAR_10 += 10;
   VAR_12 = (debug_type *) FUNC_5 (VAR_12, VAR_10 * sizeof *VAR_12);
 }

      VAR_12[VAR_11] = VAR_13;
      ++VAR_11;
    }

  VAR_12[VAR_11] = VAR_0;

  return VAR_12;
}
