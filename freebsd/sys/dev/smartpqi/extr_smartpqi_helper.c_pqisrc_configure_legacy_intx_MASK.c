
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_1__* pqi_reg; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {int legacy_intr_mask_set; int legacy_intr_mask_clr; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*,int *,int ) ;
 int FUNC_2 (TYPE_2__*,int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(pqisrc_softstate_t *VAR_2, boolean_t VAR_3)
{
 uint32_t VAR_4;
 uint32_t *VAR_5 = ((void*)0);

 FUNC_0("IN\n");

 if (VAR_3)
  VAR_5 = &VAR_2->pqi_reg->legacy_intr_mask_clr;
 else
  VAR_5 = &VAR_2->pqi_reg->legacy_intr_mask_set;

 VAR_4 = FUNC_1(VAR_2, VAR_5, VAR_1);
 VAR_4 |= VAR_0;
 FUNC_2(VAR_2, VAR_5, VAR_1 ,VAR_4);

 FUNC_0("OUT\n");
}
