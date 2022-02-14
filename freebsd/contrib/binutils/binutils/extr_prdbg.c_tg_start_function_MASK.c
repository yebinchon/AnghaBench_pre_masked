
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {char* (* demangler ) (int ,char const*,int) ;int parameter; TYPE_1__* stack; int abfd; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {char* flavor; char* method; int parents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pr_handle*,char*) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*) ;
 char* FUNC_4 (int ,char const*,int) ;
 int FUNC_5 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_6 (void *VAR_4, const char *VAR_5, bfd_boolean VAR_6)
{
  struct pr_handle *VAR_7 = (struct pr_handle *) VAR_4;
  char *VAR_8;

  if (! VAR_6)
    VAR_7->stack->flavor = "static";
  else
    VAR_7->stack->flavor = ((void*)0);

  VAR_8 = ((void*)0);
  if (VAR_7->demangler)
    VAR_8 = VAR_7->demangler (VAR_7->abfd, VAR_5, VAR_0 | VAR_1);

  if (! FUNC_5 (VAR_7, VAR_8 ? VAR_8 : VAR_5))
    return VAR_2;

  VAR_7->stack->method = ((void*)0);
  if (VAR_8 != ((void*)0))
    {
      char *VAR_9;
      VAR_9 = FUNC_3 (VAR_8, "::");
      if (VAR_9)
 {
   VAR_7->stack->method = VAR_8;
   *VAR_9 = 0;
   VAR_5 = VAR_9 + 2;
 }
      else
 {
   VAR_7->stack->method = "";
   VAR_5 = VAR_8;
 }
      VAR_9 = FUNC_1 (VAR_5, '(');
      if (VAR_9)
 *VAR_9 = 0;

    }

  VAR_7->stack->parents = FUNC_2 (VAR_5);

  if (! VAR_7->stack->method && ! FUNC_0 (VAR_7, "("))
    return VAR_2;

  VAR_7->parameter = 1;

  return VAR_3;
}
