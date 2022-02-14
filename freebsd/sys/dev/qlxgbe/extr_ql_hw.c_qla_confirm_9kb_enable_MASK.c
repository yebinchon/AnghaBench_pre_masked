
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ enable_9kb; int mbx_intr_mask_offset; } ;
struct TYPE_8__ {TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int) ;
 int FUNC_2 (TYPE_2__*,int *,int *) ;
 int VAR_3 ;

void
FUNC_3(qla_host_t *VAR_4)
{


 VAR_4->hw.mbx_intr_mask_offset = FUNC_0(VAR_4, VAR_2);


 FUNC_1(VAR_4, VAR_1, VAR_0);
 FUNC_1(VAR_4, VAR_4->hw.mbx_intr_mask_offset, 0x0);






 VAR_4->hw.enable_9kb = 0;

 return;
}
