
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {int* msk_rxqstart; int* msk_rxqend; scalar_t__ msk_rxqsize; int* msk_txqstart; int* msk_txqend; } ;
struct msk_if_softc {int msk_flags; size_t msk_port; int msk_txq; int msk_rxq; struct msk_softc* msk_softc; } ;


 int FUNC_0 (struct msk_softc*,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int ) ;
 int FUNC_2 (struct msk_softc*,int ,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
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

__attribute__((used)) static void
FUNC_4(struct msk_if_softc *VAR_15)
{
 struct msk_softc *VAR_16;
 int VAR_17, VAR_18;

 VAR_16 = VAR_15->msk_softc;
 if ((VAR_15->msk_flags & VAR_0) == 0)
  return;


 FUNC_1(VAR_16, FUNC_3(VAR_15->msk_rxq, VAR_5), VAR_10);
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_rxq, VAR_13),
     VAR_16->msk_rxqstart[VAR_15->msk_port] / 8);
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_rxq, VAR_8),
     VAR_16->msk_rxqend[VAR_15->msk_port] / 8);
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_rxq, VAR_14),
     VAR_16->msk_rxqstart[VAR_15->msk_port] / 8);
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_rxq, VAR_9),
     VAR_16->msk_rxqstart[VAR_15->msk_port] / 8);

 VAR_18 = (VAR_16->msk_rxqend[VAR_15->msk_port] + 1 -
     VAR_16->msk_rxqstart[VAR_15->msk_port] - VAR_4) / 8;
 VAR_17 = (VAR_16->msk_rxqend[VAR_15->msk_port] + 1 -
     VAR_16->msk_rxqstart[VAR_15->msk_port] - VAR_2) / 8;
 if (VAR_16->msk_rxqsize < VAR_1)
  VAR_17 += (VAR_2 - VAR_3) / 8;
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_rxq, VAR_12), VAR_18);
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_rxq, VAR_11), VAR_17);


 FUNC_1(VAR_16, FUNC_3(VAR_15->msk_rxq, VAR_5), VAR_6);
 FUNC_0(VAR_16, FUNC_3(VAR_15->msk_rxq, VAR_5));


 FUNC_1(VAR_16, FUNC_3(VAR_15->msk_txq, VAR_5), VAR_10);
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_txq, VAR_13),
     VAR_16->msk_txqstart[VAR_15->msk_port] / 8);
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_txq, VAR_8),
     VAR_16->msk_txqend[VAR_15->msk_port] / 8);
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_txq, VAR_14),
     VAR_16->msk_txqstart[VAR_15->msk_port] / 8);
 FUNC_2(VAR_16, FUNC_3(VAR_15->msk_txq, VAR_9),
     VAR_16->msk_txqstart[VAR_15->msk_port] / 8);

 FUNC_1(VAR_16, FUNC_3(VAR_15->msk_txq, VAR_5), VAR_7);
 FUNC_1(VAR_16, FUNC_3(VAR_15->msk_txq, VAR_5), VAR_6);
 FUNC_0(VAR_16, FUNC_3(VAR_15->msk_txq, VAR_5));
}
