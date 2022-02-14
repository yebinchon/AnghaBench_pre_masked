
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_3__ {int ds_geom; } ;
struct g_raid3_softc {scalar_t__ sc_state; size_t sc_ndisks; int sc_flags; int sc_provider; scalar_t__ sc_mediasize; struct g_raid3_disk* sc_syncdisk; int sc_name; int sc_lock; TYPE_1__ sc_sync; struct g_raid3_disk* sc_disks; } ;
struct TYPE_4__ {int ds_offset; int ds_inflight; struct g_consumer* ds_consumer; struct bio** ds_bios; } ;
struct g_raid3_disk {scalar_t__ d_state; TYPE_2__ d_sync; int d_flags; } ;
struct g_consumer {scalar_t__ index; struct g_raid3_disk* private; } ;
struct bio {int bio_offset; int bio_length; void* bio_caller1; int bio_to; struct g_consumer* bio_from; int bio_done; scalar_t__ bio_cflags; void* bio_data; int bio_cmd; int * bio_parent; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int,struct bio*,char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_5 ;
 int FUNC_3 (int,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct g_consumer*,int,int ,int ) ;
 struct bio* FUNC_5 () ;
 int FUNC_6 (struct g_consumer*,int ) ;
 int FUNC_7 (struct bio*,struct g_consumer*) ;
 struct g_consumer* FUNC_8 (int ) ;
 int FUNC_9 (struct g_raid3_disk*) ;
 scalar_t__ FUNC_10 (struct g_raid3_softc*,struct bio*) ;
 int FUNC_11 (struct g_raid3_softc*,struct bio*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 void* FUNC_15 (int,int ,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(struct g_raid3_softc *VAR_11)
{
 struct g_raid3_disk *VAR_12;
 struct g_consumer *VAR_13;
 struct bio *VAR_14;
 int VAR_15;
 u_int VAR_16;

 FUNC_12();
 FUNC_16(&VAR_11->sc_lock, VAR_8);

 FUNC_2(VAR_11->sc_state == VAR_2,
     ("Device not in DEGRADED state (%s, %u).", VAR_11->sc_name,
     VAR_11->sc_state));
 FUNC_2(VAR_11->sc_syncdisk == ((void*)0), ("Syncdisk is not NULL (%s, %u).",
     VAR_11->sc_name, VAR_11->sc_state));
 VAR_12 = ((void*)0);
 for (VAR_16 = 0; VAR_16 < VAR_11->sc_ndisks; VAR_16++) {
  if (VAR_11->sc_disks[VAR_16].d_state != VAR_4)
   continue;
  VAR_12 = &VAR_11->sc_disks[VAR_16];
  break;
 }
 if (VAR_12 == ((void*)0))
  return;

 FUNC_18(&VAR_11->sc_lock);
 FUNC_13();
 VAR_13 = FUNC_8(VAR_11->sc_sync.ds_geom);
 VAR_15 = FUNC_6(VAR_13, VAR_11->sc_provider);
 FUNC_2(VAR_15 == 0,
     ("Cannot attach to %s (error=%d).", VAR_11->sc_name, VAR_15));
 VAR_15 = FUNC_4(VAR_13, 1, 0, 0);
 FUNC_2(VAR_15 == 0, ("Cannot open %s (error=%d).", VAR_11->sc_name, VAR_15));
 FUNC_14();
 FUNC_17(&VAR_11->sc_lock);

 FUNC_0(0, "Device %s: rebuilding provider %s.", VAR_11->sc_name,
     FUNC_9(VAR_12));
 if ((VAR_11->sc_flags & VAR_1) == 0)
  VAR_12->d_flags |= VAR_3;
 FUNC_2(VAR_12->d_sync.ds_consumer == ((void*)0),
     ("Sync consumer already exists (device=%s, disk=%s).",
     VAR_11->sc_name, FUNC_9(VAR_12)));

 VAR_12->d_sync.ds_consumer = VAR_13;
 VAR_12->d_sync.ds_consumer->private = VAR_12;
 VAR_12->d_sync.ds_consumer->index = 0;
 VAR_11->sc_syncdisk = VAR_12;




 VAR_12->d_sync.ds_bios = FUNC_15(sizeof(struct bio *) * VAR_10,
     VAR_6, VAR_7);
 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_14 = FUNC_5();
  VAR_12->d_sync.ds_bios[VAR_16] = VAR_14;
  VAR_14->bio_parent = ((void*)0);
  VAR_14->bio_cmd = VAR_0;
  VAR_14->bio_data = FUNC_15(VAR_5, VAR_6, VAR_7);
  VAR_14->bio_cflags = 0;
  VAR_14->bio_offset = VAR_12->d_sync.ds_offset * (VAR_11->sc_ndisks - 1);
  VAR_14->bio_length = FUNC_3(VAR_5, VAR_11->sc_mediasize - VAR_14->bio_offset);
  VAR_12->d_sync.ds_offset += VAR_14->bio_length / (VAR_11->sc_ndisks - 1);
  VAR_14->bio_done = VAR_9;
  VAR_14->bio_from = VAR_12->d_sync.ds_consumer;
  VAR_14->bio_to = VAR_11->sc_provider;
  VAR_14->bio_caller1 = (void *)(uintptr_t)VAR_16;
 }


 VAR_12->d_sync.ds_inflight = VAR_10;




 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  VAR_14 = VAR_12->d_sync.ds_bios[VAR_16];
  FUNC_1(3, VAR_14, "Sending synchronization request.");
  VAR_12->d_sync.ds_consumer->index++;



  if (FUNC_10(VAR_11, VAR_14))
   FUNC_11(VAR_11, VAR_14);
  else
   FUNC_7(VAR_14, VAR_12->d_sync.ds_consumer);
 }
}
