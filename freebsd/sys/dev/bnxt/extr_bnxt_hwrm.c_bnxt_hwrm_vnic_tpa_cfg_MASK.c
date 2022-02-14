
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct hwrm_vnic_tpa_cfg_input {void* vnic_id; void* min_agg_len; void* max_aggs; void* max_agg_segs; void* enables; void* flags; int member_0; } ;
struct TYPE_4__ {scalar_t__ id; } ;
struct TYPE_3__ {scalar_t__ max_agg_segs; scalar_t__ max_aggs; int min_agg_len; scalar_t__ is_mode_gro; scalar_t__ enable; } ;
struct bnxt_softc {TYPE_2__ vnic_info; TYPE_1__ hw_lro; } ;
typedef int req ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct bnxt_softc*,struct hwrm_vnic_tpa_cfg_input*,int ) ;
 void* FUNC_1 (scalar_t__) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_vnic_tpa_cfg_input*,int) ;

int
FUNC_4(struct bnxt_softc *VAR_11)
{
 struct hwrm_vnic_tpa_cfg_input VAR_12 = {0};
 uint32_t VAR_13;

 if (VAR_11->vnic_info.id == (uint16_t) VAR_0) {
  return 0;
 }

 FUNC_0(VAR_11, &VAR_12, VAR_1);

 if (VAR_11->hw_lro.enable) {
  VAR_13 = VAR_10 |
   VAR_7 |
   VAR_5 |
   VAR_6;

         if (VAR_11->hw_lro.is_mode_gro)
   VAR_13 |= VAR_8;
  else
   VAR_13 |= VAR_9;

  VAR_12.flags = FUNC_2(VAR_13);

  VAR_12.enables = FUNC_2(VAR_3 |
    VAR_2 |
    VAR_4);

  VAR_12.max_agg_segs = FUNC_1(VAR_11->hw_lro.max_agg_segs);
  VAR_12.max_aggs = FUNC_1(VAR_11->hw_lro.max_aggs);
  VAR_12.min_agg_len = FUNC_2(VAR_11->hw_lro.min_agg_len);
 }

 VAR_12.vnic_id = FUNC_1(VAR_11->vnic_info.id);

 return FUNC_3(VAR_11, &VAR_12, sizeof(VAR_12));
}
