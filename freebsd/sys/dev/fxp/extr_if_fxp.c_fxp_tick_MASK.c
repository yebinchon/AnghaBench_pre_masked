
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fxp_softc {scalar_t__ rx_idle_secs; int stat_ch; int * miibus; int ifp; } ;
typedef int if_t ;


 scalar_t__ FUNC_0 (struct fxp_softc*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fxp_softc*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,void (*) (void*),struct fxp_softc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct fxp_softc*,int) ;
 int FUNC_5 (struct fxp_softc*,int ) ;
 int FUNC_6 (struct fxp_softc*) ;
 int FUNC_7 (struct fxp_softc*) ;
 int FUNC_8 (struct fxp_softc*) ;
 int VAR_5 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(void *VAR_6)
{
 struct fxp_softc *VAR_7 = VAR_6;
 if_t VAR_8 = VAR_7->ifp;

 FUNC_1(VAR_7, VAR_4);


 FUNC_7(VAR_7);
 FUNC_6(VAR_7);
 if (VAR_7->rx_idle_secs > VAR_1) {
  VAR_7->rx_idle_secs = 0;
  if ((FUNC_9(VAR_8) & VAR_3) != 0) {
   FUNC_10(VAR_8, 0, VAR_3);
   FUNC_4(VAR_7, 1);
  }
  return;
 }




 if (FUNC_0(VAR_7, VAR_0) == 0) {



  FUNC_5(VAR_7, VAR_2);
 }
 if (VAR_7->miibus != ((void*)0))
  FUNC_11(FUNC_3(VAR_7->miibus));




 FUNC_8(VAR_7);




 FUNC_2(&VAR_7->stat_ch, VAR_5, FUNC_12, VAR_7);
}
