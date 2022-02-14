
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet {int dummy; } ;
struct bfe_softc {int bfe_mtx; int * bfe_miibus; int bfe_stat_co; int bfe_flags; struct ifnet* bfe_ifp; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bfe_softc*) ;
 int FUNC_1 (struct bfe_softc*) ;
 int FUNC_2 (struct bfe_softc*) ;
 int FUNC_3 (struct bfe_softc*) ;
 int FUNC_4 (struct bfe_softc*) ;
 int FUNC_5 (struct bfe_softc*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;
 struct bfe_softc* FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_1)
{
 struct bfe_softc *VAR_2;
 struct ifnet *VAR_3;

 VAR_2 = FUNC_9(VAR_1);

 VAR_3 = VAR_2->bfe_ifp;

 if (FUNC_10(VAR_1)) {
  FUNC_0(VAR_2);
  VAR_2->bfe_flags |= VAR_0;
  FUNC_5(VAR_2);
  FUNC_1(VAR_2);
  FUNC_7(&VAR_2->bfe_stat_co);
  if (VAR_3 != ((void*)0))
   FUNC_11(VAR_3);
 }

 FUNC_0(VAR_2);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);

 FUNC_6(VAR_1);
 if (VAR_2->bfe_miibus != ((void*)0))
  FUNC_8(VAR_1, VAR_2->bfe_miibus);

 FUNC_4(VAR_2);
 FUNC_3(VAR_2);
 FUNC_12(&VAR_2->bfe_mtx);

 return (0);
}
