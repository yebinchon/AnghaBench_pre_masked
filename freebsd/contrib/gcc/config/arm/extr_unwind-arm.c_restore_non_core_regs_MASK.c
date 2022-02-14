
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int demand_save_flags; int vfp; } ;
typedef TYPE_1__ phase1_vrs ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1 (phase1_vrs * VAR_1)
{
  if ((VAR_1->demand_save_flags & VAR_0) == 0)
    FUNC_0 (&VAR_1->vfp);
}
