
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {int indent; TYPE_1__* stack; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {char* flavor; int visibility; scalar_t__ num_parents; int * parents; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct pr_handle*,char*) ;
 char* FUNC_1 (struct pr_handle*) ;
 int FUNC_2 (struct pr_handle*,char const*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (void *VAR_3, const char *VAR_4, unsigned int VAR_5,
       bfd_boolean VAR_6, unsigned int VAR_7,
       bfd_boolean VAR_8, bfd_boolean VAR_9)
{
  struct pr_handle *VAR_10 = (struct pr_handle *) VAR_3;
  char *VAR_11 = ((void*)0);
  const char *VAR_12;

  VAR_10->indent += 2;

  if (VAR_8 && ! VAR_9)
    {
      VAR_11 = FUNC_1 (VAR_10);
      if (VAR_11 == ((void*)0))
 return VAR_1;
    }

  if (VAR_4 != ((void*)0))
    VAR_12 = VAR_4;
  else
    {
      char VAR_13[20];

      FUNC_3 (VAR_13, "%%anon%u", VAR_5);
      VAR_12 = VAR_13;
    }

  if (! FUNC_2 (VAR_10, VAR_12))
    return VAR_1;

  VAR_10->stack->flavor = VAR_6 ? "class" : "union class";
  VAR_10->stack->parents = ((void*)0);
  VAR_10->stack->num_parents = 0;

  if (VAR_7 != 0 || VAR_8 || VAR_9 || VAR_4 != ((void*)0))
    {
      if (VAR_8)
 {
   if (! FUNC_0 (VAR_10, " vtable "))
     return VAR_1;
   if (VAR_9)
     {
       if (! FUNC_0 (VAR_10, "self "))
  return VAR_1;
     }
   else
     {
       if (! FUNC_0 (VAR_10, VAR_11)
    || ! FUNC_0 (VAR_10, " "))
  return VAR_1;
     }
 }
    }

  VAR_10->stack->visibility = VAR_0;

  return VAR_2;
}
