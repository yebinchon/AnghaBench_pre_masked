
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {TYPE_1__* stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {char const* type; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,char const*,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (struct pr_handle *VAR_1, const char *VAR_2)
{
  char *VAR_3;

  FUNC_0 (VAR_1->stack != ((void*)0));

  VAR_3 = (char *) FUNC_4 (FUNC_3 (VAR_2) + FUNC_3 (VAR_1->stack->type) + 1);
  FUNC_2 (VAR_3, "%s%s", VAR_2, VAR_1->stack->type);
  FUNC_1 (VAR_1->stack->type);
  VAR_1->stack->type = VAR_3;

  return VAR_0;
}
