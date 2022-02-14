
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
typedef int u16 ;
typedef int tmp ;
struct i40e_link_status {int phy_type; int link_speed; int an_info; int fec_info; int loopback; int pacing; void* lse_enable; void* crc_enable; int max_frame_size; int ext_info; int link_info; } ;
struct TYPE_10__ {int phy_types; void* get_link_info; int media_type; struct i40e_link_status link_info_old; struct i40e_link_status link_info; } ;
struct TYPE_9__ {int fw_maj_ver; int fw_min_ver; scalar_t__ api_maj_ver; int api_min_ver; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct TYPE_7__ {int current_mode; } ;
struct i40e_hw {TYPE_5__ phy; TYPE_4__ aq; TYPE_3__ mac; TYPE_2__ fc; } ;
struct i40e_asq_cmd_details {int dummy; } ;
struct i40e_aqc_get_link_status {int command_flags; int an_info; int config; int loopback; scalar_t__ link_type_ext; struct i40e_link_status* link_type; int max_frame_size; int ext_info; int link_info; scalar_t__ link_speed; scalar_t__ phy_type; } ;
struct TYPE_6__ {int raw; } ;
struct i40e_aq_desc {TYPE_1__ params; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_aq_phy_type { ____Placeholder_i40e_aq_phy_type } i40e_aq_phy_type ;
typedef enum i40e_aq_link_speed { ____Placeholder_i40e_aq_link_speed } i40e_aq_link_speed ;
typedef struct i40e_link_status __le32 ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_link_status) ;
 void* VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (struct i40e_hw*,struct i40e_aq_desc*,int *,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_4 (struct i40e_aq_desc*,int ) ;
 int FUNC_5 (struct i40e_hw*) ;
 int FUNC_6 (struct i40e_link_status*,struct i40e_link_status*,int,int ) ;

enum i40e_status_code FUNC_7(struct i40e_hw *VAR_22,
    bool VAR_23, struct i40e_link_status *VAR_24,
    struct i40e_asq_cmd_details *VAR_25)
{
 struct i40e_aq_desc VAR_26;
 struct i40e_aqc_get_link_status *VAR_27 =
  (struct i40e_aqc_get_link_status *)&VAR_26.params.raw;
 struct i40e_link_status *VAR_28 = &VAR_22->phy.link_info;
 enum i40e_status_code VAR_29;
 bool VAR_30, VAR_31;
 u16 VAR_32;

 FUNC_4(&VAR_26, VAR_21);

 if (VAR_23)
  VAR_32 = VAR_9;
 else
  VAR_32 = VAR_8;
 VAR_27->command_flags = FUNC_0(VAR_32);

 VAR_29 = FUNC_3(VAR_22, &VAR_26, ((void*)0), 0, VAR_25);

 if (VAR_29 != VAR_19)
  goto aq_get_link_info_exit;


 FUNC_6(&VAR_22->phy.link_info_old, VAR_28,
      sizeof(*VAR_28), VAR_17);


 VAR_28->phy_type = (enum i40e_aq_phy_type)VAR_27->phy_type;
 VAR_22->phy.media_type = FUNC_5(VAR_22);
 VAR_28->link_speed = (enum i40e_aq_link_speed)VAR_27->link_speed;
 VAR_28->link_info = VAR_27->link_info;
 VAR_28->an_info = VAR_27->an_info;
 VAR_28->fec_info = VAR_27->config & (VAR_2 |
       VAR_3);
 VAR_28->ext_info = VAR_27->ext_info;
 VAR_28->loopback = VAR_27->loopback & VAR_7;
 VAR_28->max_frame_size = FUNC_1(VAR_27->max_frame_size);
 VAR_28->pacing = VAR_27->config & VAR_4;


 VAR_30 = !!(VAR_27->an_info & VAR_6);
 VAR_31 = !!(VAR_27->an_info & VAR_5);
 if (VAR_30 & VAR_31)
  VAR_22->fc.current_mode = VAR_11;
 else if (VAR_30)
  VAR_22->fc.current_mode = VAR_14;
 else if (VAR_31)
  VAR_22->fc.current_mode = VAR_13;
 else
  VAR_22->fc.current_mode = VAR_12;

 if (VAR_27->config & VAR_1)
  VAR_28->crc_enable = VAR_20;
 else
  VAR_28->crc_enable = VAR_0;

 if (VAR_27->command_flags & FUNC_0(VAR_10))
  VAR_28->lse_enable = VAR_20;
 else
  VAR_28->lse_enable = VAR_0;

 if ((VAR_22->mac.type == VAR_16) &&
     (VAR_22->aq.fw_maj_ver < 4 || (VAR_22->aq.fw_maj_ver == 4 &&
      VAR_22->aq.fw_min_ver < 40)) && VAR_28->phy_type == 0xE)
  VAR_28->phy_type = VAR_18;

 if (VAR_22->aq.api_maj_ver == VAR_15 &&
     VAR_22->aq.api_min_ver >= 7) {
  __le32 VAR_33;

  FUNC_6(&VAR_33, VAR_27->link_type, sizeof(VAR_33),
       VAR_17);
  VAR_22->phy.phy_types = FUNC_2(VAR_33);
  VAR_22->phy.phy_types |= ((u64)VAR_27->link_type_ext << 32);
 }


 if (VAR_24)
  FUNC_6(VAR_24, VAR_28, sizeof(*VAR_28),
       VAR_17);


 VAR_22->phy.get_link_info = VAR_0;

aq_get_link_info_exit:
 return VAR_29;
}
