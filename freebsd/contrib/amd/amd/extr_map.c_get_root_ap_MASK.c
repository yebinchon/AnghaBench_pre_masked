
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ am_parent; } ;
typedef TYPE_1__ am_node ;


 TYPE_1__* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static am_node *
FUNC_1(char *VAR_1)
{
  am_node *VAR_2 = FUNC_0(VAR_1);

  if (VAR_2 && VAR_2->am_parent == VAR_0)
    return VAR_2;

  return 0;
}
