
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {TYPE_1__* stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {char const* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct pr_handle*,char const*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (struct pr_handle*,char*) ;
 int FUNC_5 (char*,char*) ;
 char* FUNC_6 (char const*,char) ;
 int FUNC_7 (char*,char const*) ;
 scalar_t__ FUNC_8 (char const*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_10 (struct pr_handle *VAR_2, const char *VAR_3)
{
  char *VAR_4;

  FUNC_1 (VAR_2->stack != ((void*)0));

  VAR_4 = FUNC_6 (VAR_2->stack->type, '|');
  if (VAR_4 != ((void*)0))
    {
      char *VAR_5;

      VAR_5 = (char *) FUNC_9 (FUNC_8 (VAR_2->stack->type) + FUNC_8 (VAR_3));

      FUNC_3 (VAR_5, VAR_2->stack->type, VAR_4 - VAR_2->stack->type);
      FUNC_7 (VAR_5 + (VAR_4 - VAR_2->stack->type), VAR_3);
      FUNC_5 (VAR_5, VAR_4 + 1);

      FUNC_2 (VAR_2->stack->type);
      VAR_2->stack->type = VAR_5;

      return VAR_1;
    }

  if (FUNC_6 (VAR_3, '|') != ((void*)0)
      && (FUNC_6 (VAR_2->stack->type, '{') != ((void*)0)
   || FUNC_6 (VAR_2->stack->type, '(') != ((void*)0)))
    {
      if (! FUNC_4 (VAR_2, "(")
   || ! FUNC_0 (VAR_2, ")"))
 return VAR_0;
    }

  if (*VAR_3 == '\0')
    return VAR_1;

  return (FUNC_0 (VAR_2, " ")
   && FUNC_0 (VAR_2, VAR_3));
}
