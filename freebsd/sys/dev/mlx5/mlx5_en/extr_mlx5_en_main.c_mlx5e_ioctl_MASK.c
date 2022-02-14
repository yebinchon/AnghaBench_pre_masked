
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int u_long ;
struct TYPE_4__ {int hw_lro_en; } ;
struct TYPE_3__ {int hw_lro; } ;
struct mlx5e_priv {scalar_t__ gone; int mdev; int clbr_done; int tstmp_clbr; TYPE_2__ params; TYPE_1__ params_ethtool; int state; int media; } ;
struct ifreq {int ifr_reqcap; int ifr_mtu; } ;
struct ifnet {int if_flags; int if_drv_flags; int if_capenable; int if_hwassist; struct mlx5e_priv* if_softc; } ;
struct ifi2creq {int len; int dev_addr; scalar_t__ data; int offset; } ;
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
 int FUNC_0 (int ,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_1 (struct mlx5e_priv*) ;
 int FUNC_2 (struct mlx5e_priv*) ;
 int FUNC_3 (struct ifnet*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,struct ifi2creq*,int) ;
 int FUNC_6 (struct ifi2creq*,int ,int) ;
 int FUNC_7 (struct ifnet*,int,scalar_t__) ;
 int FUNC_8 (struct ifnet*,struct ifreq*,int *,int) ;
 int FUNC_9 (struct ifreq*) ;
 int FUNC_10 (struct ifnet*,char*,...) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int,int *,int*) ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (int ,int*) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (struct ifnet*) ;
 int FUNC_17 (struct mlx5e_priv*) ;
 int FUNC_18 (struct mlx5e_priv*) ;
 int FUNC_19 (struct ifnet*) ;
 int FUNC_20 (struct mlx5e_priv*) ;
 int FUNC_21 (struct ifnet*,int ) ;
 int FUNC_22 (struct ifnet*) ;
 int FUNC_23 (struct mlx5e_priv*) ;
 int FUNC_24 (int ,int *) ;

__attribute__((used)) static int
FUNC_25(struct ifnet *VAR_34, u_long VAR_35, caddr_t VAR_36)
{
 struct mlx5e_priv *VAR_37;
 struct ifreq *VAR_38;
 struct ifi2creq VAR_39;
 int VAR_40 = 0;
 int VAR_41 = 0;
 int VAR_42 = 0;
 int VAR_43;
 int VAR_44;
 int VAR_45;
 uint8_t VAR_46;

 VAR_37 = VAR_34->if_softc;


 if (VAR_37 == ((void*)0) || VAR_37->gone != 0)
  return (VAR_9);

 switch (VAR_35) {
 case 128:
  VAR_38 = (struct ifreq *)VAR_36;

  FUNC_1(VAR_37);
  FUNC_14(VAR_37->mdev, &VAR_45);

  if (VAR_38->ifr_mtu >= VAR_25 &&
      VAR_38->ifr_mtu <= FUNC_0(VAR_24, VAR_45)) {
   int VAR_47;

   VAR_47 = FUNC_24(VAR_26, &VAR_37->state);
   if (VAR_47)
    FUNC_16(VAR_34);


   FUNC_21(VAR_34, VAR_38->ifr_mtu);

   if (VAR_47)
    FUNC_19(VAR_34);
  } else {
   VAR_40 = VAR_8;
   FUNC_10(VAR_34,
       "Invalid MTU value. Min val: %d, Max val: %d\n",
       VAR_25, FUNC_0(VAR_24, VAR_45));
  }
  FUNC_2(VAR_37);
  break;
 case 130:
  if ((VAR_34->if_flags & VAR_23) &&
      (VAR_34->if_drv_flags & VAR_22)) {
   FUNC_22(VAR_34);
   break;
  }
  FUNC_1(VAR_37);
  if (VAR_34->if_flags & VAR_23) {
   if ((VAR_34->if_drv_flags & VAR_22) == 0) {
    if (FUNC_24(VAR_26, &VAR_37->state) == 0)
     FUNC_19(VAR_34);
    VAR_34->if_drv_flags |= VAR_22;
    FUNC_15(VAR_37->mdev, VAR_33);
   }
  } else {
   if (VAR_34->if_drv_flags & VAR_22) {
    FUNC_15(VAR_37->mdev,
        VAR_32);
    if (FUNC_24(VAR_26, &VAR_37->state) != 0)
     FUNC_16(VAR_34);
    FUNC_23(VAR_37);
    VAR_34->if_drv_flags &= ~VAR_22;
   }
  }
  FUNC_2(VAR_37);
  break;
 case 136:
 case 135:
  FUNC_22(VAR_34);
  break;
 case 129:
 case 133:
 case 132:
  VAR_38 = (struct ifreq *)VAR_36;
  VAR_40 = FUNC_8(VAR_34, VAR_38, &VAR_37->media, VAR_35);
  break;
 case 131:
  VAR_38 = (struct ifreq *)VAR_36;
  FUNC_1(VAR_37);
  VAR_41 = VAR_38->ifr_reqcap ^ VAR_34->if_capenable;

  if (VAR_41 & VAR_17) {
   VAR_34->if_capenable ^= VAR_17;
   VAR_34->if_hwassist ^= (VAR_3 | VAR_5 | VAR_0);

   if (VAR_15 & VAR_34->if_capenable &&
       !(VAR_17 & VAR_34->if_capenable)) {
    VAR_34->if_capenable &= ~VAR_15;
    VAR_34->if_hwassist &= ~VAR_2;
    FUNC_10(VAR_34,
        "tso4 disabled due to -txcsum.\n");
   }
  }
  if (VAR_41 & VAR_18) {
   VAR_34->if_capenable ^= VAR_18;
   VAR_34->if_hwassist ^= (VAR_6 | VAR_4);

   if (VAR_16 & VAR_34->if_capenable &&
       !(VAR_18 & VAR_34->if_capenable)) {
    VAR_34->if_capenable &= ~VAR_16;
    VAR_34->if_hwassist &= ~VAR_1;
    FUNC_10(VAR_34,
        "tso6 disabled due to -txcsum6.\n");
   }
  }
  if (VAR_41 & VAR_12)
   VAR_34->if_capenable ^= VAR_12;
  if (VAR_41 & VAR_13)
   VAR_34->if_capenable ^= VAR_13;
  if (VAR_41 & VAR_14)
   VAR_34->if_capenable ^= VAR_14;
  if (VAR_41 & VAR_15) {
   if (!(VAR_15 & VAR_34->if_capenable) &&
       !(VAR_17 & VAR_34->if_capenable)) {
    FUNC_10(VAR_34, "enable txcsum first.\n");
    VAR_40 = VAR_7;
    goto out;
   }
   VAR_34->if_capenable ^= VAR_15;
   VAR_34->if_hwassist ^= VAR_2;
  }
  if (VAR_41 & VAR_16) {
   if (!(VAR_16 & VAR_34->if_capenable) &&
       !(VAR_18 & VAR_34->if_capenable)) {
    FUNC_10(VAR_34, "enable txcsum6 first.\n");
    VAR_40 = VAR_7;
    goto out;
   }
   VAR_34->if_capenable ^= VAR_16;
   VAR_34->if_hwassist ^= VAR_1;
  }
  if (VAR_41 & VAR_19) {
   if (VAR_34->if_capenable & VAR_19)
    FUNC_17(VAR_37);
   else
    FUNC_18(VAR_37);

   VAR_34->if_capenable ^= VAR_19;
  }
  if (VAR_41 & VAR_20)
   VAR_34->if_capenable ^= VAR_20;
  if (VAR_41 & VAR_21)
   VAR_34->if_capenable ^= VAR_21;

  FUNC_3(VAR_34);

  if (VAR_41 & VAR_11) {
   int VAR_48 = FUNC_24(VAR_26, &VAR_37->state);
   bool VAR_49 = 0;

   VAR_34->if_capenable ^= VAR_11;


   if (!(VAR_34->if_capenable & VAR_11)) {
    if (VAR_37->params.hw_lro_en) {
     VAR_37->params.hw_lro_en = 0;
     VAR_49 = 1;
    }
   } else {
    if (VAR_37->params.hw_lro_en == 0 &&
        VAR_37->params_ethtool.hw_lro != 0) {
     VAR_37->params.hw_lro_en = 1;
     VAR_49 = 1;
    }
   }
   if (VAR_48 && VAR_49) {
    FUNC_16(VAR_34);
    FUNC_19(VAR_34);
   }
  }
  if (VAR_41 & VAR_10) {
   VAR_34->if_capenable ^= VAR_10;
   if (VAR_34->if_capenable & VAR_10) {
    if (VAR_37->clbr_done == 0)
     FUNC_20(VAR_37);
   } else {
    FUNC_4(&VAR_37->tstmp_clbr);
    VAR_37->clbr_done = 0;
   }
  }
out:
  FUNC_2(VAR_37);
  break;

 case 134:
  VAR_38 = (struct ifreq *)VAR_36;





  VAR_40 = FUNC_5(FUNC_9(VAR_38), &VAR_39, sizeof(VAR_39));
  if (VAR_40)
   break;

  if (VAR_39.len > sizeof(VAR_39.data)) {
   VAR_40 = VAR_8;
   break;
  }

  FUNC_1(VAR_37);

  VAR_40 = FUNC_12(VAR_37->mdev, &VAR_44);
  if (VAR_40) {
   FUNC_10(VAR_34,
       "Query module num failed, eeprom reading is not supported\n");
   VAR_40 = VAR_8;
   goto err_i2c;
  }

  VAR_43 = FUNC_13(VAR_37->mdev, VAR_44);
  if (VAR_43 != VAR_31) {
   VAR_40 = VAR_8;
   goto err_i2c;
  }




  if (VAR_39.dev_addr == 0xA0)
   VAR_46 = VAR_30;
  else if (VAR_39.dev_addr == 0xA2)
   VAR_46 = VAR_29;
  else {
   FUNC_10(VAR_34,
       "Query eeprom failed, Invalid Address: %X\n",
       VAR_39.dev_addr);
   VAR_40 = VAR_8;
   goto err_i2c;
  }
  VAR_40 = FUNC_11(VAR_37->mdev,
      VAR_46, VAR_27,
      (uint32_t)VAR_39.offset, (uint32_t)VAR_39.len, VAR_44,
      (uint32_t *)VAR_39.data, &VAR_42);
  if (VAR_40) {
   FUNC_10(VAR_34,
       "Query eeprom failed, eeprom reading is not supported\n");
   VAR_40 = VAR_8;
   goto err_i2c;
  }

  if (VAR_39.len > VAR_28) {
   VAR_40 = FUNC_11(VAR_37->mdev,
       VAR_46, VAR_27,
       (uint32_t)(VAR_39.offset + VAR_42),
       (uint32_t)(VAR_39.len - VAR_42), VAR_44,
       (uint32_t *)(VAR_39.data + VAR_42), &VAR_42);
  }
  if (VAR_40) {
   FUNC_10(VAR_34,
       "Query eeprom failed, eeprom reading is not supported\n");
   VAR_40 = VAR_8;
   goto err_i2c;
  }

  VAR_40 = FUNC_6(&VAR_39, FUNC_9(VAR_38), sizeof(VAR_39));
err_i2c:
  FUNC_2(VAR_37);
  break;

 default:
  VAR_40 = FUNC_7(VAR_34, VAR_35, VAR_36);
  break;
 }
 return (VAR_40);
}
