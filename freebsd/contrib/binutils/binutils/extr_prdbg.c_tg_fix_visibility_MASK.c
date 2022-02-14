
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pr_handle {TYPE_1__* stack; } ;
typedef enum debug_visibility { ____Placeholder_debug_visibility } debug_visibility ;
typedef int bfd_boolean ;
struct TYPE_2__ {int visibility; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (struct pr_handle *VAR_2, enum debug_visibility VAR_3)
{
  FUNC_0 (VAR_2->stack != ((void*)0));

  if (VAR_2->stack->visibility == VAR_3)
    return VAR_1;

  FUNC_0 (VAR_2->stack->visibility != VAR_0);

  VAR_2->stack->visibility = VAR_3;

  return VAR_1;
}
