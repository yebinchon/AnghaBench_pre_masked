
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_long ;
struct rcv_queue {int lro_enabled; } ;
struct nicvf {int if_flags; TYPE_2__* qs; struct ifnet* ifp; int hw_tso; int if_media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int dummy; } ;
struct ifaddr {TYPE_1__* ifa_addr; } ;
typedef scalar_t__ caddr_t ;
typedef int boolean_t ;
struct TYPE_4__ {int rq_cnt; struct rcv_queue* rq; } ;
struct TYPE_3__ {int sa_family; } ;


 int VAR_0 ;
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
 int FUNC_0 (struct nicvf*) ;
 int FUNC_1 (struct nicvf*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct ifnet*,struct ifaddr*) ;
 int FUNC_3 (struct ifnet*,int,scalar_t__) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct ifnet*) ;
 int FUNC_6 (struct ifnet*) ;
 struct nicvf* FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct ifnet*,int,int ) ;
 int FUNC_9 (struct ifnet*,int ) ;
 int FUNC_10 (struct ifnet*,int) ;
 int FUNC_11 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_12 (struct nicvf*) ;
 int FUNC_13 (struct nicvf*) ;
 int FUNC_14 (struct nicvf*) ;
 int FUNC_15 (struct nicvf*) ;
 int FUNC_16 (struct nicvf*) ;
 int FUNC_17 (struct nicvf*,int ) ;

__attribute__((used)) static int
FUNC_18(struct ifnet *VAR_17, u_long VAR_18, caddr_t VAR_19)
{
 struct nicvf *VAR_20;
 struct rcv_queue *VAR_21;
 struct ifreq *VAR_22;
 uint32_t VAR_23;
 int VAR_24, VAR_25;
 int VAR_26;





 VAR_20 = FUNC_7(VAR_17);
 VAR_22 = (struct ifreq *)VAR_19;



 VAR_25 = 0;
 switch (VAR_18) {
 case 132:
  VAR_25 = FUNC_3(VAR_17, VAR_18, VAR_19);
  break;
 case 128:
  if (VAR_22->ifr_mtu < VAR_15 ||
      VAR_22->ifr_mtu > VAR_14) {
   VAR_25 = VAR_2;
  } else {
   FUNC_0(VAR_20);
   VAR_25 = FUNC_17(VAR_20, VAR_22->ifr_mtu);
   if (VAR_25 == 0)
    FUNC_9(VAR_17, VAR_22->ifr_mtu);
   FUNC_1(VAR_20);
  }
  break;
 case 130:
  FUNC_0(VAR_20);
  VAR_23 = FUNC_6(VAR_17);
  if (VAR_23 & VAR_13) {
   if (FUNC_5(VAR_17) & VAR_10) {
    if ((VAR_23 ^ VAR_20->if_flags) & VAR_12) {





    }

    if ((VAR_23 ^ VAR_20->if_flags) & VAR_9) {





    }
   } else {
    FUNC_13(VAR_20);
   }
  } else if (FUNC_5(VAR_17) & VAR_10)
   FUNC_16(VAR_20);

  VAR_20->if_flags = VAR_23;
  FUNC_1(VAR_20);
  break;

 case 135:
 case 134:
  if (FUNC_5(VAR_17) & VAR_10) {






  }
  break;

 case 129:
 case 133:
  VAR_25 = FUNC_11(VAR_17, VAR_22, &VAR_20->if_media, VAR_18);
  break;

 case 131:
  VAR_24 = FUNC_4(VAR_17) ^ VAR_22->ifr_reqcap;
  if (VAR_24 & VAR_8) {

   FUNC_10(VAR_17, VAR_8);
  }
  if (VAR_24 & VAR_7)
   FUNC_10(VAR_17, VAR_7);
  if (VAR_24 & VAR_5)
   FUNC_10(VAR_17, VAR_5);
  if ((VAR_24 & VAR_6) && VAR_20->hw_tso)
   FUNC_10(VAR_17, VAR_6);
  if (VAR_24 & VAR_4) {




   FUNC_0(VAR_20);
   FUNC_10(VAR_17, VAR_4);
   if ((FUNC_5(VAR_20->ifp) & VAR_10) != 0) {







    for (VAR_26 = 0;
        VAR_26 < VAR_20->qs->rq_cnt; VAR_26++) {
     VAR_21 = &VAR_20->qs->rq[VAR_26];
     VAR_21->lro_enabled = !VAR_21->lro_enabled;
    }
   }
   FUNC_1(VAR_20);
  }

  break;

 default:
  VAR_25 = FUNC_3(VAR_17, VAR_18, VAR_19);
  break;
 }

 return (VAR_25);
}
