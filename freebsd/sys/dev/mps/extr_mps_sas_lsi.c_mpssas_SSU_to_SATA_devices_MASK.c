
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct mpssas_softc* ppriv_ptr1; int path; int target_id; } ;
union ccb {int csio; TYPE_1__ ccb_h; } ;
typedef size_t target_id_t ;
struct mpssas_target {int handle; scalar_t__ stop_at_shutdown; } ;
struct mpssas_softc {int sim; struct mpssas_target* targets; } ;
struct mps_softc {scalar_t__ SSU_refcount; size_t max_devices; int SSU_started; struct mpssas_softc* sassc; } ;
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
 scalar_t__ FUNC_0 () ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int FUNC_2 (struct mps_softc*,int ,char*,...) ;
 int VAR_10 ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,int ,int ,int) ;
 int FUNC_5 (union ccb*) ;
 union ccb* FUNC_6 () ;
 scalar_t__ FUNC_7 (int *,int ,int ,size_t,int ) ;
 int FUNC_8 (union ccb*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ) ;
 int VAR_11 ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void
FUNC_12(struct mps_softc *VAR_12, int VAR_13)
{
 struct mpssas_softc *VAR_14 = VAR_12->sassc;
 union ccb *VAR_15;
 path_id_t VAR_16 = FUNC_1(VAR_14->sim);
 target_id_t VAR_17;
 struct mpssas_target *VAR_18;
 char VAR_19[64];
 int VAR_20;




 VAR_12->SSU_started = VAR_8;
 VAR_12->SSU_refcount = 0;
 for (VAR_17 = 0; VAR_17 < VAR_12->max_devices; VAR_17++) {
  VAR_18 = &VAR_14->targets[VAR_17];
  if (VAR_18->handle == 0x0) {
   continue;
  }

  VAR_15 = FUNC_6();
  if (VAR_15 == ((void*)0)) {
   FUNC_2(VAR_12, VAR_3, "Unable to alloc CCB to stop "
       "unit.\n");
   return;
  }





  if (VAR_18->stop_at_shutdown) {
   if (FUNC_7(&VAR_15->ccb_h.path,
       VAR_11, VAR_16, VAR_17,
       VAR_0) != VAR_1) {
    FUNC_2(VAR_12, VAR_3, "Unable to create "
        "LUN path to stop unit.\n");
    FUNC_8(VAR_15);
    return;
   }
   FUNC_9(VAR_15->ccb_h.path, VAR_19,
       sizeof(VAR_19));

   FUNC_2(VAR_12, VAR_4, "Sending StopUnit: path %s "
       "handle %d\n", VAR_19, VAR_18->handle);






   FUNC_2(VAR_12, VAR_4, "Incrementing SSU count\n");
   VAR_12->SSU_refcount++;
   VAR_15->ccb_h.target_id =
       FUNC_10(VAR_15->ccb_h.path);
   VAR_15->ccb_h.ppriv_ptr1 = VAR_14;
   FUNC_4(&VAR_15->csio,
                  0,
       VAR_10,
       VAR_6,
                VAR_2,
                     0,
                    VAR_2,
       VAR_5,
                  10000);
   FUNC_5(VAR_15);
  }
 }





 VAR_20 = 600;
 if (VAR_13 & VAR_7)
  VAR_20 = 100;







 while (VAR_12->SSU_refcount > 0) {
  FUNC_3("mpswait", VAR_9/10);
  if (FUNC_0())
   FUNC_11(VAR_14->sim);

  if (--VAR_20 == 0) {
   FUNC_2(VAR_12, VAR_3, "Time has expired waiting "
       "for SSU commands to complete.\n");
   break;
  }
 }
}
