
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct onoe_node {scalar_t__ on_interval; scalar_t__ on_ticks; int on_tx_retr; int on_tx_err; int on_tx_ok; } ;
struct ath_tx_status {scalar_t__ ts_status; scalar_t__ ts_longretry; scalar_t__ ts_shortretry; } ;
struct ath_softc {int dummy; } ;
struct ath_rc_series {int dummy; } ;
struct ath_node {int an_node; } ;


 struct onoe_node* FUNC_0 (struct ath_node*) ;
 int FUNC_1 (struct ath_softc*,int *) ;
 scalar_t__ VAR_0 ;

void
FUNC_2(struct ath_softc *VAR_1, struct ath_node *VAR_2,
 const struct ath_rc_series *VAR_3, const struct ath_tx_status *VAR_4,
 int VAR_5, int VAR_6, int VAR_7)
{
 struct onoe_node *VAR_8 = FUNC_0(VAR_2);

 if (VAR_4->ts_status == 0)
  VAR_8->on_tx_ok++;
 else
  VAR_8->on_tx_err++;
 VAR_8->on_tx_retr += VAR_4->ts_shortretry
   + VAR_4->ts_longretry;
 if (VAR_8->on_interval != 0 && VAR_0 - VAR_8->on_ticks > VAR_8->on_interval) {
  FUNC_1(VAR_1, &VAR_2->an_node);
  VAR_8->on_ticks = VAR_0;
 }
}
