
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ixl_vsi {int media; TYPE_1__* shared; int ctx; } ;
struct TYPE_6__ {int phy_types; } ;
struct TYPE_5__ {int asq_last_status; } ;
struct i40e_hw {TYPE_3__ phy; TYPE_2__ aq; } ;
struct ixl_pf {int supported_speeds; struct i40e_hw hw; struct ixl_vsi vsi; } ;
struct ifnet {scalar_t__ if_mtu; } ;
struct i40e_aq_get_phy_abilities_resp {int link_speed; } ;
typedef int if_ctx_t ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int device_t ;
struct TYPE_4__ {scalar_t__ isc_max_frame_size; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,char*) ;
 int VAR_7 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct i40e_hw*,int ,int ,struct i40e_aq_get_phy_abilities_resp*,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (struct ifnet*,int ) ;
 struct ifnet* FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ,int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct ixl_vsi*,int ) ;
 int FUNC_10 (int ) ;

int
FUNC_11(device_t VAR_8, struct ixl_pf *VAR_9)
{
 struct ixl_vsi *VAR_10 = &VAR_9->vsi;
 if_ctx_t VAR_11 = VAR_10->ctx;
 struct i40e_hw *VAR_12 = &VAR_9->hw;
 struct ifnet *VAR_13 = FUNC_6(VAR_11);
 struct i40e_aq_get_phy_abilities_resp VAR_14;
 enum i40e_status_code VAR_15 = 0;

 FUNC_0(VAR_8, "begin");

 VAR_10->shared->isc_max_frame_size =
     VAR_13->if_mtu + VAR_1 + VAR_0
     + VAR_2;

 VAR_15 = FUNC_2(VAR_12,
     VAR_3, VAR_7, &VAR_14, ((void*)0));

 if (VAR_15 == VAR_4) {

  FUNC_3(200);
  VAR_15 = FUNC_2(VAR_12, VAR_3,
      VAR_7, &VAR_14, ((void*)0));
 }
 if (VAR_15) {
  if (VAR_15 == VAR_4)
   FUNC_1(VAR_8, "Unknown PHY type detected!\n");
  else
   FUNC_1(VAR_8,
       "Error getting supported media types, err %d,"
       " AQ error %d\n", VAR_15, VAR_12->aq.asq_last_status);
 } else {
  VAR_9->supported_speeds = VAR_14.link_speed;



  FUNC_4(VAR_13, FUNC_10(VAR_9->supported_speeds));


  FUNC_9(VAR_10, VAR_12->phy.phy_types);
 }


 FUNC_7(VAR_10->media, VAR_6 | VAR_5, 0, ((void*)0));
 FUNC_8(VAR_10->media, VAR_6 | VAR_5);

 return (0);
}
