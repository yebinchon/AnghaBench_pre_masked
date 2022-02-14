
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msk_softc {int dummy; } ;
struct msk_if_softc {int msk_ifp; int msk_port; struct msk_softc* msk_softc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct msk_softc*,int ,int ) ;
 int FUNC_2 (struct msk_softc*,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct msk_if_softc *VAR_5, int VAR_6, int VAR_7)
{
 struct msk_softc *VAR_8;
 int VAR_9, VAR_10;

 VAR_8 = VAR_5->msk_softc;

        FUNC_2(VAR_8, VAR_5->msk_port, VAR_0,
     FUNC_3(VAR_6) | FUNC_4(VAR_7) | VAR_1);

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  FUNC_0(1);
  VAR_10 = FUNC_1(VAR_8, VAR_5->msk_port, VAR_0);
  if ((VAR_10 & VAR_2) != 0) {
   VAR_10 = FUNC_1(VAR_8, VAR_5->msk_port, VAR_3);
   break;
  }
 }

 if (VAR_9 == VAR_4) {
  FUNC_5(VAR_5->msk_ifp, "phy failed to come ready\n");
  VAR_10 = 0;
 }

 return (VAR_10);
}
