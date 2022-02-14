
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct g_raid3_softc {int sc_sectorsize; int sc_mediasize; int sc_flags; int sc_name; int sc_ndisks; int sc_provider; int sc_bump_id; int sc_lock; } ;
struct g_raid3_disk_sync {int ds_offset; int ds_offset_done; struct bio** ds_bios; struct g_consumer* ds_consumer; int ds_inflight; } ;
struct g_raid3_disk {int d_no; struct g_raid3_disk_sync d_sync; struct g_consumer* d_consumer; } ;
struct g_consumer {int acr; int acw; int ace; int index; TYPE_2__* provider; struct g_raid3_disk* private; TYPE_1__* geom; } ;
struct bio {int bio_cmd; int bio_length; int bio_offset; int bio_to; struct g_consumer* bio_from; int * bio_data; int bio_done; int bio_caller1; int bio_error; int bio_inbed; int bio_children; int bio_cflags; int bio_pflags; int * bio_driver2; int bio_driver1; } ;
typedef int off_t ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {struct g_raid3_softc* softc; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,struct bio*,char*,...) ;
 int FUNC_1 (int,char*) ;
 int VAR_5 ;
 int FUNC_2 (int,int) ;
 int VAR_6 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,struct g_consumer*) ;
 int FUNC_7 (struct g_raid3_disk*,int ,int ) ;
 int FUNC_8 (struct g_raid3_softc*,struct g_consumer*) ;
 int FUNC_9 (struct g_raid3_softc*,struct bio*) ;
 int FUNC_10 (struct g_raid3_softc*) ;
 int FUNC_11 (struct g_raid3_softc*,struct bio*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct g_raid3_disk*) ;
 int FUNC_13 (int *,int *,int) ;
 int FUNC_14 (struct bio*) ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;

__attribute__((used)) static void
FUNC_19(struct bio *VAR_9)
{
 struct g_raid3_softc *VAR_10;
 struct g_raid3_disk *VAR_11;

 VAR_9->bio_from->index--;
 VAR_10 = VAR_9->bio_from->geom->softc;
 VAR_11 = VAR_9->bio_from->private;
 if (VAR_11 == ((void*)0)) {
  FUNC_18(&VAR_10->sc_lock);
  FUNC_15();
  FUNC_8(VAR_10, VAR_9->bio_from);
  FUNC_16();
  FUNC_4(VAR_9->bio_data, VAR_6);
  FUNC_5(VAR_9);
  FUNC_17(&VAR_10->sc_lock);
  return;
 }




 switch (VAR_9->bio_cmd) {
 case 129:
     {
  struct g_consumer *VAR_12;
  u_char *VAR_13, *VAR_14;
  off_t VAR_15;
  u_int VAR_16;

  if (VAR_9->bio_error != 0) {
   FUNC_0(0, VAR_9,
       "Synchronization request failed (error=%d).",
       VAR_9->bio_error);
   FUNC_5(VAR_9);
   return;
  }
  FUNC_0(3, VAR_9, "Synchronization request finished.");
  VAR_16 = VAR_10->sc_sectorsize / (VAR_10->sc_ndisks - 1);
  VAR_13 = VAR_14 = VAR_9->bio_data;
  if (VAR_11->d_no == VAR_10->sc_ndisks - 1) {
   u_int VAR_17;


   for (VAR_15 = VAR_9->bio_length; VAR_15 > 0;
       VAR_15 -= VAR_10->sc_sectorsize) {
    FUNC_3(VAR_14, VAR_13, VAR_16);
    VAR_14 += VAR_16;
    for (VAR_17 = 1; VAR_17 < VAR_10->sc_ndisks - 1; VAR_17++) {
     FUNC_13(VAR_14, VAR_13, VAR_16);
     VAR_14 += VAR_16;
    }
    VAR_13 += VAR_16;
   }
  } else {

   VAR_14 += VAR_16 * VAR_11->d_no;
   for (VAR_15 = VAR_9->bio_length; VAR_15 > 0;
       VAR_15 -= VAR_10->sc_sectorsize) {
    FUNC_3(VAR_14, VAR_13, VAR_16);
    VAR_14 += VAR_10->sc_sectorsize;
    VAR_13 += VAR_16;
   }
  }
  VAR_9->bio_driver1 = *(VAR_9->bio_driver2 = ((void*)0));
  VAR_9->bio_pflags = 0;
  VAR_9->bio_offset /= VAR_10->sc_ndisks - 1;
  VAR_9->bio_length /= VAR_10->sc_ndisks - 1;
  VAR_9->bio_cmd = 128;
  VAR_9->bio_cflags = 0;
  VAR_9->bio_children = VAR_9->bio_inbed = 0;
  VAR_12 = VAR_11->d_consumer;
  FUNC_1(VAR_12->acr >= 1 && VAR_12->acw >= 1 && VAR_12->ace >= 1,
      ("Consumer %s not opened (r%dw%de%d).", VAR_12->provider->name,
      VAR_12->acr, VAR_12->acw, VAR_12->ace));
  VAR_12->index++;
  FUNC_6(VAR_9, VAR_12);
  return;
     }
 case 128:
     {
  struct g_raid3_disk_sync *VAR_18;
  off_t VAR_19, VAR_20;
  void *VAR_21;
  int VAR_22;

  if (VAR_9->bio_error != 0) {
   FUNC_0(0, VAR_9,
       "Synchronization request failed (error=%d).",
       VAR_9->bio_error);
   FUNC_5(VAR_9);
   VAR_10->sc_bump_id |= VAR_0;
   FUNC_7(VAR_11,
       VAR_3,
       VAR_4);
   return;
  }
  FUNC_0(3, VAR_9, "Synchronization request finished.");
  VAR_18 = &VAR_11->d_sync;
  if (VAR_18->ds_offset == VAR_10->sc_mediasize / (VAR_10->sc_ndisks - 1) ||
      VAR_18->ds_consumer == ((void*)0) ||
      (VAR_10->sc_flags & VAR_1) != 0) {

   VAR_18->ds_inflight--;
   if (VAR_18->ds_bios != ((void*)0)) {
    VAR_22 = (int)(uintptr_t)VAR_9->bio_caller1;
    VAR_18->ds_bios[VAR_22] = ((void*)0);
   }
   FUNC_4(VAR_9->bio_data, VAR_6);
   FUNC_5(VAR_9);
   if (VAR_18->ds_inflight > 0)
    return;
   if (VAR_18->ds_consumer == ((void*)0) ||
       (VAR_10->sc_flags & VAR_1) != 0) {
    return;
   }



   FUNC_7(VAR_11, VAR_2,
       VAR_4);
   return;
  }


  VAR_21 = VAR_9->bio_data;
  FUNC_14(VAR_9);
  VAR_9->bio_cmd = 129;
  VAR_9->bio_offset = VAR_18->ds_offset * (VAR_10->sc_ndisks - 1);
  VAR_9->bio_length = FUNC_2(VAR_5, VAR_10->sc_mediasize - VAR_9->bio_offset);
  VAR_18->ds_offset += VAR_9->bio_length / (VAR_10->sc_ndisks - 1);
  VAR_9->bio_done = VAR_7;
  VAR_9->bio_data = VAR_21;
  VAR_9->bio_from = VAR_18->ds_consumer;
  VAR_9->bio_to = VAR_10->sc_provider;
  FUNC_0(3, VAR_9, "Sending synchronization request.");
  VAR_18->ds_consumer->index++;



  if (FUNC_9(VAR_10, VAR_9))
   FUNC_11(VAR_10, VAR_9);
  else
   FUNC_6(VAR_9, VAR_18->ds_consumer);


  FUNC_10(VAR_10);


  VAR_20 = VAR_10->sc_mediasize;
  for (VAR_22 = 0; VAR_22 < VAR_8; VAR_22++) {
   VAR_9 = VAR_18->ds_bios[VAR_22];
   VAR_19 = VAR_9->bio_offset;
   if (VAR_9->bio_cmd == 128)
    VAR_19 *= VAR_10->sc_ndisks - 1;
   if (VAR_19 < VAR_20)
    VAR_20 = VAR_19;
  }
  if (VAR_18->ds_offset_done + (VAR_5 * 100) < VAR_20) {

   VAR_18->ds_offset_done = VAR_20;
   FUNC_12(VAR_11);
  }
  return;
     }
 default:
  FUNC_1(1 == 0, ("Invalid command here: %u (device=%s)",
      VAR_9->bio_cmd, VAR_10->sc_name));
  break;
 }
}
