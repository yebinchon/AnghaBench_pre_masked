
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {struct ifnet* ifp; } ;
struct TYPE_5__ {int req_fec_info; int fec_info; int an_info; int link_speed; } ;
struct TYPE_6__ {TYPE_2__ link_info; } ;
struct i40e_hw {TYPE_3__ phy; } ;
struct ixl_pf {TYPE_1__ vsi; struct i40e_hw hw; } ;
struct ifnet {int if_xname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int * VAR_8 ;
 char** VAR_9 ;
 int FUNC_1 (int ,char*,int ,int ,char*,char*,char*,int ) ;

void
FUNC_2(struct ixl_pf *VAR_10)
{
 struct i40e_hw *VAR_11 = &VAR_10->hw;
 struct ifnet *VAR_12 = VAR_10->vsi.ifp;
 char *VAR_13, *VAR_14;
 u8 VAR_15;

 VAR_15 = VAR_11->phy.link_info.req_fec_info;

 if (VAR_15 & VAR_6)
  VAR_13 = VAR_9[0];
 else if (VAR_15 & VAR_5)
  VAR_13 = VAR_9[1];
 else
  VAR_13 = VAR_9[2];

 if (VAR_11->phy.link_info.fec_info & VAR_2)
  VAR_14 = VAR_9[0];
 else if (VAR_11->phy.link_info.fec_info & VAR_1)
  VAR_14 = VAR_9[1];
 else
  VAR_14 = VAR_9[2];

 FUNC_1(VAR_7, "%s: Link is up, %s Full Duplex, Requested FEC: %s, Negotiated FEC: %s, Autoneg: %s, Flow Control: %s\n",
     VAR_12->if_xname,
     FUNC_0(VAR_11->phy.link_info.link_speed),
     VAR_13, VAR_14,
     (VAR_11->phy.link_info.an_info & VAR_0) ? "True" : "False",
     (VAR_11->phy.link_info.an_info & VAR_4 &&
         VAR_11->phy.link_info.an_info & VAR_3) ?
  VAR_8[3] : (VAR_11->phy.link_info.an_info & VAR_4) ?
  VAR_8[2] : (VAR_11->phy.link_info.an_info & VAR_3) ?
  VAR_8[1] : VAR_8[0]);
}
