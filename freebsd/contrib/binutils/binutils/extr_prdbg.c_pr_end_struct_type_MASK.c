
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {int indent; TYPE_1__* stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {char* type; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_2 (void *VAR_1)
{
  struct pr_handle *VAR_2 = (struct pr_handle *) VAR_1;
  char *VAR_3;

  FUNC_0 (VAR_2->stack != ((void*)0));
  FUNC_0 (VAR_2->indent >= 2);

  VAR_2->indent -= 2;


  VAR_3 = VAR_2->stack->type + FUNC_1 (VAR_2->stack->type) - 2;
  FUNC_0 (VAR_3[0] == ' ' && VAR_3[1] == ' ' && VAR_3[2] == '\0');

  *VAR_3++ = '}';
  *VAR_3 = '\0';

  return VAR_0;
}
