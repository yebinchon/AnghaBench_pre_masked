
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
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(struct msk_if_softc *VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
 struct msk_softc *VAR_8;
 int VAR_9;

 VAR_8 = VAR_4->msk_softc;

 FUNC_2(VAR_8, VAR_4->msk_port, VAR_2, VAR_7);
        FUNC_2(VAR_8, VAR_4->msk_port, VAR_0,
     FUNC_3(VAR_5) | FUNC_4(VAR_6));
 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  FUNC_0(1);
  if ((FUNC_1(VAR_8, VAR_4->msk_port, VAR_0) &
      VAR_1) == 0)
   break;
 }
 if (VAR_9 == VAR_3)
  FUNC_5(VAR_4->msk_ifp, "phy write timeout\n");

 return (0);
}
