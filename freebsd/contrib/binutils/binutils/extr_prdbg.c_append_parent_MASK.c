
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {TYPE_1__* stack; } ;
typedef int bfd_boolean ;
struct TYPE_2__ {char* parents; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;
 unsigned int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static bfd_boolean
FUNC_4 (struct pr_handle *VAR_2, const char *VAR_3)
{
  unsigned int VAR_4;

  if (VAR_3 == ((void*)0))
    return VAR_0;

  FUNC_0 (VAR_2->stack != ((void*)0));

  VAR_4 = VAR_2->stack->parents ? FUNC_2 (VAR_2->stack->parents) : 0;
  VAR_2->stack->parents = (char *) FUNC_3 (VAR_2->stack->parents,
         VAR_4 + FUNC_2 (VAR_3) + 1);
  FUNC_1 (VAR_2->stack->parents + VAR_4, VAR_3);

  return VAR_1;
}
