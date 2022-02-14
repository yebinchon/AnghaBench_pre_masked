
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {int indent; TYPE_1__* stack; } ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_2__ {int visibility; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct pr_handle*,char const*) ;
 scalar_t__ FUNC_1 (struct pr_handle*) ;
 int FUNC_2 (struct pr_handle*,char*) ;
 int FUNC_3 (char*,char*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (void *VAR_2, const char *VAR_3, unsigned int VAR_4,
        bfd_boolean VAR_5, unsigned int VAR_6)
{
  struct pr_handle *VAR_7 = (struct pr_handle *) VAR_2;

  VAR_7->indent += 2;

  if (! FUNC_2 (VAR_7, VAR_5 ? "struct " : "union "))
    return VAR_1;
  if (VAR_3 != ((void*)0))
    {
      if (! FUNC_0 (VAR_7, VAR_3))
 return VAR_1;
    }
  else
    {
      char VAR_8[20];

      FUNC_3 (VAR_8, "%%anon%u", VAR_4);
      if (! FUNC_0 (VAR_7, VAR_8))
 return VAR_1;
    }

  if (! FUNC_0 (VAR_7, " {"))
    return VAR_1;
  if (VAR_6 != 0 || VAR_3 != ((void*)0))
    {
      char VAR_9[30];

      if (! FUNC_0 (VAR_7, " /*"))
 return VAR_1;

      if (VAR_6 != 0)
 {
   FUNC_3 (VAR_9, " size %u", VAR_6);
   if (! FUNC_0 (VAR_7, VAR_9))
     return VAR_1;
 }
      if (VAR_3 != ((void*)0))
 {
   FUNC_3 (VAR_9, " id %u", VAR_4);
   if (! FUNC_0 (VAR_7, VAR_9))
     return VAR_1;
 }
      if (! FUNC_0 (VAR_7, " */"))
 return VAR_1;
    }
  if (! FUNC_0 (VAR_7, "\n"))
    return VAR_1;

  VAR_7->stack->visibility = VAR_0;

  return FUNC_1 (VAR_7);
}
