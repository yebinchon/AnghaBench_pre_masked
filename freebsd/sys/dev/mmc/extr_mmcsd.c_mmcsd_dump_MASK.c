
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct mmcsd_softc {int log_count; int log_time; int rca; int mmcbus; int dev; } ;
struct mmcsd_part {int type; struct mmcsd_softc* sc; } ;
struct disk {int d_sectorsize; struct mmcsd_part* d_drv1; } ;
struct bio {int bio_pblkno; size_t bio_bcount; int bio_cmd; void* bio_data; struct disk* bio_disk; } ;
typedef int off_t ;
typedef int device_t ;
typedef int daddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct mmcsd_softc*) ;
 int FUNC_5 (struct mmcsd_part*,struct bio*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_4, void *VAR_5, vm_offset_t VAR_6, off_t VAR_7,
    size_t VAR_8)
{
 struct bio VAR_9;
 daddr_t VAR_10, VAR_11;
 struct disk *VAR_12;
 struct mmcsd_softc *VAR_13;
 struct mmcsd_part *VAR_14;
 device_t VAR_15, VAR_16;
 int VAR_17;

 VAR_12 = VAR_4;
 VAR_14 = VAR_12->d_drv1;
 VAR_13 = VAR_14->sc;


 if (VAR_8 == 0) {
  VAR_17 = FUNC_4(VAR_13);
  if (VAR_17 != VAR_3)
   return (VAR_1);
  return (0);
 }

 VAR_15 = VAR_13->dev;
 VAR_16 = VAR_13->mmcbus;

 FUNC_3(&VAR_9);
 VAR_9.bio_disk = VAR_12;
 VAR_9.bio_pblkno = VAR_7 / VAR_12->d_sectorsize;
 VAR_9.bio_bcount = VAR_8;
 VAR_9.bio_data = VAR_5;
 VAR_9.bio_cmd = VAR_0;
 VAR_11 = VAR_9.bio_pblkno + VAR_9.bio_bcount / VAR_12->d_sectorsize;
 FUNC_0(VAR_16, VAR_15);
 VAR_17 = FUNC_6(VAR_16, VAR_15, VAR_13->rca, VAR_14->type);
 if (VAR_17 != VAR_3) {
  if (FUNC_7(&VAR_13->log_time, &VAR_13->log_count, VAR_2))
   FUNC_2(VAR_15, "Partition switch error\n");
  FUNC_1(VAR_16, VAR_15);
  return (VAR_1);
 }
 VAR_10 = FUNC_5(VAR_14, &VAR_9);
 FUNC_1(VAR_16, VAR_15);
 return ((VAR_11 < VAR_10) ? VAR_1 : 0);
}
