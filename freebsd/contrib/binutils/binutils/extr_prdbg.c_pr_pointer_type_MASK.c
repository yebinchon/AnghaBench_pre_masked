
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {TYPE_1__* stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {int type; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,char) ;
 int FUNC_2 (struct pr_handle*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_3 (void *VAR_0)
{
  struct pr_handle *VAR_1 = (struct pr_handle *) VAR_0;
  char *VAR_2;

  FUNC_0 (VAR_1->stack != ((void*)0));

  VAR_2 = FUNC_1 (VAR_1->stack->type, '|');
  if (VAR_2 != ((void*)0) && VAR_2[1] == '[')
    return FUNC_2 (VAR_1, "(*|)");
  return FUNC_2 (VAR_1, "*|");
}
