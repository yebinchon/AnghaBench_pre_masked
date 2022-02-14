
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bge_softc {int bge_flags; int * bge_miibus; int bge_ifmedia; int bge_intr_task; scalar_t__ bge_tq; int bge_stat_ch; int bge_ifp; } ;
typedef int if_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bge_softc*) ;
 int FUNC_1 (struct bge_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct bge_softc*) ;
 int FUNC_3 (struct bge_softc*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 struct bge_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_2)
{
 struct bge_softc *VAR_3;
 if_t VAR_4;

 VAR_3 = FUNC_7(VAR_2);
 VAR_4 = VAR_3->bge_ifp;






 if (FUNC_8(VAR_2)) {
  FUNC_9(VAR_4);
  FUNC_0(VAR_3);
  FUNC_3(VAR_3);
  FUNC_1(VAR_3);
  FUNC_5(&VAR_3->bge_stat_ch);
 }

 if (VAR_3->bge_tq)
  FUNC_13(VAR_3->bge_tq, &VAR_3->bge_intr_task);

 if (VAR_3->bge_flags & VAR_0)
  FUNC_12(&VAR_3->bge_ifmedia);
 else if (VAR_3->bge_miibus != ((void*)0)) {
  FUNC_4(VAR_2);
  FUNC_6(VAR_2, VAR_3->bge_miibus);
 }

 FUNC_2(VAR_3);

 return (0);
}
