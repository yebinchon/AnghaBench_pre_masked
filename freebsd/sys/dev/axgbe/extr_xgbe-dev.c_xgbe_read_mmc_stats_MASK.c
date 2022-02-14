
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_mmc_stats {int rxwatchdogerror; int rxvlanframes_gb; int rxfifooverflow; int rxpauseframes; int rxoutofrangetype; int rxlengtherror; int rxunicastframes_g; int rx1024tomaxoctets_gb; int rx512to1023octets_gb; int rx256to511octets_gb; int rx128to255octets_gb; int rx65to127octets_gb; int rx64octets_gb; int rxoversize_g; int rxundersize_g; int rxjabbererror; int rxrunterror; int rxcrcerror; int rxmulticastframes_g; int rxbroadcastframes_g; int rxoctetcount_g; int rxoctetcount_gb; int rxframecount_gb; int txvlanframes_g; int txpauseframes; int txframecount_g; int txoctetcount_g; int txunderflowerror; int txbroadcastframes_g; int txmulticastframes_gb; int txunicastframes_gb; int tx1024tomaxoctets_gb; int tx512to1023octets_gb; int tx256to511octets_gb; int tx128to255octets_gb; int tx65to127octets_gb; int tx64octets_gb; int txmulticastframes_g; int txframecount_gb; int txoctetcount_gb; } ;
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
 int FUNC_0 (struct xgbe_prv_data*,int ,int ,int) ;
 scalar_t__ FUNC_1 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_43)
{
 struct xgbe_mmc_stats *VAR_44 = &VAR_43->mmc_stats;


 FUNC_0(VAR_43, VAR_1, VAR_0, 1);

 VAR_44->txoctetcount_gb +=
  FUNC_1(VAR_43, VAR_37);

 VAR_44->txframecount_gb +=
  FUNC_1(VAR_43, VAR_33);

 VAR_44->txbroadcastframes_g +=
  FUNC_1(VAR_43, VAR_32);

 VAR_44->txmulticastframes_g +=
  FUNC_1(VAR_43, VAR_36);

 VAR_44->tx64octets_gb +=
  FUNC_1(VAR_43, VAR_29);

 VAR_44->tx65to127octets_gb +=
  FUNC_1(VAR_43, VAR_30);

 VAR_44->tx128to255octets_gb +=
  FUNC_1(VAR_43, VAR_26);

 VAR_44->tx256to511octets_gb +=
  FUNC_1(VAR_43, VAR_27);

 VAR_44->tx512to1023octets_gb +=
  FUNC_1(VAR_43, VAR_28);

 VAR_44->tx1024tomaxoctets_gb +=
  FUNC_1(VAR_43, VAR_25);

 VAR_44->txunicastframes_gb +=
  FUNC_1(VAR_43, VAR_41);

 VAR_44->txmulticastframes_gb +=
  FUNC_1(VAR_43, VAR_35);

 VAR_44->txbroadcastframes_g +=
  FUNC_1(VAR_43, VAR_31);

 VAR_44->txunderflowerror +=
  FUNC_1(VAR_43, VAR_40);

 VAR_44->txoctetcount_g +=
  FUNC_1(VAR_43, VAR_38);

 VAR_44->txframecount_g +=
  FUNC_1(VAR_43, VAR_34);

 VAR_44->txpauseframes +=
  FUNC_1(VAR_43, VAR_39);

 VAR_44->txvlanframes_g +=
  FUNC_1(VAR_43, VAR_42);

 VAR_44->rxframecount_gb +=
  FUNC_1(VAR_43, VAR_11);

 VAR_44->rxoctetcount_gb +=
  FUNC_1(VAR_43, VAR_15);

 VAR_44->rxoctetcount_g +=
  FUNC_1(VAR_43, VAR_16);

 VAR_44->rxbroadcastframes_g +=
  FUNC_1(VAR_43, VAR_8);

 VAR_44->rxmulticastframes_g +=
  FUNC_1(VAR_43, VAR_14);

 VAR_44->rxcrcerror +=
  FUNC_1(VAR_43, VAR_9);

 VAR_44->rxrunterror +=
  FUNC_1(VAR_43, VAR_20);

 VAR_44->rxjabbererror +=
  FUNC_1(VAR_43, VAR_12);

 VAR_44->rxundersize_g +=
  FUNC_1(VAR_43, VAR_21);

 VAR_44->rxoversize_g +=
  FUNC_1(VAR_43, VAR_18);

 VAR_44->rx64octets_gb +=
  FUNC_1(VAR_43, VAR_6);

 VAR_44->rx65to127octets_gb +=
  FUNC_1(VAR_43, VAR_7);

 VAR_44->rx128to255octets_gb +=
  FUNC_1(VAR_43, VAR_3);

 VAR_44->rx256to511octets_gb +=
  FUNC_1(VAR_43, VAR_4);

 VAR_44->rx512to1023octets_gb +=
  FUNC_1(VAR_43, VAR_5);

 VAR_44->rx1024tomaxoctets_gb +=
  FUNC_1(VAR_43, VAR_2);

 VAR_44->rxunicastframes_g +=
  FUNC_1(VAR_43, VAR_22);

 VAR_44->rxlengtherror +=
  FUNC_1(VAR_43, VAR_13);

 VAR_44->rxoutofrangetype +=
  FUNC_1(VAR_43, VAR_17);

 VAR_44->rxpauseframes +=
  FUNC_1(VAR_43, VAR_19);

 VAR_44->rxfifooverflow +=
  FUNC_1(VAR_43, VAR_10);

 VAR_44->rxvlanframes_gb +=
  FUNC_1(VAR_43, VAR_23);

 VAR_44->rxwatchdogerror +=
  FUNC_1(VAR_43, VAR_24);


 FUNC_0(VAR_43, VAR_1, VAR_0, 0);
}
