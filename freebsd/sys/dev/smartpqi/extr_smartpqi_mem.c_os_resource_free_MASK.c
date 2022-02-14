
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pqi_regs_res0; int pqi_regs_rid0; int pqi_dev; scalar_t__ pqi_parent_dmat; } ;
struct TYPE_5__ {TYPE_1__ os_specific; } ;
typedef TYPE_2__ pqisrc_softstate_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int *) ;

void FUNC_2(pqisrc_softstate_t *VAR_1)
{
 if(VAR_1->os_specific.pqi_parent_dmat)
  FUNC_0(VAR_1->os_specific.pqi_parent_dmat);

 if (VAR_1->os_specific.pqi_regs_res0 != ((void*)0))
                FUNC_1(VAR_1->os_specific.pqi_dev,
      VAR_0,
    VAR_1->os_specific.pqi_regs_rid0,
    VAR_1->os_specific.pqi_regs_res0);
}
