
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_mmc_stats {int rxwatchdogerror; int rxvlanframes_gb; int rxfifooverflow; int rxpauseframes; int rxoutofrangetype; int rxlengtherror; int rxunicastframes_g; int rx1024tomaxoctets_gb; int rx512to1023octets_gb; int rx256to511octets_gb; int rx128to255octets_gb; int rx65to127octets_gb; int rx64octets_gb; int rxoversize_g; int rxundersize_g; int rxjabbererror; int rxrunterror; int rxcrcerror; int rxmulticastframes_g; int rxbroadcastframes_g; int rxoctetcount_g; int rxoctetcount_gb; int rxframecount_gb; } ;
struct xgbe_prv_data {struct xgbe_mmc_stats mmc_stats; } ;


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
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 scalar_t__ FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (struct xgbe_prv_data*,int ) ;
 scalar_t__ FUNC_2 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_47)
{
 struct xgbe_mmc_stats *VAR_48 = &VAR_47->mmc_stats;
 unsigned int VAR_49 = FUNC_1(VAR_47, VAR_0);

 if (FUNC_0(VAR_49, VAR_0, VAR_33))
  VAR_48->rxframecount_gb +=
   FUNC_2(VAR_47, VAR_10);

 if (FUNC_0(VAR_49, VAR_0, VAR_38))
  VAR_48->rxoctetcount_gb +=
   FUNC_2(VAR_47, VAR_14);

 if (FUNC_0(VAR_49, VAR_0, VAR_37))
  VAR_48->rxoctetcount_g +=
   FUNC_2(VAR_47, VAR_15);

 if (FUNC_0(VAR_49, VAR_0, VAR_30))
  VAR_48->rxbroadcastframes_g +=
   FUNC_2(VAR_47, VAR_7);

 if (FUNC_0(VAR_49, VAR_0, VAR_36))
  VAR_48->rxmulticastframes_g +=
   FUNC_2(VAR_47, VAR_13);

 if (FUNC_0(VAR_49, VAR_0, VAR_31))
  VAR_48->rxcrcerror +=
   FUNC_2(VAR_47, VAR_8);

 if (FUNC_0(VAR_49, VAR_0, VAR_42))
  VAR_48->rxrunterror +=
   FUNC_2(VAR_47, VAR_19);

 if (FUNC_0(VAR_49, VAR_0, VAR_34))
  VAR_48->rxjabbererror +=
   FUNC_2(VAR_47, VAR_11);

 if (FUNC_0(VAR_49, VAR_0, VAR_43))
  VAR_48->rxundersize_g +=
   FUNC_2(VAR_47, VAR_20);

 if (FUNC_0(VAR_49, VAR_0, VAR_40))
  VAR_48->rxoversize_g +=
   FUNC_2(VAR_47, VAR_17);

 if (FUNC_0(VAR_49, VAR_0, VAR_28))
  VAR_48->rx64octets_gb +=
   FUNC_2(VAR_47, VAR_5);

 if (FUNC_0(VAR_49, VAR_0, VAR_29))
  VAR_48->rx65to127octets_gb +=
   FUNC_2(VAR_47, VAR_6);

 if (FUNC_0(VAR_49, VAR_0, VAR_25))
  VAR_48->rx128to255octets_gb +=
   FUNC_2(VAR_47, VAR_2);

 if (FUNC_0(VAR_49, VAR_0, VAR_26))
  VAR_48->rx256to511octets_gb +=
   FUNC_2(VAR_47, VAR_3);

 if (FUNC_0(VAR_49, VAR_0, VAR_27))
  VAR_48->rx512to1023octets_gb +=
   FUNC_2(VAR_47, VAR_4);

 if (FUNC_0(VAR_49, VAR_0, VAR_24))
  VAR_48->rx1024tomaxoctets_gb +=
   FUNC_2(VAR_47, VAR_1);

 if (FUNC_0(VAR_49, VAR_0, VAR_44))
  VAR_48->rxunicastframes_g +=
   FUNC_2(VAR_47, VAR_21);

 if (FUNC_0(VAR_49, VAR_0, VAR_35))
  VAR_48->rxlengtherror +=
   FUNC_2(VAR_47, VAR_12);

 if (FUNC_0(VAR_49, VAR_0, VAR_39))
  VAR_48->rxoutofrangetype +=
   FUNC_2(VAR_47, VAR_16);

 if (FUNC_0(VAR_49, VAR_0, VAR_41))
  VAR_48->rxpauseframes +=
   FUNC_2(VAR_47, VAR_18);

 if (FUNC_0(VAR_49, VAR_0, VAR_32))
  VAR_48->rxfifooverflow +=
   FUNC_2(VAR_47, VAR_9);

 if (FUNC_0(VAR_49, VAR_0, VAR_45))
  VAR_48->rxvlanframes_gb +=
   FUNC_2(VAR_47, VAR_22);

 if (FUNC_0(VAR_49, VAR_0, VAR_46))
  VAR_48->rxwatchdogerror +=
   FUNC_2(VAR_47, VAR_23);
}
