
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int advertised_speeds; scalar_t__ autoneg; } ;
struct TYPE_3__ {scalar_t__ forced_tx; scalar_t__ forced_rx; scalar_t__ autoneg; } ;
struct qlnx_link_output {int link_up; int supported_caps; int advertised_caps; int partner_adv_speed; int link_partner_caps; scalar_t__ partner_adv_pause; scalar_t__ an_complete; int duplex; TYPE_2__ speed; scalar_t__ autoneg; TYPE_1__ pause; int media_type; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_link_state {int link_up; int supported_caps; int advertised_caps; int partner_adv_speed; int link_partner_caps; scalar_t__ partner_adv_pause; scalar_t__ an_complete; int duplex; TYPE_2__ speed; scalar_t__ autoneg; TYPE_1__ pause; int media_type; } ;
struct ecore_mcp_link_params {int link_up; int supported_caps; int advertised_caps; int partner_adv_speed; int link_partner_caps; scalar_t__ partner_adv_pause; scalar_t__ an_complete; int duplex; TYPE_2__ speed; scalar_t__ autoneg; TYPE_1__ pause; int media_type; } ;
struct ecore_hwfn {scalar_t__ p_dev; } ;
typedef int qlnx_host_t ;
typedef int link_state ;
typedef int link_params ;


 scalar_t__ VAR_0 ;
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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int *) ;
 struct ecore_ptt* FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_6 (struct ecore_hwfn*,struct qlnx_link_output*) ;
 int FUNC_7 (struct ecore_hwfn*,struct qlnx_link_output*) ;
 int FUNC_8 (struct ecore_hwfn*,int *) ;
 int FUNC_9 (struct qlnx_link_output*,int ,int) ;
 int FUNC_10 (struct qlnx_link_output*,int ,int) ;
 scalar_t__ FUNC_11 (int *) ;

void
FUNC_12(qlnx_host_t *VAR_27, struct ecore_hwfn *VAR_28,
 struct qlnx_link_output *VAR_29)
{
 struct ecore_mcp_link_params VAR_30;
 struct ecore_mcp_link_state VAR_31;
 uint8_t VAR_32;
 struct ecore_ptt *VAR_33 = ((void*)0);


 FUNC_10(VAR_29, 0, sizeof(*VAR_29));
 FUNC_10(&VAR_30, 0, sizeof(struct ecore_mcp_link_params));
 FUNC_10(&VAR_31, 0, sizeof(struct ecore_mcp_link_state));

 VAR_27 = (qlnx_host_t *)VAR_28->p_dev;



 if (FUNC_11(VAR_27) != 0) {

         VAR_33 = FUNC_4(VAR_28);

         if (VAR_33 == ((void*)0)) {
   FUNC_0(VAR_27, "ecore_ptt_acquire failed\n");
   return;
  }

  FUNC_3(VAR_28, VAR_33, &VAR_29->media_type);
  FUNC_5(VAR_28, VAR_33);

  FUNC_9(&VAR_30, FUNC_1(VAR_28),
   sizeof(VAR_30));
  FUNC_9(&VAR_31, FUNC_2(VAR_28),
   sizeof(VAR_31));
 } else {
  FUNC_3(VAR_28, ((void*)0), &VAR_29->media_type);
  FUNC_8(VAR_28, &VAR_32);
  FUNC_6(VAR_28, &VAR_30);
  FUNC_7(VAR_28, &VAR_31);
 }


 if (VAR_31.link_up) {
  VAR_29->link_up = 1;
  VAR_29->speed = VAR_31.speed;
 }

 VAR_29->supported_caps = VAR_24;

 if (VAR_30.speed.autoneg)
  VAR_29->supported_caps |= VAR_23;

 if (VAR_30.pause.autoneg ||
  (VAR_30.pause.forced_rx && VAR_30.pause.forced_tx))
  VAR_29->supported_caps |= VAR_22;

 if (VAR_30.pause.autoneg || VAR_30.pause.forced_rx ||
  VAR_30.pause.forced_tx)
  VAR_29->supported_caps |= VAR_25;

 if (VAR_30.speed.advertised_speeds &
  VAR_11)
  VAR_29->supported_caps |= VAR_18 |
                                           VAR_17;

 if (VAR_30.speed.advertised_speeds &
  VAR_10)
  VAR_29->supported_caps |= VAR_16;

 if (VAR_30.speed.advertised_speeds &
  VAR_12)
  VAR_29->supported_caps |= VAR_19;

 if (VAR_30.speed.advertised_speeds &
  VAR_9)
  VAR_29->supported_caps |= VAR_20;

 if (VAR_30.speed.advertised_speeds &
  VAR_13)
  VAR_29->supported_caps |= VAR_21;

 if (VAR_30.speed.advertised_speeds &
  VAR_14)
  VAR_29->supported_caps |= VAR_15;

 VAR_29->advertised_caps = VAR_29->supported_caps;

 VAR_29->autoneg = VAR_30.speed.autoneg;
 VAR_29->duplex = VAR_26;



 if (VAR_31.partner_adv_speed & VAR_5)
  VAR_29->link_partner_caps |= VAR_18;

 if (VAR_31.partner_adv_speed & VAR_4)
  VAR_29->link_partner_caps |= VAR_17;

 if (VAR_31.partner_adv_speed & VAR_3)
  VAR_29->link_partner_caps |= VAR_16;

 if (VAR_31.partner_adv_speed & VAR_6)
  VAR_29->link_partner_caps |= VAR_19;

 if (VAR_31.partner_adv_speed & VAR_7)
  VAR_29->link_partner_caps |= VAR_20;

 if (VAR_31.partner_adv_speed & VAR_8)
  VAR_29->link_partner_caps |= VAR_21;

 if (VAR_31.partner_adv_speed & VAR_2)
  VAR_29->link_partner_caps |= VAR_15;

 if (VAR_31.an_complete)
  VAR_29->link_partner_caps |= VAR_23;

 if (VAR_31.partner_adv_pause)
  VAR_29->link_partner_caps |= VAR_25;

 if ((VAR_31.partner_adv_pause ==
  VAR_0) ||
  (VAR_31.partner_adv_pause ==
   VAR_1))
  VAR_29->link_partner_caps |= VAR_22;

 return;
}
