
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int ieee_fc; int phy_flags; } ;
struct elink_phy {scalar_t__ req_line_speed; scalar_t__ speed_cap_mask; scalar_t__ type; } ;
struct elink_params {int dummy; } ;
typedef scalar_t__ elink_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct elink_phy*,struct elink_params*,int *) ;
 scalar_t__ FUNC_1 (struct elink_params*,struct elink_phy*,int ) ;
 int FUNC_2 (struct elink_params*,struct elink_phy*) ;
 int FUNC_3 (struct elink_params*,struct elink_phy*) ;
 int FUNC_4 (struct elink_params*,struct elink_phy*) ;

__attribute__((used)) static elink_status_t FUNC_5(struct elink_phy *VAR_9,
     struct elink_params *VAR_10,
     struct elink_vars *VAR_11)
{
 elink_status_t VAR_12;
 VAR_11->phy_flags |= VAR_4;
 if ((VAR_9->req_line_speed &&
      ((VAR_9->req_line_speed == VAR_1) ||
       (VAR_9->req_line_speed == VAR_0))) ||
     (!VAR_9->req_line_speed &&
      (VAR_9->speed_cap_mask >=
       VAR_6) &&
      (VAR_9->speed_cap_mask <
       VAR_7)) ||
     (VAR_9->type == VAR_5))
  VAR_11->phy_flags |= VAR_3;
 else
  VAR_11->phy_flags &= ~VAR_3;

 FUNC_0(VAR_9, VAR_10, &VAR_11->ieee_fc);
 FUNC_2(VAR_10, VAR_9);
 if (VAR_9->type == VAR_8)
  FUNC_3(VAR_10, VAR_9);

 VAR_12 = FUNC_1(VAR_10, VAR_9, 0);

 if (VAR_12 != VAR_2)
  return VAR_12;

 FUNC_2(VAR_10, VAR_9);

 if (VAR_9->type == VAR_8) {
  FUNC_3(VAR_10, VAR_9);
  FUNC_4(VAR_10, VAR_9);
 }

 return VAR_12;
}
