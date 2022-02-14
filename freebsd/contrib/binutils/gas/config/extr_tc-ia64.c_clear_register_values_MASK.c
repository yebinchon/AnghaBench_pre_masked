
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ known; } ;
struct TYPE_4__ {scalar_t__ debug_dv; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2 ()
{
  int VAR_3;
  if (VAR_1.debug_dv)
    FUNC_1 (VAR_2, "  Clearing register values\n");
  for (VAR_3 = 1; VAR_3 < FUNC_0 (VAR_0); VAR_3++)
    VAR_0[VAR_3].known = 0;
}
