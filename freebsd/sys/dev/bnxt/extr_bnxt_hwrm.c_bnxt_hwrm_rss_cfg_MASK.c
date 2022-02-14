
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct hwrm_vnic_rss_cfg_input {int rss_ctx_idx; void* hash_key_tbl_addr; void* ring_grp_tbl_addr; int hash_type; int member_0; } ;
struct TYPE_4__ {int idi_paddr; } ;
struct TYPE_3__ {int idi_paddr; } ;
struct bnxt_vnic_info {int rss_id; TYPE_2__ rss_hash_key_tbl; TYPE_1__ rss_grp_tbl; } ;
struct bnxt_softc {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_vnic_rss_cfg_input*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct bnxt_softc*,struct hwrm_vnic_rss_cfg_input*,int) ;

int
FUNC_5(struct bnxt_softc *VAR_1, struct bnxt_vnic_info *VAR_2,
    uint32_t VAR_3)
{
 struct hwrm_vnic_rss_cfg_input VAR_4 = {0};

 FUNC_0(VAR_1, &VAR_4, VAR_0);

 VAR_4.hash_type = FUNC_2(VAR_3);
 VAR_4.ring_grp_tbl_addr = FUNC_3(VAR_2->rss_grp_tbl.idi_paddr);
 VAR_4.hash_key_tbl_addr = FUNC_3(VAR_2->rss_hash_key_tbl.idi_paddr);
 VAR_4.rss_ctx_idx = FUNC_1(VAR_2->rss_id);

 return FUNC_4(VAR_1, &VAR_4, sizeof(VAR_4));
}
