
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char u_int8_t ;
typedef int u_int64_t ;
typedef int u_int32_t ;
struct mvfrey_outlist_entry {int dummy; } ;
struct mvfrey_inlist_entry {int dummy; } ;
struct TYPE_5__ {int list_count; int inlist_phy; int outlist_phy; int* outlist_cptr; int outlist_cptr_phy; struct mvfrey_outlist_entry* outlist; struct mvfrey_inlist_entry* inlist; } ;
struct TYPE_6__ {TYPE_1__ mvfrey; } ;
struct hpt_iop_hba {char* ctlcfg_ptr; int ctlcfgcmd_phy; TYPE_2__ u; } ;
struct TYPE_7__ {scalar_t__ ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;



__attribute__((used)) static void FUNC_0(void *VAR_0, bus_dma_segment_t *VAR_1,
    int VAR_2, int VAR_3)
{
 struct hpt_iop_hba *VAR_4 = (struct hpt_iop_hba *)VAR_0;
 char *VAR_5;
 u_int64_t VAR_6;
 u_int32_t VAR_7 = VAR_4->u.mvfrey.list_count;

 VAR_6 = ((u_int64_t)VAR_1->ds_addr + 0x1F)
    & ~(u_int64_t)0x1F;
 VAR_5 = (u_int8_t *)(((unsigned long)VAR_4->ctlcfg_ptr + 0x1F)
    & ~0x1F);

 VAR_4->ctlcfgcmd_phy = VAR_6;
 VAR_4->ctlcfg_ptr = VAR_5;

 VAR_5 += 0x800;
 VAR_6 += 0x800;

 VAR_4->u.mvfrey.inlist = (struct mvfrey_inlist_entry *)VAR_5;
 VAR_4->u.mvfrey.inlist_phy = VAR_6;

 VAR_5 += VAR_7 * sizeof(struct mvfrey_inlist_entry);
 VAR_6 += VAR_7 * sizeof(struct mvfrey_inlist_entry);

 VAR_4->u.mvfrey.outlist = (struct mvfrey_outlist_entry *)VAR_5;
 VAR_4->u.mvfrey.outlist_phy = VAR_6;

 VAR_5 += VAR_7 * sizeof(struct mvfrey_outlist_entry);
 VAR_6 += VAR_7 * sizeof(struct mvfrey_outlist_entry);

 VAR_4->u.mvfrey.outlist_cptr = (u_int32_t *)VAR_5;
 VAR_4->u.mvfrey.outlist_cptr_phy = VAR_6;
}
