
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int u8 ;
typedef int u32 ;
struct mlx4_en_priv {scalar_t__ gone; int port; int media; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int state_lock; int dev; } ;
struct ifrsskey {int ifrk_keylen; int ifrk_key; void* ifrk_func; } ;
struct ifrsshash {int ifrh_types; void* ifrh_func; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_hwassist; struct mlx4_en_priv* if_softc; } ;
struct ifi2creq {int len; int data; int offset; } ;
typedef int i2c ;
typedef scalar_t__ caddr_t ;


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
 int VAR_27 ;
 int VAR_28 ;
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_0 (struct ifnet*) ;
 int FUNC_1 (int ,struct ifi2creq*,int) ;
 int FUNC_2 (struct ifi2creq*,int ,int) ;
 int FUNC_3 (struct ifnet*,int,scalar_t__) ;
 int FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (struct ifnet*,char*) ;
 int FUNC_6 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_7 (struct ifreq*) ;
 int FUNC_8 (int ,int const*,int ) ;
 int FUNC_9 (struct ifnet*,int ) ;
 int * FUNC_10 (struct mlx4_en_priv*,int *) ;
 int FUNC_11 (struct mlx4_en_priv*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (struct ifnet*) ;
 int FUNC_14 (struct ifnet*) ;
 int FUNC_15 (int ,int ,int ,int,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct ifnet *VAR_37, u_long VAR_38, caddr_t VAR_39)
{
 struct mlx4_en_priv *VAR_40;
 struct mlx4_en_dev *VAR_41;
 struct ifreq *VAR_42;
 int VAR_43;
 int VAR_44;
 struct ifrsskey *VAR_45;
 const u32 *VAR_46;
 struct ifrsshash *VAR_47;
 u8 VAR_48;

 VAR_43 = 0;
 VAR_44 = 0;
 VAR_40 = VAR_37->if_softc;


 if (VAR_40 == ((void*)0) || VAR_40->gone != 0)
  return (VAR_9);

 VAR_41 = VAR_40->mdev;
 VAR_42 = (struct ifreq *) VAR_39;

 switch (VAR_38) {
 case 128:
  VAR_43 = -FUNC_9(VAR_37, VAR_42->ifr_mtu);
  break;
 case 130:
  if (VAR_37->if_flags & VAR_21) {
   if ((VAR_37->if_drv_flags & VAR_20) == 0) {
    FUNC_16(&VAR_41->state_lock);
    FUNC_13(VAR_37);
    FUNC_17(&VAR_41->state_lock);
   } else {
    FUNC_12(VAR_37);
   }
  } else {
   FUNC_16(&VAR_41->state_lock);
   if (VAR_37->if_drv_flags & VAR_20) {
    FUNC_14(VAR_37);
    FUNC_4(VAR_37, VAR_22);
   }
   FUNC_17(&VAR_41->state_lock);
  }
  break;
 case 137:
 case 136:
  FUNC_12(VAR_37);
  break;
 case 129:
 case 134:
  VAR_43 = FUNC_6(VAR_37, VAR_42, &VAR_40->media, VAR_38);
  break;
 case 131:
  FUNC_16(&VAR_41->state_lock);
  VAR_44 = VAR_42->ifr_reqcap ^ VAR_37->if_capenable;
  if (VAR_44 & VAR_15) {
   VAR_37->if_capenable ^= VAR_15;
   VAR_37->if_hwassist ^= (VAR_3 | VAR_5 | VAR_0);

   if (VAR_13 & VAR_37->if_capenable &&
       !(VAR_15 & VAR_37->if_capenable)) {
    VAR_37->if_capenable &= ~VAR_13;
    VAR_37->if_hwassist &= ~VAR_2;
    FUNC_5(VAR_37,
        "tso4 disabled due to -txcsum.\n");
   }
  }
  if (VAR_44 & VAR_16) {
   VAR_37->if_capenable ^= VAR_16;
   VAR_37->if_hwassist ^= (VAR_6 | VAR_4);

   if (VAR_14 & VAR_37->if_capenable &&
       !(VAR_16 & VAR_37->if_capenable)) {
    VAR_37->if_capenable &= ~VAR_14;
    VAR_37->if_hwassist &= ~VAR_1;
    FUNC_5(VAR_37,
        "tso6 disabled due to -txcsum6.\n");
   }
  }
  if (VAR_44 & VAR_11)
   VAR_37->if_capenable ^= VAR_11;
  if (VAR_44 & VAR_12)
   VAR_37->if_capenable ^= VAR_12;

  if (VAR_44 & VAR_13) {
   if (!(VAR_13 & VAR_37->if_capenable) &&
       !(VAR_15 & VAR_37->if_capenable)) {
    FUNC_5(VAR_37, "enable txcsum first.\n");
    VAR_43 = VAR_7;
    goto out;
   }
   VAR_37->if_capenable ^= VAR_13;
   VAR_37->if_hwassist ^= VAR_2;
  }
  if (VAR_44 & VAR_14) {
   if (!(VAR_14 & VAR_37->if_capenable) &&
       !(VAR_16 & VAR_37->if_capenable)) {
    FUNC_5(VAR_37, "enable txcsum6 first.\n");
    VAR_43 = VAR_7;
    goto out;
   }
   VAR_37->if_capenable ^= VAR_14;
   VAR_37->if_hwassist ^= VAR_1;
  }
  if (VAR_44 & VAR_10)
   VAR_37->if_capenable ^= VAR_10;
  if (VAR_44 & VAR_18)
   VAR_37->if_capenable ^= VAR_18;
  if (VAR_44 & VAR_17)
   VAR_37->if_capenable ^= VAR_17;
  if (VAR_44 & VAR_19)
   VAR_37->if_capenable ^= VAR_19;
  if (VAR_37->if_drv_flags & VAR_20)
   FUNC_13(VAR_37);
out:
  FUNC_17(&VAR_41->state_lock);
  FUNC_0(VAR_37);
  break;
 case 132:
  VAR_45 = (struct ifrsskey *)VAR_39;
  VAR_45->ifrk_func = VAR_29;
  FUNC_16(&VAR_41->state_lock);
  VAR_46 = FUNC_10(VAR_40, &VAR_45->ifrk_keylen);
  if (VAR_45->ifrk_keylen > VAR_30)
   VAR_43 = VAR_8;
  else
   FUNC_8(VAR_45->ifrk_key, VAR_46, VAR_45->ifrk_keylen);
  FUNC_17(&VAR_41->state_lock);
  break;

 case 133:
  FUNC_16(&VAR_41->state_lock);
  VAR_48 = FUNC_11(VAR_40);
  FUNC_17(&VAR_41->state_lock);
  VAR_47 = (struct ifrsshash *)VAR_39;
  VAR_47->ifrh_func = VAR_29;
  VAR_47->ifrh_types = 0;
  if (VAR_48 & VAR_23)
   VAR_47->ifrh_types |= VAR_31;
  if (VAR_48 & VAR_25)
   VAR_47->ifrh_types |= VAR_33;
  if (VAR_48 & VAR_24)
   VAR_47->ifrh_types |= VAR_32;
  if (VAR_48 & VAR_26)
   VAR_47->ifrh_types |= VAR_34;
  if (VAR_48 & VAR_27)
   VAR_47->ifrh_types |= VAR_35;
  if (VAR_48 & VAR_28)
   VAR_47->ifrh_types |= VAR_36;
  break;

 default:
  VAR_43 = FUNC_3(VAR_37, VAR_38, VAR_39);
  break;
 }

 return (VAR_43);
}
