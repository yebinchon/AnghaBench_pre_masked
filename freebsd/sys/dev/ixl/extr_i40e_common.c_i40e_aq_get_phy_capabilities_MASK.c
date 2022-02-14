
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct TYPE_10__ {int phy_types; } ;
struct TYPE_9__ {scalar_t__ asq_last_status; scalar_t__ api_maj_ver; scalar_t__ api_min_ver; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct i40e_hw {TYPE_5__ phy; TYPE_4__ aq; TYPE_3__ mac; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aq_get_phy_abilities_resp {scalar_t__ phy_type_ext; int phy_type; } ;
struct TYPE_6__ {int param0; } ;
struct TYPE_7__ {TYPE_1__ external; } ;
struct i40e_aq_desc {TYPE_2__ params; int flags; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;
 int VAR_16 ;
 int FUNC_3 (struct i40e_hw*,int ,int *,int *) ;
 int VAR_17 ;
 int FUNC_4 (struct i40e_hw*,struct i40e_aq_desc*,struct i40e_aq_get_phy_abilities_resp*,scalar_t__,struct i40e_asq_cmd_details*) ;
 int FUNC_5 (struct i40e_aq_desc*,int ) ;
 int FUNC_6 (int) ;

enum i40e_status_code FUNC_7(struct i40e_hw *VAR_18,
   bool VAR_19, bool VAR_20,
   struct i40e_aq_get_phy_abilities_resp *VAR_21,
   struct i40e_asq_cmd_details *VAR_22)
{
 struct i40e_aq_desc VAR_23;
 enum i40e_status_code VAR_24;
 u16 VAR_25 = VAR_13, VAR_26 = 0;
 u16 VAR_27 = sizeof(struct i40e_aq_get_phy_abilities_resp);

 if (!VAR_21)
  return VAR_8;

 do {
  FUNC_5(&VAR_23,
            VAR_17);

  VAR_23.flags |= FUNC_0((u16)VAR_0);
  if (VAR_27 > VAR_2)
   VAR_23.flags |= FUNC_0((u16)VAR_1);

  if (VAR_19)
   VAR_23.params.external.param0 |=
   FUNC_1(VAR_4);

  if (VAR_20)
   VAR_23.params.external.param0 |=
   FUNC_1(VAR_3);

  VAR_24 = FUNC_4(VAR_18, &VAR_23, VAR_21,
            VAR_27, VAR_22);

  if (VAR_24 != VAR_15)
   break;

  if (VAR_18->aq.asq_last_status == VAR_6) {
   VAR_24 = VAR_10;
   break;
  } else if (VAR_18->aq.asq_last_status == VAR_5) {
   FUNC_6(1);
   VAR_26++;
   VAR_24 = VAR_9;
  }
 } while ((VAR_18->aq.asq_last_status != VAR_7) &&
   (VAR_26 < VAR_25));

 if (VAR_24 != VAR_15)
  return VAR_24;

 if (VAR_20) {
  if (VAR_18->mac.type == VAR_12 &&
      VAR_18->aq.api_maj_ver == VAR_11 &&
      VAR_18->aq.api_min_ver >= VAR_14) {
   VAR_24 = FUNC_3(VAR_18, VAR_16, ((void*)0), ((void*)0));
  } else {
   VAR_18->phy.phy_types = FUNC_2(VAR_21->phy_type);
   VAR_18->phy.phy_types |=
     ((u64)VAR_21->phy_type_ext << 32);
  }
 }

 return VAR_24;
}
