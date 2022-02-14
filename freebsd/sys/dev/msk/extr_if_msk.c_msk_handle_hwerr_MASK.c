
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct msk_softc {int dummy; } ;
struct msk_if_softc {int msk_txq; int msk_if_dev; int msk_rxq; int msk_port; struct msk_softc* msk_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct msk_softc*,int ,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static void
FUNC_6(struct msk_if_softc *VAR_14, uint32_t VAR_15)
{
 struct msk_softc *VAR_16;

 VAR_16 = VAR_14->msk_softc;
 if ((VAR_15 & VAR_9) != 0) {
  FUNC_5(VAR_14->msk_if_dev,
      "RAM buffer read parity error\n");

  FUNC_0(VAR_16, FUNC_4(VAR_14->msk_port, VAR_0),
      VAR_5);
 }
 if ((VAR_15 & VAR_11) != 0) {
  FUNC_5(VAR_14->msk_if_dev,
      "RAM buffer write parity error\n");

  FUNC_0(VAR_16, FUNC_4(VAR_14->msk_port, VAR_0),
      VAR_6);
 }
 if ((VAR_15 & VAR_8) != 0) {
  FUNC_5(VAR_14->msk_if_dev, "Tx MAC parity error\n");

  FUNC_1(VAR_16, FUNC_2(VAR_14->msk_port, VAR_7),
      VAR_3);
 }
 if ((VAR_15 & VAR_10) != 0) {
  FUNC_5(VAR_14->msk_if_dev, "Rx parity error\n");

  FUNC_1(VAR_16, FUNC_3(VAR_14->msk_rxq, VAR_4), VAR_1);
 }
 if ((VAR_15 & (VAR_13 | VAR_12)) != 0) {
  FUNC_5(VAR_14->msk_if_dev, "TCP segmentation error\n");

  FUNC_1(VAR_16, FUNC_3(VAR_14->msk_txq, VAR_4), VAR_2);
 }
}
