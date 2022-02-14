
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct elink_vars {scalar_t__ flow_ctrl; int link_status; } ;
struct elink_phy {scalar_t__ req_flow_ctrl; scalar_t__ req_line_speed; } ;
struct elink_params {scalar_t__ req_fc_auto_adv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;

__attribute__((used)) static uint8_t FUNC_1(struct elink_phy *VAR_4,
       struct elink_params *VAR_5,
       struct elink_vars *VAR_6)
{
 uint8_t VAR_7 = 0;
 VAR_6->flow_ctrl = VAR_1;
 if (VAR_4->req_flow_ctrl != VAR_0) {

  if (VAR_4->req_line_speed == VAR_2)
   FUNC_0(VAR_4, VAR_5, VAR_6);

  VAR_6->flow_ctrl = VAR_4->req_flow_ctrl;
 } else if (VAR_4->req_line_speed != VAR_2)
  VAR_6->flow_ctrl = VAR_5->req_fc_auto_adv;
 else if (VAR_6->link_status & VAR_3) {
  VAR_7 = 1;
  FUNC_0(VAR_4, VAR_5, VAR_6);
 }
 return VAR_7;
}
