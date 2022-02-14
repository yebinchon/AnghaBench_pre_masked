
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ifnet {int if_drv_flags; int if_snd; } ;
struct alc_softc {int alc_morework; int alc_int_task; int alc_tq; int alc_dev; int alc_process_limit; struct ifnet* alc_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct alc_softc*) ;
 int FUNC_1 (struct alc_softc*) ;
 int FUNC_2 (struct alc_softc*,int ) ;
 int FUNC_3 (struct alc_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (struct alc_softc*) ;
 int FUNC_6 (struct alc_softc*,int ) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(void *VAR_10, int VAR_11)
{
 struct alc_softc *VAR_12;
 struct ifnet *VAR_13;
 uint32_t VAR_14;
 int VAR_15;

 VAR_12 = (struct alc_softc *)VAR_10;
 VAR_13 = VAR_12->alc_ifp;

 VAR_14 = FUNC_2(VAR_12, VAR_1);
 FUNC_0(VAR_12);
 if (VAR_12->alc_morework != 0) {
  VAR_12->alc_morework = 0;
  VAR_14 |= VAR_8;
 }
 if ((VAR_14 & VAR_0) == 0)
  goto done;


 FUNC_3(VAR_12, VAR_1, VAR_14 | VAR_5);

 VAR_15 = 0;
 if ((VAR_13->if_drv_flags & VAR_4) != 0) {
  if ((VAR_14 & VAR_8) != 0) {
   VAR_15 = FUNC_6(VAR_12, VAR_12->alc_process_limit);
   if (VAR_15 == VAR_2)
    VAR_12->alc_morework = 1;
   else if (VAR_15 == VAR_3) {
    VAR_13->if_drv_flags &= ~VAR_4;
    FUNC_5(VAR_12);
    FUNC_1(VAR_12);
    return;
   }
  }
  if ((VAR_14 & (VAR_6 | VAR_7 |
      VAR_9)) != 0) {
   if ((VAR_14 & VAR_6) != 0)
    FUNC_8(VAR_12->alc_dev,
        "DMA read error! -- resetting\n");
   if ((VAR_14 & VAR_7) != 0)
    FUNC_8(VAR_12->alc_dev,
        "DMA write error! -- resetting\n");
   if ((VAR_14 & VAR_9) != 0)
    FUNC_8(VAR_12->alc_dev,
        "TxQ reset! -- resetting\n");
   VAR_13->if_drv_flags &= ~VAR_4;
   FUNC_5(VAR_12);
   FUNC_1(VAR_12);
   return;
  }
  if ((VAR_13->if_drv_flags & VAR_4) != 0 &&
      !FUNC_4(&VAR_13->if_snd))
   FUNC_7(VAR_13);
 }

 if (VAR_15 == VAR_2 ||
     (FUNC_2(VAR_12, VAR_1) & VAR_0) != 0) {
  FUNC_1(VAR_12);
  FUNC_9(VAR_12->alc_tq, &VAR_12->alc_int_task);
  return;
 }

done:
 if ((VAR_13->if_drv_flags & VAR_4) != 0) {

  FUNC_3(VAR_12, VAR_1, 0x7FFFFFFF);
 }
 FUNC_1(VAR_12);
}
