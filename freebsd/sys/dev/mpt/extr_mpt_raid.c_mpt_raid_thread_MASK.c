
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int path; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct mpt_softc {scalar_t__ shutdwn_raid; scalar_t__ raid_wakeup; scalar_t__ raid_rescan; int * raid_thread; int phydisk_sim; int raid_volumes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mpt_softc*) ;
 int FUNC_1 (struct mpt_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mpt_softc*,char*) ;
 scalar_t__ FUNC_5 (struct mpt_softc*) ;
 int FUNC_6 (struct mpt_softc*) ;
 int FUNC_7 (struct mpt_softc*,int *,int ,char*,int ) ;
 int FUNC_8 (int **) ;
 union ccb* FUNC_9 () ;
 int FUNC_10 (int *,int *,int ,int ,int ) ;
 int FUNC_11 (union ccb*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (union ccb*) ;

__attribute__((used)) static void
FUNC_14(void *VAR_5)
{
 struct mpt_softc *VAR_6;
 int VAR_7;

 VAR_6 = (struct mpt_softc *)VAR_5;
 VAR_7 = 1;
 FUNC_0(VAR_6);
 while (VAR_6->shutdwn_raid == 0) {

  if (VAR_6->raid_wakeup == 0) {
   FUNC_7(VAR_6, &VAR_6->raid_volumes, VAR_3, "idle", 0);
   continue;
  }

  VAR_6->raid_wakeup = 0;

  if (FUNC_5(VAR_6)) {
   FUNC_6(VAR_6);
   continue;
  }





  if (VAR_7) {
   VAR_7 = 0;
   FUNC_12(VAR_6->phydisk_sim, VAR_4);
  }

  if (VAR_6->raid_rescan != 0) {
   union ccb *VAR_8;
   int VAR_9;

   VAR_6->raid_rescan = 0;
   FUNC_1(VAR_6);

   VAR_8 = FUNC_9();

   FUNC_0(VAR_6);
   VAR_9 = FUNC_10(&VAR_8->ccb_h.path, ((void*)0),
       FUNC_2(VAR_6->phydisk_sim),
       VAR_2, VAR_0);
   if (VAR_9 != VAR_1) {
    FUNC_11(VAR_8);
    FUNC_4(VAR_6, "Unable to rescan RAID Bus!\n");
   } else {
    FUNC_13(VAR_8);
   }
  }
 }
 VAR_6->raid_thread = ((void*)0);
 FUNC_8(&VAR_6->raid_thread);
 FUNC_1(VAR_6);
 FUNC_3(0);
}
