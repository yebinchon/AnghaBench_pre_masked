
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmcsd_softc {int log_count; int log_time; int rca; int mmcbus; int dev; } ;
struct mmcsd_part {scalar_t__ running; scalar_t__ eend; scalar_t__ eblock; int type; TYPE_1__* disk; scalar_t__ ro; int disk_mtx; int bio_queue; struct mmcsd_softc* sc; } ;
struct bio {scalar_t__ bio_cmd; int bio_resid; int bio_bcount; scalar_t__ bio_pblkno; int bio_flags; void* bio_error; } ;
typedef int device_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_2__ {int d_sectorsize; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct mmcsd_part*) ;
 int FUNC_3 (struct mmcsd_part*) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct bio*) ;
 struct bio* FUNC_6 (int *) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct mmcsd_part*,struct bio*) ;
 int FUNC_10 (struct mmcsd_softc*) ;
 scalar_t__ FUNC_11 (struct mmcsd_part*,struct bio*) ;
 int FUNC_12 (int ,int ,int ,int ) ;
 int FUNC_13 (struct mmcsd_part*,int *,int ,char*,int ) ;
 scalar_t__ FUNC_14 (int *,int *,int ) ;
 int FUNC_15 (struct mmcsd_part*) ;

__attribute__((used)) static void
FUNC_16(void *VAR_10)
{
 daddr_t VAR_11, VAR_12;
 struct mmcsd_part *VAR_13;
 struct mmcsd_softc *VAR_14;
 struct bio *VAR_15;
 device_t VAR_16, VAR_17;
 int VAR_18, VAR_19;

 VAR_13 = VAR_10;
 VAR_14 = VAR_13->sc;
 VAR_16 = VAR_14->dev;
 VAR_17 = VAR_14->mmcbus;

 while (1) {
  FUNC_2(VAR_13);
  do {
   if (VAR_13->running == 0)
    goto out;
   VAR_15 = FUNC_6(&VAR_13->bio_queue);
   if (VAR_15 == ((void*)0))
    FUNC_13(VAR_13, &VAR_13->disk_mtx, VAR_9,
        "mmcsd disk jobqueue", 0);
  } while (VAR_15 == ((void*)0));
  FUNC_3(VAR_13);
  if (FUNC_4(VAR_15->bio_cmd == VAR_2)) {
   if (FUNC_10(VAR_14) != VAR_8) {
    VAR_15->bio_error = VAR_5;
    VAR_15->bio_flags |= VAR_1;
   }
   FUNC_5(VAR_15);
   continue;
  }
  if (VAR_15->bio_cmd != VAR_3 && VAR_13->ro) {
   VAR_15->bio_error = VAR_6;
   VAR_15->bio_resid = VAR_15->bio_bcount;
   VAR_15->bio_flags |= VAR_1;
   FUNC_5(VAR_15);
   continue;
  }
  FUNC_0(VAR_17, VAR_16);
  VAR_19 = VAR_13->disk->d_sectorsize;
  VAR_11 = VAR_15->bio_pblkno;
  VAR_12 = VAR_15->bio_pblkno + (VAR_15->bio_bcount / VAR_19);
  VAR_18 = FUNC_12(VAR_17, VAR_16, VAR_14->rca, VAR_13->type);
  if (VAR_18 != VAR_8) {
   if (FUNC_14(&VAR_14->log_time, &VAR_14->log_count,
       VAR_7))
    FUNC_7(VAR_16, "Partition switch error\n");
   goto release;
  }
  if (VAR_15->bio_cmd == VAR_3 || VAR_15->bio_cmd == VAR_4) {

   if (VAR_11 < VAR_13->eend && VAR_12 > VAR_13->eblock)
    VAR_13->eblock = VAR_13->eend = 0;
   VAR_11 = FUNC_11(VAR_13, VAR_15);
  } else if (VAR_15->bio_cmd == VAR_0) {
   VAR_11 = FUNC_9(VAR_13, VAR_15);
  }
release:
  FUNC_1(VAR_17, VAR_16);
  if (VAR_11 < VAR_12) {
   VAR_15->bio_error = VAR_5;
   VAR_15->bio_resid = (VAR_12 - VAR_11) * VAR_19;
   VAR_15->bio_flags |= VAR_1;
  } else {
   VAR_15->bio_resid = 0;
  }
  FUNC_5(VAR_15);
 }
out:

 VAR_13->running = -1;
 FUNC_3(VAR_13);
 FUNC_15(VAR_13);

 FUNC_8(0);
}
