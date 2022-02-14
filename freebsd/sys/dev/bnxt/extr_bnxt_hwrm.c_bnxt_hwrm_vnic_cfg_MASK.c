
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hwrm_vnic_cfg_input {void* mru; void* lb_rule; void* cos_rule; void* rss_rule; void* dflt_ring_grp; void* vnic_id; int enables; int flags; int member_0; } ;
struct bnxt_vnic_info {int flags; int mru; int lb_rule; int cos_rule; int rss_id; int def_ring_grp; int id; } ;
struct bnxt_softc {int dummy; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_vnic_cfg_input*,int ) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_vnic_cfg_input*,int) ;

int
FUNC_4(struct bnxt_softc *VAR_10, struct bnxt_vnic_info *VAR_11)
{
 struct hwrm_vnic_cfg_input VAR_12 = {0};

 FUNC_0(VAR_10, &VAR_12, VAR_3);

 if (VAR_11->flags & VAR_1)
  VAR_12.flags |= FUNC_2(VAR_8);
 if (VAR_11->flags & VAR_0)
  VAR_12.flags |= FUNC_2(VAR_7);
 if (VAR_11->flags & VAR_2)
  VAR_12.flags |= FUNC_2(VAR_9);
 VAR_12.enables = FUNC_2(VAR_4 |
     VAR_6 |
     VAR_5);
 VAR_12.vnic_id = FUNC_1(VAR_11->id);
 VAR_12.dflt_ring_grp = FUNC_1(VAR_11->def_ring_grp);
 VAR_12.rss_rule = FUNC_1(VAR_11->rss_id);
 VAR_12.cos_rule = FUNC_1(VAR_11->cos_rule);
 VAR_12.lb_rule = FUNC_1(VAR_11->lb_rule);
 VAR_12.mru = FUNC_1(VAR_11->mru);

 return FUNC_3(VAR_10, &VAR_12, sizeof(VAR_12));
}
