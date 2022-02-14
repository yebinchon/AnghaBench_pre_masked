
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {int msk_ramsize; int msk_rxqsize; int msk_txqsize; int msk_num_port; int* msk_rxqstart; int* msk_rxqend; int* msk_txqstart; int* msk_txqend; int msk_dev; int msk_pflags; } ;


 int VAR_0 ;
 int FUNC_0 (struct msk_softc*,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct msk_softc *VAR_3)
{
 int VAR_4;
 int VAR_5;


 VAR_3->msk_ramsize = FUNC_0(VAR_3, VAR_0) * 4;
 if (VAR_2)
  FUNC_1(VAR_3->msk_dev,
      "RAM buffer size : %dKB\n", VAR_3->msk_ramsize);
 if (VAR_3->msk_ramsize == 0)
  return (0);

 VAR_3->msk_pflags |= VAR_1;





 VAR_3->msk_rxqsize = FUNC_2((VAR_3->msk_ramsize * 1024 * 2) / 3, 1024);
 VAR_3->msk_txqsize = (VAR_3->msk_ramsize * 1024) - VAR_3->msk_rxqsize;
 for (VAR_5 = 0, VAR_4 = 0; VAR_5 < VAR_3->msk_num_port; VAR_5++) {
  VAR_3->msk_rxqstart[VAR_5] = VAR_4;
  VAR_3->msk_rxqend[VAR_5] = VAR_4 + VAR_3->msk_rxqsize - 1;
  VAR_4 = VAR_3->msk_rxqend[VAR_5] + 1;
  VAR_3->msk_txqstart[VAR_5] = VAR_4;
  VAR_3->msk_txqend[VAR_5] = VAR_4 + VAR_3->msk_txqsize - 1;
  VAR_4 = VAR_3->msk_txqend[VAR_5] + 1;
  if (VAR_2) {
   FUNC_1(VAR_3->msk_dev,
       "Port %d : Rx Queue %dKB(0x%08x:0x%08x)\n", VAR_5,
       VAR_3->msk_rxqsize / 1024, VAR_3->msk_rxqstart[VAR_5],
       VAR_3->msk_rxqend[VAR_5]);
   FUNC_1(VAR_3->msk_dev,
       "Port %d : Tx Queue %dKB(0x%08x:0x%08x)\n", VAR_5,
       VAR_3->msk_txqsize / 1024, VAR_3->msk_txqstart[VAR_5],
       VAR_3->msk_txqend[VAR_5]);
  }
 }

 return (0);
}
