
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct promise_raid_conf {scalar_t__ generation; int volume_id; int array_number; } ;
struct g_raid_volume {struct g_raid_md_promise_pervolume* v_md_data; } ;
struct g_raid_softc {struct g_raid_md_object* sc_md; } ;
struct g_raid_md_promise_pervolume {scalar_t__ pv_generation; int pv_disks_present; TYPE_1__* pv_meta; scalar_t__ pv_started; int pv_start_co; int pv_id; } ;
struct g_raid_md_promise_perdisk {int pd_subdisks; struct promise_raid_conf** pd_meta; } ;
struct g_raid_md_object {int dummy; } ;
struct g_raid_disk {scalar_t__ d_md_data; struct g_raid_softc* d_softc; } ;
typedef scalar_t__ int16_t ;
struct TYPE_3__ {scalar_t__ generation; int total_disks; } ;


 int FUNC_0 (int,struct g_raid_softc*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int,int ,struct g_raid_volume*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct g_raid_disk*,int ) ;
 struct g_raid_volume* FUNC_5 (struct g_raid_softc*,char*,int ) ;
 struct g_raid_volume* FUNC_6 (struct g_raid_softc*,int ) ;
 int FUNC_7 (struct g_raid_softc*) ;
 int FUNC_8 (struct g_raid_volume*) ;
 scalar_t__ FUNC_9 (struct g_raid_disk*,int,struct g_raid_volume*) ;
 int FUNC_10 (struct g_raid_md_object*,struct g_raid_volume*,int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct g_raid_md_promise_pervolume* FUNC_11 (int,int ,int) ;
 TYPE_1__* FUNC_12 (struct promise_raid_conf*) ;
 int FUNC_13 (struct promise_raid_conf*,char*) ;

__attribute__((used)) static void
FUNC_14(struct g_raid_disk *VAR_7)
{
 struct g_raid_softc *VAR_8;
 struct g_raid_md_object *VAR_9;
 struct promise_raid_conf *VAR_10;
 struct g_raid_md_promise_perdisk *VAR_11;
 struct g_raid_md_promise_pervolume *VAR_12;
 struct g_raid_volume *VAR_13;
 int VAR_14;
 char VAR_15[33];

 VAR_8 = VAR_7->d_softc;
 VAR_9 = VAR_8->sc_md;
 VAR_11 = (struct g_raid_md_promise_perdisk *)VAR_7->d_md_data;

 if (VAR_11->pd_subdisks == 0) {
  FUNC_4(VAR_7, VAR_0);
  FUNC_7(VAR_8);
  return;
 }

 for (VAR_14 = 0; VAR_14 < VAR_11->pd_subdisks; VAR_14++) {
  VAR_10 = VAR_11->pd_meta[VAR_14];


  VAR_13 = FUNC_6(VAR_8, VAR_10->volume_id);
  if (VAR_13 == ((void*)0)) {
   FUNC_13(VAR_10, VAR_15);
   VAR_13 = FUNC_5(VAR_8, VAR_15, VAR_10->array_number);
   VAR_12 = FUNC_11(sizeof(*VAR_12), VAR_1, VAR_2 | VAR_3);
   VAR_12->pv_id = VAR_10->volume_id;
   VAR_13->v_md_data = VAR_12;
   FUNC_1(&VAR_12->pv_start_co, 1);
   FUNC_2(&VAR_12->pv_start_co,
       VAR_5 * VAR_6,
       VAR_4, VAR_13);
  } else
   VAR_12 = VAR_13->v_md_data;


  if (VAR_12->pv_meta == ((void*)0) || !VAR_12->pv_started) {
   if (VAR_12->pv_meta == ((void*)0) ||
       ((int16_t)(VAR_10->generation - VAR_12->pv_generation)) > 0) {
    FUNC_0(1, VAR_8, "Newer disk");
    if (VAR_12->pv_meta != ((void*)0))
     FUNC_3(VAR_12->pv_meta, VAR_1);
    VAR_12->pv_meta = FUNC_12(VAR_10);
    VAR_12->pv_generation = VAR_12->pv_meta->generation;
    VAR_12->pv_disks_present = 1;
   } else if (VAR_10->generation == VAR_12->pv_generation) {
    VAR_12->pv_disks_present++;
    FUNC_0(1, VAR_8, "Matching disk (%d of %d up)",
        VAR_12->pv_disks_present,
        VAR_12->pv_meta->total_disks);
   } else {
    FUNC_0(1, VAR_8, "Older disk");
   }
  }
 }

 for (VAR_14 = 0; VAR_14 < VAR_11->pd_subdisks; VAR_14++) {
  VAR_10 = VAR_11->pd_meta[VAR_14];


  VAR_13 = FUNC_6(VAR_8, VAR_10->volume_id);
  if (VAR_13 == ((void*)0))
   continue;
  VAR_12 = VAR_13->v_md_data;

  if (VAR_12->pv_started) {
   if (FUNC_9(VAR_7, VAR_14, VAR_13))
    FUNC_10(VAR_9, VAR_13, ((void*)0), ((void*)0));
  } else {

   if (VAR_12->pv_disks_present == VAR_12->pv_meta->total_disks)
    FUNC_8(VAR_13);
  }
 }
}
