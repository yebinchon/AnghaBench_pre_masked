
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vlr ;
typedef int u_long ;
struct vlanreq {char* vlr_parent; int vlr_tag; } ;
struct ifvlantrunk {int dummy; } ;
struct ifvlan {int ifv_pcp; int ifv_capenable; int ifv_vid; scalar_t__ ifv_mtufudge; scalar_t__ ifv_mintu; } ;
struct TYPE_4__ {int * sa_data; } ;
struct ifreq {int ifr_vlan_pcp; int ifr_reqcap; scalar_t__ ifr_mtu; TYPE_2__ ifr_addr; } ;
struct ifnet {int (* if_ioctl ) (struct ifnet*,int const,scalar_t__) ;int if_pcp; int if_home_vnet; int if_vnet; int if_xname; scalar_t__ if_mtu; int if_addrlen; int if_flags; struct ifvlan* if_softc; } ;
struct ifmediareq {int ifm_count; int ifm_ulist; struct vlanreq ifm_current; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
struct epoch_tracker {int dummy; } ;
typedef scalar_t__ caddr_t ;
struct TYPE_3__ {int sa_family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ifnet*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct epoch_tracker) ;
 int FUNC_3 (struct epoch_tracker) ;
 struct ifnet* FUNC_4 (struct ifvlan*) ;
 int VAR_6 ;
 struct ifvlantrunk* FUNC_5 (struct ifvlan*) ;
 int FUNC_6 (struct ifvlantrunk*) ;
 int FUNC_7 (struct ifvlantrunk*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct ifnet*,struct ifaddr*) ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (struct vlanreq*,int) ;
 int FUNC_15 (int ,struct vlanreq*,int) ;
 int FUNC_16 (struct vlanreq*,int ,int) ;
 int VAR_7 ;
 int FUNC_17 (struct ifnet*) ;
 int FUNC_18 (struct ifnet*) ;
 int VAR_8 ;
 int FUNC_19 (struct ifreq*) ;
 struct ifnet* FUNC_20 (char*) ;
 int FUNC_21 (int ,int ) ;
 int FUNC_22 (char*,int ,int) ;
 int FUNC_23 (struct ifnet*,int const,scalar_t__) ;
 int FUNC_24 (struct ifvlan*) ;
 int FUNC_25 (struct ifvlan*,struct ifnet*,int ) ;
 int FUNC_26 (struct ifnet*,int) ;
 int FUNC_27 (struct ifnet*) ;
 int FUNC_28 (struct ifvlan*) ;
 int FUNC_29 (struct ifnet*) ;

__attribute__((used)) static int
FUNC_30(struct ifnet *VAR_9, u_long VAR_10, caddr_t VAR_11)
{
 struct ifnet *VAR_12;
 struct ifreq *VAR_13;
 struct ifaddr *VAR_14;
 struct ifvlan *VAR_15;
 struct ifvlantrunk *VAR_16;
 struct vlanreq VAR_17;
 int VAR_18 = 0;

 VAR_13 = (struct ifreq *)VAR_11;
 VAR_14 = (struct ifaddr *) VAR_11;
 VAR_15 = VAR_9->if_softc;

 switch (VAR_10) {
 case 133:
  VAR_9->if_flags |= VAR_4;




  break;
 case 137:
  FUNC_13(FUNC_1(VAR_9), &VAR_13->ifr_addr.sa_data[0],
      VAR_9->if_addrlen);
  break;
 case 136:
  FUNC_8();
  if (FUNC_5(VAR_15) != ((void*)0)) {
   VAR_12 = FUNC_4(VAR_15);
   FUNC_17(VAR_12);
   VAR_18 = (*VAR_12->if_ioctl)(VAR_12, 136, VAR_11);
   FUNC_18(VAR_12);

   if (VAR_18 == 0) {
    struct ifmediareq *VAR_19;

    VAR_19 = (struct ifmediareq *)VAR_11;
    if (VAR_19->ifm_count >= 1 && VAR_19->ifm_ulist) {
     VAR_19->ifm_count = 1;
     VAR_18 = FUNC_16(&VAR_19->ifm_current,
      VAR_19->ifm_ulist,
      sizeof(int));
    }
   }
  } else {
   VAR_18 = VAR_1;
  }
  FUNC_9();
  break;

 case 130:
  VAR_18 = VAR_1;
  break;

 case 129:



  FUNC_8();
  VAR_16 = FUNC_5(VAR_15);
  if (VAR_16 != ((void*)0)) {
   FUNC_6(VAR_16);
   if (VAR_13->ifr_mtu >
        (FUNC_4(VAR_15)->if_mtu - VAR_15->ifv_mtufudge) ||
       VAR_13->ifr_mtu <
        (VAR_15->ifv_mintu - VAR_15->ifv_mtufudge))
    VAR_18 = VAR_1;
   else
    VAR_9->if_mtu = VAR_13->ifr_mtu;
   FUNC_7(VAR_16);
  } else
   VAR_18 = VAR_1;
  FUNC_9();
  break;

 case 134:
  VAR_18 = FUNC_15(FUNC_19(VAR_13), &VAR_17, sizeof(VAR_17));
  if (VAR_18)
   break;
  if (VAR_17.vlr_parent[0] == '\0') {
   FUNC_29(VAR_9);
   break;
  }
  VAR_12 = FUNC_20(VAR_17.vlr_parent);
  if (VAR_12 == ((void*)0)) {
   VAR_18 = VAR_2;
   break;
  }
  VAR_18 = FUNC_25(VAR_15, VAR_12, VAR_17.vlr_tag);
  FUNC_18(VAR_12);
  break;

 case 138:






  FUNC_14(&VAR_17, sizeof(VAR_17));
  FUNC_8();
  if (FUNC_5(VAR_15) != ((void*)0)) {
   FUNC_22(VAR_17.vlr_parent, FUNC_4(VAR_15)->if_xname,
       sizeof(VAR_17.vlr_parent));
   VAR_17.vlr_tag = VAR_15->ifv_vid;
  }
  FUNC_9();
  VAR_18 = FUNC_16(&VAR_17, FUNC_19(VAR_13), sizeof(VAR_17));
  break;

 case 131:




  FUNC_10();
  if (FUNC_5(VAR_15) != ((void*)0))
   VAR_18 = FUNC_26(VAR_9, 1);
  FUNC_11();
  break;

 case 140:
 case 139:







  FUNC_10();
  VAR_16 = FUNC_5(VAR_15);
  if (VAR_16 != ((void*)0))
   VAR_18 = FUNC_27(VAR_9);
  FUNC_11();

  break;
 case 135:






  VAR_13->ifr_vlan_pcp = VAR_15->ifv_pcp;
  break;

 case 128:






  VAR_18 = FUNC_21(VAR_7, VAR_6);
  if (VAR_18)
   break;
  if (VAR_13->ifr_vlan_pcp > 7) {
   VAR_18 = VAR_1;
   break;
  }
  VAR_15->ifv_pcp = VAR_13->ifr_vlan_pcp;
  VAR_9->if_pcp = VAR_15->ifv_pcp;
  FUNC_28(VAR_15);

  FUNC_0(VAR_8, VAR_9, VAR_5);
  break;

 case 132:
  FUNC_8();
  VAR_15->ifv_capenable = VAR_13->ifr_reqcap;
  VAR_16 = FUNC_5(VAR_15);
  if (VAR_16 != ((void*)0)) {
   struct epoch_tracker VAR_20;

   FUNC_2(VAR_20);
   FUNC_24(VAR_15);
   FUNC_3(VAR_20);
  }
  FUNC_9();
  break;

 default:
  VAR_18 = VAR_1;
  break;
 }

 return (VAR_18);
}
