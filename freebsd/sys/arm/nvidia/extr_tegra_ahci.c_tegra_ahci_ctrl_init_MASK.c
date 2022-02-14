
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tegra_ahci_sc {int dummy; } ;
struct sata_pad_calibration {int gen1_tx_amp; int gen1_tx_peak; int gen2_tx_amp; int gen2_tx_peak; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct tegra_ahci_sc*,scalar_t__) ;
 int FUNC_1 (struct tegra_ahci_sc*,scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 struct sata_pad_calibration* VAR_34 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(struct tegra_ahci_sc *VAR_35)
{
 uint32_t VAR_36;
 const struct sata_pad_calibration *VAR_37;

 VAR_36 = FUNC_0(VAR_35, VAR_2);
 VAR_36 |= VAR_3;
 FUNC_1(VAR_35, VAR_2, VAR_36);



 VAR_36 = FUNC_2(VAR_0);
 VAR_37 = VAR_34 + (VAR_36 & VAR_1);
 FUNC_1(VAR_35, VAR_8 + VAR_33, 1);

 VAR_36 = FUNC_0(VAR_35, VAR_8 + VAR_21);
 VAR_36 &= ~(VAR_22 <<
     VAR_23);
 VAR_36 &= ~(VAR_24 <<
     VAR_25);
 VAR_36 |= VAR_37->gen1_tx_amp << VAR_23;
 VAR_36 |= VAR_37->gen1_tx_peak << VAR_25;
 FUNC_1(VAR_35, VAR_8 + VAR_21, VAR_36);

 VAR_36 = FUNC_0(VAR_35, VAR_8 + VAR_26);
 VAR_36 &= ~(VAR_27 <<
     VAR_28);
 VAR_36 &= ~(VAR_29 <<
     VAR_30);
 VAR_36 |= VAR_37->gen2_tx_amp << VAR_28;
 VAR_36 |= VAR_37->gen2_tx_peak << VAR_30;
 FUNC_1(VAR_35, VAR_8 + VAR_26, VAR_36);

 FUNC_1(VAR_35, VAR_8 + VAR_19,
     VAR_20);

 FUNC_1(VAR_35, VAR_8 + VAR_31,
     VAR_32);

 FUNC_1(VAR_35, VAR_8 + VAR_33, 0);


 VAR_36 = FUNC_0(VAR_35, VAR_8 + VAR_17);
 VAR_36 |= VAR_18;
 FUNC_1(VAR_35, VAR_8 + VAR_17, VAR_36);

 FUNC_1(VAR_35, VAR_8 + VAR_9, 0x01060100);

 VAR_36 = FUNC_0(VAR_35, VAR_8 + VAR_17);
 VAR_36 &= ~VAR_18;
 FUNC_1(VAR_35, VAR_8 + VAR_17, VAR_36);


 VAR_36 = FUNC_0(VAR_35, VAR_8 + VAR_10);
 VAR_36 |= VAR_12;
 VAR_36 |= VAR_13;
 VAR_36 |= VAR_11;
 VAR_36 |= VAR_14;
 FUNC_1(VAR_35, VAR_8 + VAR_10, VAR_36);


 FUNC_1(VAR_35, VAR_4, 0x10000 << VAR_5);

 FUNC_1(VAR_35, VAR_8 + VAR_15,
     0x08000 << VAR_16);


 VAR_36 = FUNC_0(VAR_35, VAR_6);
 VAR_36 |= VAR_7;
 FUNC_1(VAR_35, VAR_6, VAR_36);

 return (0);
}
