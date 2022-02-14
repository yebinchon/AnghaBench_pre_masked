
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {int indent; TYPE_1__* stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {int visibility; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pr_handle*,char const*) ;
 scalar_t__ FUNC_1 (struct pr_handle*) ;
 char* FUNC_2 (struct pr_handle*) ;
 int FUNC_3 (struct pr_handle*,char*) ;
 int FUNC_4 (char*,char*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (void *VAR_2, const char *VAR_3, unsigned int VAR_4,
       bfd_boolean VAR_5, unsigned int VAR_6,
       bfd_boolean VAR_7, bfd_boolean VAR_8)
{
  struct pr_handle *VAR_9 = (struct pr_handle *) VAR_2;
  char *VAR_10 = ((void*)0);

  VAR_9->indent += 2;

  if (VAR_7 && ! VAR_8)
    {
      VAR_10 = FUNC_2 (VAR_9);
      if (VAR_10 == ((void*)0))
 return VAR_1;
    }

  if (! FUNC_3 (VAR_9, VAR_5 ? "class " : "union class "))
    return VAR_1;
  if (VAR_3 != ((void*)0))
    {
      if (! FUNC_0 (VAR_9, VAR_3))
 return VAR_1;
    }
  else
    {
      char VAR_11[20];

      FUNC_4 (VAR_11, "%%anon%u", VAR_4);
      if (! FUNC_0 (VAR_9, VAR_11))
 return VAR_1;
    }

  if (! FUNC_0 (VAR_9, " {"))
    return VAR_1;
  if (VAR_6 != 0 || VAR_7 || VAR_8 || VAR_3 != ((void*)0))
    {
      if (! FUNC_0 (VAR_9, " /*"))
 return VAR_1;

      if (VAR_6 != 0)
 {
   char VAR_12[20];

   FUNC_4 (VAR_12, "%u", VAR_6);
   if (! FUNC_0 (VAR_9, " size ")
       || ! FUNC_0 (VAR_9, VAR_12))
     return VAR_1;
 }

      if (VAR_7)
 {
   if (! FUNC_0 (VAR_9, " vtable "))
     return VAR_1;
   if (VAR_8)
     {
       if (! FUNC_0 (VAR_9, "self "))
  return VAR_1;
     }
   else
     {
       if (! FUNC_0 (VAR_9, VAR_10)
    || ! FUNC_0 (VAR_9, " "))
  return VAR_1;
     }
 }

      if (VAR_3 != ((void*)0))
 {
   char VAR_13[30];

   FUNC_4 (VAR_13, " id %u", VAR_4);
   if (! FUNC_0 (VAR_9, VAR_13))
     return VAR_1;
 }

      if (! FUNC_0 (VAR_9, " */"))
 return VAR_1;
    }

  VAR_9->stack->visibility = VAR_0;

  return (FUNC_0 (VAR_9, "\n")
   && FUNC_1 (VAR_9));
}
