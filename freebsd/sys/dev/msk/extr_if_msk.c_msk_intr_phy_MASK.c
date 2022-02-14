
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct msk_if_softc {int msk_if_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct msk_if_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct msk_if_softc *VAR_3)
{
 uint16_t VAR_4;

 FUNC_1(VAR_3, VAR_0, VAR_1);
 VAR_4 = FUNC_1(VAR_3, VAR_0, VAR_1);

 if ((VAR_4 & VAR_2))
  FUNC_0(VAR_3->msk_if_dev,
      "PHY FIFO underrun/overflow.\n");
}
