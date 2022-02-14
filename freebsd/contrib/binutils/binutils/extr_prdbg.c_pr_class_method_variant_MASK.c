
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pr_handle {TYPE_3__* stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef scalar_t__ bfd_vma ;
typedef int bfd_boolean ;
struct TYPE_6__ {TYPE_2__* next; } ;
struct TYPE_5__ {int method; TYPE_1__* next; } ;
struct TYPE_4__ {int method; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pr_handle*,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pr_handle*) ;
 char* FUNC_3 (struct pr_handle*) ;
 int FUNC_4 (struct pr_handle*,int) ;
 int FUNC_5 (scalar_t__,char*,int ,int) ;
 int FUNC_6 (struct pr_handle*,int ) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_2, const char *VAR_3,
    enum debug_visibility VAR_4,
    bfd_boolean VAR_5, bfd_boolean VAR_6,
    bfd_vma VAR_7, bfd_boolean VAR_8)
{
  struct pr_handle *VAR_9 = (struct pr_handle *) VAR_2;
  char *VAR_10;
  char *VAR_11;

  FUNC_1 (VAR_9->stack != ((void*)0));
  FUNC_1 (VAR_9->stack->next != ((void*)0));


  if (VAR_6)
    {
      if (! FUNC_0 (VAR_9, " volatile"))
 return VAR_0;
    }
  if (VAR_5)
    {
      if (! FUNC_0 (VAR_9, " const"))
 return VAR_0;
    }


  if (! FUNC_6 (VAR_9,
    (VAR_8
     ? VAR_9->stack->next->next->method
     : VAR_9->stack->next->method)))
    return VAR_0;


  VAR_10 = FUNC_3 (VAR_9);
  if (VAR_10 == ((void*)0))
    return VAR_0;


  if (! VAR_8)
    VAR_11 = ((void*)0);
  else
    {
      VAR_11 = FUNC_3 (VAR_9);
      if (VAR_11 == ((void*)0))
 return VAR_0;
    }



  if (! FUNC_4 (VAR_9, VAR_4))
    return VAR_0;

  if (! FUNC_0 (VAR_9, VAR_10)
      || ! FUNC_0 (VAR_9, " /* ")
      || ! FUNC_0 (VAR_9, VAR_3)
      || ! FUNC_0 (VAR_9, " "))
    return VAR_0;
  if (VAR_8 || VAR_7 != 0)
    {
      char VAR_12[20];

      if (VAR_8)
 {
   if (! FUNC_0 (VAR_9, "context ")
       || ! FUNC_0 (VAR_9, VAR_11)
       || ! FUNC_0 (VAR_9, " "))
     return VAR_0;
 }
      FUNC_5 (VAR_7, VAR_12, VAR_1, VAR_0);
      if (! FUNC_0 (VAR_9, "voffset ")
   || ! FUNC_0 (VAR_9, VAR_12))
 return VAR_0;
    }

  return (FUNC_0 (VAR_9, " */;\n")
   && FUNC_2 (VAR_9));
}
