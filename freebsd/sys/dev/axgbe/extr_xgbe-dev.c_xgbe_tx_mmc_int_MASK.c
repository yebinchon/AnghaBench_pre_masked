
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_mmc_stats {int txvlanframes_g; int txpauseframes; int txframecount_g; int txoctetcount_g; int txunderflowerror; int txbroadcastframes_g; int txmulticastframes_gb; int txunicastframes_gb; int tx1024tomaxoctets_gb; int tx512to1023octets_gb; int tx256to511octets_gb; int tx128to255octets_gb; int tx65to127octets_gb; int tx64octets_gb; int txmulticastframes_g; int txframecount_gb; int txoctetcount_gb; } ;
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
 scalar_t__ FUNC_0 (unsigned int,int ,int ) ;
 unsigned int FUNC_1 (struct xgbe_prv_data*,int ) ;
 scalar_t__ FUNC_2 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_37)
{
 struct xgbe_mmc_stats *VAR_38 = &VAR_37->mmc_stats;
 unsigned int VAR_39 = FUNC_1(VAR_37, VAR_0);

 if (FUNC_0(VAR_39, VAR_0, VAR_32))
  VAR_38->txoctetcount_gb +=
   FUNC_2(VAR_37, VAR_13);

 if (FUNC_0(VAR_39, VAR_0, VAR_28))
  VAR_38->txframecount_gb +=
   FUNC_2(VAR_37, VAR_9);

 if (FUNC_0(VAR_39, VAR_0, VAR_25))
  VAR_38->txbroadcastframes_g +=
   FUNC_2(VAR_37, VAR_8);

 if (FUNC_0(VAR_39, VAR_0, VAR_29))
  VAR_38->txmulticastframes_g +=
   FUNC_2(VAR_37, VAR_12);

 if (FUNC_0(VAR_39, VAR_0, VAR_23))
  VAR_38->tx64octets_gb +=
   FUNC_2(VAR_37, VAR_5);

 if (FUNC_0(VAR_39, VAR_0, VAR_24))
  VAR_38->tx65to127octets_gb +=
   FUNC_2(VAR_37, VAR_6);

 if (FUNC_0(VAR_39, VAR_0, VAR_20))
  VAR_38->tx128to255octets_gb +=
   FUNC_2(VAR_37, VAR_2);

 if (FUNC_0(VAR_39, VAR_0, VAR_21))
  VAR_38->tx256to511octets_gb +=
   FUNC_2(VAR_37, VAR_3);

 if (FUNC_0(VAR_39, VAR_0, VAR_22))
  VAR_38->tx512to1023octets_gb +=
   FUNC_2(VAR_37, VAR_4);

 if (FUNC_0(VAR_39, VAR_0, VAR_19))
  VAR_38->tx1024tomaxoctets_gb +=
   FUNC_2(VAR_37, VAR_1);

 if (FUNC_0(VAR_39, VAR_0, VAR_35))
  VAR_38->txunicastframes_gb +=
   FUNC_2(VAR_37, VAR_17);

 if (FUNC_0(VAR_39, VAR_0, VAR_30))
  VAR_38->txmulticastframes_gb +=
   FUNC_2(VAR_37, VAR_11);

 if (FUNC_0(VAR_39, VAR_0, VAR_26))
  VAR_38->txbroadcastframes_g +=
   FUNC_2(VAR_37, VAR_7);

 if (FUNC_0(VAR_39, VAR_0, VAR_34))
  VAR_38->txunderflowerror +=
   FUNC_2(VAR_37, VAR_16);

 if (FUNC_0(VAR_39, VAR_0, VAR_31))
  VAR_38->txoctetcount_g +=
   FUNC_2(VAR_37, VAR_14);

 if (FUNC_0(VAR_39, VAR_0, VAR_27))
  VAR_38->txframecount_g +=
   FUNC_2(VAR_37, VAR_10);

 if (FUNC_0(VAR_39, VAR_0, VAR_33))
  VAR_38->txpauseframes +=
   FUNC_2(VAR_37, VAR_15);

 if (FUNC_0(VAR_39, VAR_0, VAR_36))
  VAR_38->txvlanframes_g +=
   FUNC_2(VAR_37, VAR_18);
}
