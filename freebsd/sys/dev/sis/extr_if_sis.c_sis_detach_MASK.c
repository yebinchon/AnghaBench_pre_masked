
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis_softc {int sis_mtx; int * sis_res; scalar_t__ sis_intrhand; scalar_t__ sis_miibus; int sis_stat_ch; struct ifnet* sis_ifp; } ;
struct ifnet {int if_capenable; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct sis_softc*) ;
 int FUNC_2 (struct sis_softc*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,scalar_t__) ;
 struct sis_softc* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*) ;
 int FUNC_11 (struct ifnet*) ;
 int FUNC_12 (struct ifnet*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct sis_softc*) ;
 int VAR_1 ;
 int FUNC_16 (struct sis_softc*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_2)
{
 struct sis_softc *VAR_3;
 struct ifnet *VAR_4;

 VAR_3 = FUNC_8(VAR_2);
 FUNC_0(FUNC_14(&VAR_3->sis_mtx), ("sis mutex not initialized"));
 VAR_4 = VAR_3->sis_ifp;







 if (FUNC_9(VAR_2)) {
  FUNC_1(VAR_3);
  FUNC_16(VAR_3);
  FUNC_2(VAR_3);
  FUNC_6(&VAR_3->sis_stat_ch);
  FUNC_10(VAR_4);
 }
 if (VAR_3->sis_miibus)
  FUNC_7(VAR_2, VAR_3->sis_miibus);
 FUNC_3(VAR_2);

 if (VAR_3->sis_intrhand)
  FUNC_5(VAR_2, VAR_3->sis_res[1], VAR_3->sis_intrhand);
 FUNC_4(VAR_2, VAR_1, VAR_3->sis_res);

 if (VAR_4)
  FUNC_12(VAR_4);

 FUNC_15(VAR_3);

 FUNC_13(&VAR_3->sis_mtx);

 return (0);
}
