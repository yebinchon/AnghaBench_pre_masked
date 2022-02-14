
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct sge_softc {struct ifnet* sge_ifp; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;


 int FUNC_0 (struct sge_softc*,int ) ;
 int FUNC_1 (struct sge_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct sge_softc*) ;
 int FUNC_4 (struct sge_softc*) ;
 int FUNC_5 (struct sge_softc*) ;
 int FUNC_6 (struct ifnet*) ;
 int FUNC_7 (struct sge_softc*) ;

__attribute__((used)) static void
FUNC_8(void *VAR_11)
{
 struct sge_softc *VAR_12;
 struct ifnet *VAR_13;
 uint32_t VAR_14;

 VAR_12 = VAR_11;
 FUNC_3(VAR_12);
 VAR_13 = VAR_12->sge_ifp;

 VAR_14 = FUNC_0(VAR_12, VAR_6);
 if (VAR_14 == 0xFFFFFFFF || (VAR_14 & VAR_10) == 0) {

  FUNC_4(VAR_12);
  return;
 }

 FUNC_1(VAR_12, VAR_6, VAR_14);

 FUNC_1(VAR_12, VAR_5, 0);
 for (;;) {
  if ((VAR_13->if_drv_flags & VAR_0) == 0)
   break;
  if ((VAR_14 & (VAR_1 | VAR_2)) != 0) {
   FUNC_5(VAR_12);

   if ((VAR_14 & VAR_2) != 0)
    FUNC_1(VAR_12, VAR_7,
        0x1a00 | 0x000c | VAR_9 | VAR_8);
  }
  if ((VAR_14 & (VAR_3 | VAR_4)) != 0)
   FUNC_7(VAR_12);
  VAR_14 = FUNC_0(VAR_12, VAR_6);
  if ((VAR_14 & VAR_10) == 0)
   break;

  FUNC_1(VAR_12, VAR_6, VAR_14);
 }
 if ((VAR_13->if_drv_flags & VAR_0) != 0) {

  FUNC_1(VAR_12, VAR_5, VAR_10);
  if (!FUNC_2(&VAR_13->if_snd))
   FUNC_6(VAR_13);
 }
 FUNC_4(VAR_12);
}
