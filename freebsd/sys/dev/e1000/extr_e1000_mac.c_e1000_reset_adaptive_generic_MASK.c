
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_mac_info {int in_ifs_mode; int ifs_ratio; int ifs_step_size; int ifs_max_val; int ifs_min_val; scalar_t__ current_ifs_val; int adaptive_ifs; } ;
struct e1000_hw {struct e1000_mac_info mac; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (struct e1000_hw*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_3(struct e1000_hw *VAR_6)
{
 struct e1000_mac_info *VAR_7 = &VAR_6->mac;

 FUNC_0("e1000_reset_adaptive_generic");

 if (!VAR_7->adaptive_ifs) {
  FUNC_1("Not in Adaptive IFS mode!\n");
  return;
 }

 VAR_7->current_ifs_val = 0;
 VAR_7->ifs_min_val = VAR_3;
 VAR_7->ifs_max_val = VAR_2;
 VAR_7->ifs_step_size = VAR_5;
 VAR_7->ifs_ratio = VAR_4;

 VAR_7->in_ifs_mode = VAR_1;
 FUNC_2(VAR_6, VAR_0, 0);
}
