
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct msk_softc {int dummy; } ;
struct msk_if_softc {int msk_if_dev; int msk_port; struct msk_softc* msk_softc; } ;


 int FUNC_0 (struct msk_softc*,int ) ;
 int FUNC_1 (struct msk_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct msk_if_softc *VAR_7)
{
 struct msk_softc *VAR_8;
 uint8_t VAR_9;

 VAR_8 = VAR_7->msk_softc;
 VAR_9 = FUNC_0(VAR_8, FUNC_2(VAR_7->msk_port, VAR_0));


 if ((VAR_9 & VAR_3) != 0)
  FUNC_1(VAR_8, FUNC_2(VAR_7->msk_port, VAR_5),
      VAR_1);

 if ((VAR_9 & VAR_4) != 0) {
  FUNC_1(VAR_8, FUNC_2(VAR_7->msk_port, VAR_6),
      VAR_2);
  FUNC_3(VAR_7->msk_if_dev, "Tx FIFO underrun!\n");
 }
}
