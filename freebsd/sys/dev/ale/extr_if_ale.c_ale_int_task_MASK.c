
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ifnet {int if_drv_flags; int if_snd; } ;
struct TYPE_2__ {int reset_brk_seq; } ;
struct ale_softc {int ale_morework; int ale_int_task; int ale_tq; int ale_dev; TYPE_1__ ale_stats; int ale_process_limit; struct ifnet* ale_ifp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ale_softc*) ;
 int FUNC_1 (struct ale_softc*) ;
 int FUNC_2 (struct ale_softc*,int ) ;
 int FUNC_3 (struct ale_softc*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (struct ale_softc*) ;
 int FUNC_6 (struct ale_softc*,int ) ;
 int FUNC_7 (struct ifnet*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static void
FUNC_10(void *VAR_9, int VAR_10)
{
 struct ale_softc *VAR_11;
 struct ifnet *VAR_12;
 uint32_t VAR_13;
 int VAR_14;

 VAR_11 = (struct ale_softc *)VAR_9;

 VAR_13 = FUNC_2(VAR_11, VAR_1);
 FUNC_0(VAR_11);
 if (VAR_11->ale_morework != 0)
  VAR_13 |= VAR_8;
 if ((VAR_13 & VAR_0) == 0)
  goto done;


 FUNC_3(VAR_11, VAR_1, VAR_13 | VAR_5);

 VAR_12 = VAR_11->ale_ifp;
 VAR_14 = 0;
 if ((VAR_12->if_drv_flags & VAR_4) != 0) {
  VAR_14 = FUNC_6(VAR_11, VAR_11->ale_process_limit);
  if (VAR_14 == VAR_2)
   VAR_11->ale_morework = 1;
  else if (VAR_14 == VAR_3) {
   VAR_11->ale_stats.reset_brk_seq++;
   VAR_12->if_drv_flags &= ~VAR_4;
   FUNC_5(VAR_11);
   FUNC_1(VAR_11);
   return;
  }

  if ((VAR_13 & (VAR_6 | VAR_7)) != 0) {
   if ((VAR_13 & VAR_6) != 0)
    FUNC_8(VAR_11->ale_dev,
        "DMA read error! -- resetting\n");
   if ((VAR_13 & VAR_7) != 0)
    FUNC_8(VAR_11->ale_dev,
        "DMA write error! -- resetting\n");
   VAR_12->if_drv_flags &= ~VAR_4;
   FUNC_5(VAR_11);
   FUNC_1(VAR_11);
   return;
  }
  if (!FUNC_4(&VAR_12->if_snd))
   FUNC_7(VAR_12);
 }

 if (VAR_14 == VAR_2 ||
     (FUNC_2(VAR_11, VAR_1) & VAR_0) != 0) {
  FUNC_1(VAR_11);
  FUNC_9(VAR_11->ale_tq, &VAR_11->ale_int_task);
  return;
 }

done:
 FUNC_1(VAR_11);


 FUNC_3(VAR_11, VAR_1, 0x7FFFFFFF);
}
