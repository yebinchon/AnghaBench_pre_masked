
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ifnet {int if_drv_flags; int if_snd; } ;
struct bfe_softc {int bfe_dev; struct ifnet* bfe_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bfe_softc*) ;
 int FUNC_1 (struct bfe_softc*) ;
 int FUNC_2 (struct bfe_softc*,int ) ;
 int FUNC_3 (struct bfe_softc*,int ,int) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct bfe_softc*) ;
 int FUNC_6 (struct bfe_softc*) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (struct bfe_softc*) ;
 int FUNC_9 (struct bfe_softc*) ;
 int FUNC_10 (int ,char*) ;

__attribute__((used)) static void
FUNC_11(void *VAR_8)
{
 struct bfe_softc *VAR_9 = VAR_8;
 struct ifnet *VAR_10;
 u_int32_t VAR_11;

 VAR_10 = VAR_9->bfe_ifp;

 FUNC_0(VAR_9);

 VAR_11 = FUNC_2(VAR_9, VAR_1);






 VAR_11 &= VAR_0;
 FUNC_3(VAR_9, VAR_1, VAR_11);
 FUNC_2(VAR_9, VAR_1);


 if (VAR_11 == 0 || (VAR_10->if_drv_flags & VAR_7) == 0) {
  FUNC_1(VAR_9);
  return;
 }


 if (VAR_11 & VAR_5)
  FUNC_6(VAR_9);


 if (VAR_11 & VAR_6)
  FUNC_9(VAR_9);

 if (VAR_11 & VAR_4) {

  if (VAR_11 & VAR_3) {
   FUNC_10(VAR_9->bfe_dev, "Descriptor Error\n");
   FUNC_8(VAR_9);
   FUNC_1(VAR_9);
   return;
  }

  if (VAR_11 & VAR_2) {
   FUNC_10(VAR_9->bfe_dev,
       "Descriptor Protocol Error\n");
   FUNC_8(VAR_9);
   FUNC_1(VAR_9);
   return;
  }
  VAR_10->if_drv_flags &= ~VAR_7;
  FUNC_5(VAR_9);
 }


 if (!FUNC_4(&VAR_10->if_snd))
  FUNC_7(VAR_10);

 FUNC_1(VAR_9);
}
