
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
typedef int u_int64_t ;
struct hpt_iop_hba {int ctlcfgcmd_phy; int * ctlcfg_ptr; } ;
struct TYPE_3__ {scalar_t__ ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bus_dma_segment_t *VAR_1,
    int VAR_2, int VAR_3)
{
 struct hpt_iop_hba *VAR_4 = (struct hpt_iop_hba *)VAR_0;
 VAR_4->ctlcfgcmd_phy = ((u_int64_t)VAR_1->ds_addr + 0x1F)
    & ~(u_int64_t)0x1F;
 VAR_4->ctlcfg_ptr = (u_int8_t *)(((unsigned long)VAR_4->ctlcfg_ptr + 0x1F)
    & ~0x1F);
}
