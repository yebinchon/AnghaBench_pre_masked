
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pr_handle {TYPE_2__* stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef int bfd_boolean ;
struct TYPE_4__ {TYPE_1__* next; } ;
struct TYPE_3__ {int * method; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct pr_handle*,char const*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct pr_handle*) ;
 char* FUNC_3 (struct pr_handle*) ;
 int FUNC_4 (struct pr_handle*,int) ;
 int FUNC_5 (struct pr_handle*,char*) ;
 int FUNC_6 (struct pr_handle*,int *) ;

__attribute__((used)) static bfd_boolean
FUNC_7 (void *VAR_1, const char *VAR_2,
    enum debug_visibility VAR_3,
    bfd_boolean VAR_4, bfd_boolean VAR_5)
{
  struct pr_handle *VAR_6 = (struct pr_handle *) VAR_1;
  char *VAR_7;

  FUNC_1 (VAR_6->stack != ((void*)0));
  FUNC_1 (VAR_6->stack->next != ((void*)0));
  FUNC_1 (VAR_6->stack->next->method != ((void*)0));


  if (VAR_5)
    {
      if (! FUNC_0 (VAR_6, " volatile"))
 return VAR_0;
    }
  if (VAR_4)
    {
      if (! FUNC_0 (VAR_6, " const"))
 return VAR_0;
    }


  if (! FUNC_5 (VAR_6, "static "))
    return VAR_0;


  if (! FUNC_6 (VAR_6, VAR_6->stack->next->method))
    return VAR_0;


  VAR_7 = FUNC_3 (VAR_6);
  if (VAR_7 == ((void*)0))
    return VAR_0;



  if (! FUNC_4 (VAR_6, VAR_3))
    return VAR_0;

  return (FUNC_0 (VAR_6, VAR_7)
   && FUNC_0 (VAR_6, " /* ")
   && FUNC_0 (VAR_6, VAR_2)
   && FUNC_0 (VAR_6, " */;\n")
   && FUNC_2 (VAR_6));
}
