
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int force_common_definition; scalar_t__ inhibit_common_definition; } ;
struct TYPE_5__ {int sort_common; } ;
struct TYPE_4__ {int hash; scalar_t__ relocatable; } ;


 int FUNC_0 (int ,int ,int*) ;
 TYPE_3__ VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  if (VAR_0.inhibit_common_definition)
    return;
  if (VAR_3.relocatable
      && ! VAR_0.force_common_definition)
    return;

  if (! VAR_1.sort_common)
    FUNC_0 (VAR_3.hash, VAR_2, ((void*)0));
  else
    {
      int VAR_4;

      for (VAR_4 = 4; VAR_4 >= 0; VAR_4--)
 FUNC_0 (VAR_3.hash, VAR_2, &VAR_4);
    }
}
