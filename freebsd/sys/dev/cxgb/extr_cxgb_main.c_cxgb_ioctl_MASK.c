
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct port_info {int if_flags; int media; struct adapter* adapter; } ;
struct ifreq {int ifr_mtu; int ifr_reqcap; } ;
struct ifnet {int if_mtu; int if_flags; int if_drv_flags; int if_capenable; int if_hwassist; struct port_info* if_softc; } ;
struct adapter {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (struct adapter*) ;
 int FUNC_1 (struct adapter*) ;
 int FUNC_2 (struct adapter*) ;
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
 int FUNC_3 (struct adapter*) ;
 int FUNC_4 (struct port_info*) ;
 int FUNC_5 (struct port_info*) ;
 int FUNC_6 (struct port_info*) ;







 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct port_info*) ;
 int FUNC_9 (struct port_info*,int) ;
 int FUNC_10 (struct port_info*) ;
 int FUNC_11 (struct port_info*) ;
 int FUNC_12 (struct ifnet*,unsigned long,scalar_t__) ;
 int FUNC_13 (struct ifnet*,char*) ;
 int FUNC_14 (struct ifnet*,struct ifreq*,int *,unsigned long) ;
 int FUNC_15 (struct port_info*,int) ;

__attribute__((used)) static int
FUNC_16(struct ifnet *VAR_27, unsigned long VAR_28, caddr_t VAR_29)
{
 struct port_info *VAR_30 = VAR_27->if_softc;
 struct adapter *VAR_31 = VAR_30->adapter;
 struct ifreq *VAR_32 = (struct ifreq *)VAR_29;
 int VAR_33, VAR_34 = 0, VAR_35;
 uint32_t VAR_36;

 switch (VAR_28) {
 case 128:
  FUNC_0(VAR_31);
  VAR_34 = FUNC_4(VAR_30) ? VAR_8 : (FUNC_3(VAR_31) ? VAR_6 : 0);
  if (VAR_34) {
fail:
   FUNC_2(VAR_31);
   return (VAR_34);
  }

  VAR_35 = VAR_32->ifr_mtu;
  if ((VAR_35 < VAR_9) || (VAR_35 > VAR_10)) {
   VAR_34 = VAR_7;
  } else {
   VAR_27->if_mtu = VAR_35;
   FUNC_5(VAR_30);
   FUNC_11(VAR_30);
   FUNC_6(VAR_30);
  }
  FUNC_2(VAR_31);
  break;
 case 130:
  FUNC_0(VAR_31);
  if (FUNC_4(VAR_30)) {
   VAR_34 = VAR_8;
   goto fail;
  }
  if (VAR_27->if_flags & VAR_26) {
   if (VAR_27->if_drv_flags & VAR_24) {
    VAR_33 = VAR_30->if_flags;
    if (((VAR_27->if_flags ^ VAR_33) & VAR_25) ||
        ((VAR_27->if_flags ^ VAR_33) & VAR_23)) {
     if (FUNC_3(VAR_31)) {
      VAR_34 = VAR_6;
      goto fail;
     }
     FUNC_5(VAR_30);
     FUNC_11(VAR_30);
     FUNC_6(VAR_30);
    }
    FUNC_2(VAR_31);
   } else
    VAR_34 = FUNC_8(VAR_30);
   VAR_30->if_flags = VAR_27->if_flags;
  } else if (VAR_27->if_drv_flags & VAR_24)
   VAR_34 = FUNC_10(VAR_30);
  else
   FUNC_2(VAR_31);

  FUNC_1(VAR_31);
  break;
 case 134:
 case 133:
  FUNC_0(VAR_31);
  VAR_34 = FUNC_4(VAR_30) ? VAR_8 : (FUNC_3(VAR_31) ? VAR_6 : 0);
  if (VAR_34)
   goto fail;

  if (VAR_27->if_drv_flags & VAR_24) {
   FUNC_5(VAR_30);
   FUNC_11(VAR_30);
   FUNC_6(VAR_30);
  }
  FUNC_2(VAR_31);

  break;
 case 131:
  FUNC_0(VAR_31);
  VAR_34 = FUNC_4(VAR_30) ? VAR_8 : (FUNC_3(VAR_31) ? VAR_6 : 0);
  if (VAR_34)
   goto fail;

  VAR_36 = VAR_32->ifr_reqcap ^ VAR_27->if_capenable;
  if (VAR_36 & VAR_17) {
   VAR_27->if_capenable ^= VAR_17;
   VAR_27->if_hwassist ^= (VAR_1 | VAR_3 | VAR_0);

   if (VAR_15 & VAR_27->if_capenable &&
       !(VAR_17 & VAR_27->if_capenable)) {
    VAR_27->if_capenable &= ~VAR_15;
    FUNC_13(VAR_27,
        "tso4 disabled due to -txcsum.\n");
   }
  }
  if (VAR_36 & VAR_18) {
   VAR_27->if_capenable ^= VAR_18;
   VAR_27->if_hwassist ^= (VAR_4 | VAR_2);

   if (VAR_16 & VAR_27->if_capenable &&
       !(VAR_18 & VAR_27->if_capenable)) {
    VAR_27->if_capenable &= ~VAR_16;
    FUNC_13(VAR_27,
        "tso6 disabled due to -txcsum6.\n");
   }
  }
  if (VAR_36 & VAR_12)
   VAR_27->if_capenable ^= VAR_12;
  if (VAR_36 & VAR_13)
   VAR_27->if_capenable ^= VAR_13;







  if (VAR_36 & VAR_15) {
   if (!(VAR_15 & VAR_27->if_capenable) &&
       !(VAR_17 & VAR_27->if_capenable)) {
    FUNC_13(VAR_27, "enable txcsum first.\n");
    VAR_34 = VAR_5;
    goto fail;
   }
   VAR_27->if_capenable ^= VAR_15;
  }
  if (VAR_36 & VAR_16) {
   if (!(VAR_16 & VAR_27->if_capenable) &&
       !(VAR_18 & VAR_27->if_capenable)) {
    FUNC_13(VAR_27, "enable txcsum6 first.\n");
    VAR_34 = VAR_5;
    goto fail;
   }
   VAR_27->if_capenable ^= VAR_16;
  }
  if (VAR_36 & VAR_11) {
   VAR_27->if_capenable ^= VAR_11;


   FUNC_9(VAR_30, VAR_27->if_capenable & VAR_11);
  }
  if (VAR_36 & VAR_20) {
   VAR_27->if_capenable ^= VAR_20;
   if (VAR_27->if_drv_flags & VAR_24) {
    FUNC_5(VAR_30);
    FUNC_11(VAR_30);
    FUNC_6(VAR_30);
   }
  }
  if (VAR_36 & VAR_22) {
   VAR_27->if_capenable ^= VAR_22;
   if (VAR_27->if_drv_flags & VAR_24) {
    FUNC_5(VAR_30);
    FUNC_11(VAR_30);
    FUNC_6(VAR_30);
   }
  }
  if (VAR_36 & VAR_21)
   VAR_27->if_capenable ^= VAR_21;
  if (VAR_36 & VAR_19)
   VAR_27->if_capenable ^= VAR_19;




  FUNC_2(VAR_31);
  break;
 case 129:
 case 132:
  VAR_34 = FUNC_14(VAR_27, VAR_32, &VAR_30->media, VAR_28);
  break;
 default:
  VAR_34 = FUNC_12(VAR_27, VAR_28, VAR_29);
 }

 return (VAR_34);
}
