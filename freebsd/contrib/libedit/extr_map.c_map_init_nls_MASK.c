
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int el_action_t ;
struct TYPE_4__ {int * key; } ;
struct TYPE_5__ {TYPE_1__ el_map; } ;
typedef TYPE_2__ EditLine ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(EditLine *VAR_1)
{
 int VAR_2;

 el_action_t *VAR_3 = VAR_1->el_map.key;

 for (VAR_2 = 0200; VAR_2 <= 0377; VAR_2++)
  if (FUNC_0(VAR_2))
   VAR_3[VAR_2] = VAR_0;
}
