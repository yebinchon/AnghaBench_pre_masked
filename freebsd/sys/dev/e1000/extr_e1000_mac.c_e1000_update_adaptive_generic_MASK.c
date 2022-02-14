
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_mac_info {int collision_delta; int ifs_ratio; int tx_packet_delta; scalar_t__ current_ifs_val; scalar_t__ ifs_max_val; scalar_t__ ifs_min_val; scalar_t__ ifs_step_size; scalar_t__ in_ifs_mode; int adaptive_ifs; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct e1000_hw*,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_3(struct e1000_hw *VAR_4)
{
 struct e1000_mac_info *VAR_5 = &VAR_4->mac;

 FUNC_0("e1000_update_adaptive_generic");

 if (!VAR_5->adaptive_ifs) {
  FUNC_1("Not in Adaptive IFS mode!\n");
  return;
 }

 if ((VAR_5->collision_delta * VAR_5->ifs_ratio) > VAR_5->tx_packet_delta) {
  if (VAR_5->tx_packet_delta > VAR_2) {
   VAR_5->in_ifs_mode = VAR_3;
   if (VAR_5->current_ifs_val < VAR_5->ifs_max_val) {
    if (!VAR_5->current_ifs_val)
     VAR_5->current_ifs_val = VAR_5->ifs_min_val;
    else
     VAR_5->current_ifs_val +=
      VAR_5->ifs_step_size;
    FUNC_2(VAR_4, VAR_0,
      VAR_5->current_ifs_val);
   }
  }
 } else {
  if (VAR_5->in_ifs_mode &&
      (VAR_5->tx_packet_delta <= VAR_2)) {
   VAR_5->current_ifs_val = 0;
   VAR_5->in_ifs_mode = VAR_1;
   FUNC_2(VAR_4, VAR_0, 0);
  }
 }
}
