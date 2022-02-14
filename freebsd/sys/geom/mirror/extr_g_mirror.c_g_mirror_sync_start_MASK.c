
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ds_ndisks; int ds_geom; } ;
struct g_mirror_softc {scalar_t__ sc_state; int sc_flags; TYPE_1__ sc_sync; int sc_name; int sc_lock; int sc_provider; } ;
struct g_mirror_disk_sync {int ds_inflight; struct g_consumer* ds_consumer; struct bio** ds_bios; int ds_offset; } ;
struct g_mirror_disk {scalar_t__ d_state; int d_flags; struct g_mirror_disk_sync d_sync; struct g_mirror_softc* d_softc; } ;
struct g_consumer {int flags; scalar_t__ index; struct g_mirror_disk* private; } ;
struct bio {scalar_t__ bio_length; void* bio_caller1; void* bio_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int,struct bio*,char*) ;
 int FUNC_2 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct g_consumer*,int,int ,int ) ;
 struct bio* FUNC_4 () ;
 int FUNC_5 (struct g_consumer*,int ) ;
 int FUNC_6 (struct bio*,struct g_consumer*) ;
 int FUNC_7 (struct g_mirror_disk*) ;
 scalar_t__ FUNC_8 (struct g_mirror_softc*,struct bio*) ;
 int FUNC_9 (struct g_mirror_softc*,struct bio*) ;
 int FUNC_10 (struct g_mirror_disk*,struct bio*,int ) ;
 int VAR_10 ;
 struct g_consumer* FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 void* FUNC_15 (int,int ,int ) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(struct g_mirror_disk *VAR_11)
{
 struct g_mirror_softc *VAR_12;
 struct g_mirror_disk_sync *VAR_13;
 struct g_consumer *VAR_14;
 struct bio *VAR_15;
 int VAR_16, VAR_17;

 FUNC_12();
 VAR_12 = VAR_11->d_softc;
 VAR_13 = &VAR_11->d_sync;
 FUNC_16(&VAR_12->sc_lock, VAR_9);

 FUNC_2(VAR_11->d_state == VAR_5,
     ("Disk %s is not marked for synchronization.",
     FUNC_7(VAR_11)));
 FUNC_2(VAR_12->sc_state == VAR_3,
     ("Device not in RUNNING state (%s, %u).", VAR_12->sc_name,
     VAR_12->sc_state));

 FUNC_18(&VAR_12->sc_lock);
 FUNC_13();
 VAR_14 = FUNC_11(VAR_12->sc_sync.ds_geom);
 VAR_14->flags |= VAR_1 | VAR_0;
 VAR_16 = FUNC_5(VAR_14, VAR_12->sc_provider);
 FUNC_2(VAR_16 == 0,
     ("Cannot attach to %s (error=%d).", VAR_12->sc_name, VAR_16));
 VAR_16 = FUNC_3(VAR_14, 1, 0, 0);
 FUNC_2(VAR_16 == 0, ("Cannot open %s (error=%d).", VAR_12->sc_name, VAR_16));
 FUNC_14();
 FUNC_17(&VAR_12->sc_lock);

 FUNC_0(0, "Device %s: rebuilding provider %s.", VAR_12->sc_name,
     FUNC_7(VAR_11));
 if ((VAR_12->sc_flags & VAR_2) == 0)
  VAR_11->d_flags |= VAR_4;
 FUNC_2(VAR_13->ds_consumer == ((void*)0),
     ("Sync consumer already exists (device=%s, disk=%s).",
     VAR_12->sc_name, FUNC_7(VAR_11)));

 VAR_13->ds_consumer = VAR_14;
 VAR_13->ds_consumer->private = VAR_11;
 VAR_13->ds_consumer->index = 0;




 VAR_13->ds_bios = FUNC_15(sizeof(struct bio *) * VAR_10,
     VAR_7, VAR_8);
 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
  VAR_15 = FUNC_4();
  VAR_13->ds_bios[VAR_17] = VAR_15;

  VAR_15->bio_data = FUNC_15(VAR_6, VAR_7, VAR_8);
  VAR_15->bio_caller1 = (void *)(uintptr_t)VAR_17;
  FUNC_10(VAR_11, VAR_15, VAR_13->ds_offset);
  VAR_13->ds_offset += VAR_15->bio_length;
 }


 VAR_12->sc_sync.ds_ndisks++;

 VAR_13->ds_inflight = VAR_10;




 for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
  VAR_15 = VAR_13->ds_bios[VAR_17];
  FUNC_1(3, VAR_15, "Sending synchronization request.");
  VAR_13->ds_consumer->index++;



  if (FUNC_8(VAR_12, VAR_15))
   FUNC_9(VAR_12, VAR_15);
  else
   FUNC_6(VAR_15, VAR_13->ds_consumer);
 }
}
