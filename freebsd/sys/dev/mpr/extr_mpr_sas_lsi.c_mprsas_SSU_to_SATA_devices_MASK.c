
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mprsas_softc* ppriv_ptr1; int path; int target_id; } ;
union ccb {int csio; TYPE_1__ ccb_h; } ;
typedef size_t target_id_t ;
struct mprsas_target {int handle; scalar_t__ stop_at_shutdown; } ;
struct mprsas_softc {int sim; struct mprsas_target* targets; } ;
struct mpr_softc {scalar_t__ SSU_refcount; size_t max_devices; int SSU_started; struct mprsas_softc* sassc; } ;
typedef int path_str ;
typedef int path_id_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 () ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int VAR_10 ;
 int FUNC_2 (struct mpr_softc*,int ,char*,...) ;
 int FUNC_3 (struct mpr_softc*) ;
 int FUNC_4 (struct mpr_softc*) ;
 int VAR_11 ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int *,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_7 (union ccb*) ;
 union ccb* FUNC_8 () ;
 scalar_t__ FUNC_9 (int *,int ,int ,size_t,int ) ;
 int FUNC_10 (union ccb*) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ) ;
 int VAR_12 ;
 int FUNC_13 (int ) ;

__attribute__((used)) static void
FUNC_14(struct mpr_softc *VAR_13, int VAR_14)
{
 struct mprsas_softc *VAR_15 = VAR_13->sassc;
 union ccb *VAR_16;
 path_id_t VAR_17 = FUNC_1(VAR_15->sim);
 target_id_t VAR_18;
 struct mprsas_target *VAR_19;
 char VAR_20[64];
 int VAR_21;

 FUNC_3(VAR_13);




 VAR_13->SSU_started = VAR_9;
 VAR_13->SSU_refcount = 0;
 for (VAR_18 = 0; VAR_18 < VAR_13->max_devices; VAR_18++) {
  VAR_19 = &VAR_15->targets[VAR_18];
  if (VAR_19->handle == 0x0) {
   continue;
  }





  if (VAR_19->stop_at_shutdown) {
   VAR_16 = FUNC_8();
   if (VAR_16 == ((void*)0)) {
    FUNC_2(VAR_13, VAR_4, "Unable to alloc CCB "
        "to stop unit.\n");
    return;
   }

   if (FUNC_9(&VAR_16->ccb_h.path, VAR_12,
       VAR_17, VAR_18, VAR_0) !=
       VAR_1) {
    FUNC_2(VAR_13, VAR_3, "Unable to create "
        "path to stop unit.\n");
    FUNC_10(VAR_16);
    return;
   }
   FUNC_11(VAR_16->ccb_h.path, VAR_20,
       sizeof(VAR_20));

   FUNC_2(VAR_13, VAR_5, "Sending StopUnit: path %s "
       "handle %d\n", VAR_20, VAR_19->handle);






   FUNC_2(VAR_13, VAR_5, "Incrementing SSU count\n");
   VAR_13->SSU_refcount++;
   VAR_16->ccb_h.target_id =
       FUNC_12(VAR_16->ccb_h.path);
   VAR_16->ccb_h.ppriv_ptr1 = VAR_15;
   FUNC_6(&VAR_16->csio,
                  0,
       VAR_11,
       VAR_7,
                VAR_2,
                     0,
                    VAR_2,
       VAR_6,
                  10000);
   FUNC_7(VAR_16);
  }
 }

 FUNC_4(VAR_13);





 VAR_21 = 600;
 if (VAR_14 & VAR_8)
  VAR_21 = 100;







 while (VAR_13->SSU_refcount > 0) {
  FUNC_5("mprwait", VAR_10/10);
  if (FUNC_0())
   FUNC_13(VAR_15->sim);

  if (--VAR_21 == 0) {
   FUNC_2(VAR_13, VAR_3, "Time has expired waiting "
       "for SSU commands to complete.\n");
   break;
  }
 }
}
