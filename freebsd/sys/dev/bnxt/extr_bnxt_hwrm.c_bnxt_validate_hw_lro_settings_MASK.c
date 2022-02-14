
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* min_agg_len; void* max_aggs; void* max_agg_segs; void* is_mode_gro; void* enable; } ;
struct bnxt_softc {TYPE_1__ hw_lro; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*,int) ;

void
FUNC_1(struct bnxt_softc *VAR_3)
{
 VAR_3->hw_lro.enable = FUNC_0(VAR_3->hw_lro.enable, 1);

        VAR_3->hw_lro.is_mode_gro = FUNC_0(VAR_3->hw_lro.is_mode_gro, 1);

 VAR_3->hw_lro.max_agg_segs = FUNC_0(VAR_3->hw_lro.max_agg_segs,
  VAR_2);

 VAR_3->hw_lro.max_aggs = FUNC_0(VAR_3->hw_lro.max_aggs,
  VAR_1);

 VAR_3->hw_lro.min_agg_len = FUNC_0(VAR_3->hw_lro.min_agg_len, VAR_0);
}
