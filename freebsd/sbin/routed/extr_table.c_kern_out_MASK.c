
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct khash {int k_state; scalar_t__ k_gate; scalar_t__ k_metric; } ;
struct ag_info {scalar_t__ ag_metric; int ag_state; scalar_t__ ag_gate; int ag_mask; int ag_dst_h; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 struct khash* FUNC_1 (int ,int ) ;
 struct khash* FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct ag_info *VAR_11)
{
 struct khash *VAR_12;






 if (VAR_11->ag_metric == VAR_1) {
  VAR_12 = FUNC_2(FUNC_0(VAR_11->ag_dst_h), VAR_11->ag_mask, 0);
  if (VAR_12 == ((void*)0))
   return;
 } else {
  VAR_12 = FUNC_1(FUNC_0(VAR_11->ag_dst_h), VAR_11->ag_mask);
 }

 if (VAR_12->k_state & VAR_9) {

  VAR_12->k_state = VAR_2;
  if (VAR_11->ag_state & VAR_0)
   VAR_12->k_state |= VAR_8;
  VAR_12->k_gate = VAR_11->ag_gate;
  VAR_12->k_metric = VAR_11->ag_metric;
  return;
 }

 if (VAR_12->k_state & VAR_10)
  return;


 if (VAR_12->k_gate != VAR_11->ag_gate
     || VAR_12->k_metric != VAR_11->ag_metric) {

  if (VAR_12->k_metric == VAR_1)
   VAR_12->k_state |= VAR_6;
  VAR_12->k_gate = VAR_11->ag_gate;
  VAR_12->k_metric = VAR_11->ag_metric;
  VAR_12->k_state |= VAR_3;
 }






 if ((VAR_12->k_state & (VAR_7 | VAR_5)) != 0) {
  VAR_12->k_state &= ~VAR_7;
  VAR_12->k_state |= (VAR_2 | VAR_6);
 }

 if ((VAR_12->k_state & VAR_8)
     && !(VAR_11->ag_state & VAR_0)) {
  VAR_12->k_state &= ~VAR_8;
  VAR_12->k_state |= (VAR_2 | VAR_6);
 } else if (!(VAR_12->k_state & VAR_8)
     && (VAR_11->ag_state & VAR_0)) {
  VAR_12->k_state |= VAR_8;
  VAR_12->k_state |= (VAR_2 | VAR_6);
 }





 if (VAR_12->k_metric == VAR_1
     && (VAR_12->k_state & VAR_6))
  VAR_12->k_state |= VAR_4;
 else
  VAR_12->k_state &= ~VAR_4;

}
