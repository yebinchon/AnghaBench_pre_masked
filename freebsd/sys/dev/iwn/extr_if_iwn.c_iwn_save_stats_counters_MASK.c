
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int fa; int bad_plcp; } ;
struct TYPE_6__ {int bad_plcp; } ;
struct TYPE_5__ {int fa; int bad_plcp; } ;
struct TYPE_8__ {TYPE_3__ ofdm; TYPE_2__ ht; TYPE_1__ cck; } ;
struct iwn_stats {TYPE_4__ rx; } ;
struct iwn_calib_state {void* fa_ofdm; void* bad_plcp_ofdm; void* bad_plcp_ht; void* fa_cck; void* bad_plcp_cck; } ;
struct iwn_softc {int last_calib_ticks; struct iwn_calib_state calib; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(struct iwn_softc *VAR_1, const struct iwn_stats *VAR_2)
{
 struct iwn_calib_state *VAR_3 = &VAR_1->calib;


 VAR_3->bad_plcp_cck = FUNC_0(VAR_2->rx.cck.bad_plcp);
 VAR_3->fa_cck = FUNC_0(VAR_2->rx.cck.fa);
 VAR_3->bad_plcp_ht = FUNC_0(VAR_2->rx.ht.bad_plcp);
 VAR_3->bad_plcp_ofdm = FUNC_0(VAR_2->rx.ofdm.bad_plcp);
 VAR_3->fa_ofdm = FUNC_0(VAR_2->rx.ofdm.fa);


 VAR_1->last_calib_ticks = VAR_0;
}
