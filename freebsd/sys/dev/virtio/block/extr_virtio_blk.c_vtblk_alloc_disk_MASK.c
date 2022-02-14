
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vtblk_softc {int vtblk_flags; int vtblk_max_nsegs; int vtblk_write_cache; struct disk* vtblk_disk; int vtblk_dev; } ;
struct TYPE_4__ {int physical_block_exp; int alignment_offset; } ;
struct TYPE_3__ {int heads; int sectors; } ;
struct virtio_blk_config {int capacity; int blk_size; TYPE_2__ topology; TYPE_1__ geometry; } ;
struct disk {int d_flags; int d_mediasize; int d_sectorsize; int d_maxsize; int d_stripesize; int d_stripeoffset; int d_fwheads; int d_fwsectors; int d_dump; int d_hba_subdevice; int d_hba_subvendor; int d_hba_device; int d_hba_vendor; struct vtblk_softc* d_drv1; int d_unit; int d_name; int d_strategy; int d_ioctl; int d_close; int d_open; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 struct disk* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_7 (struct vtblk_softc*,struct virtio_blk_config*) ;

__attribute__((used)) static void
FUNC_8(struct vtblk_softc *VAR_17, struct virtio_blk_config *VAR_18)
{
 device_t VAR_19;
 struct disk *VAR_20;

 VAR_19 = VAR_17->vtblk_dev;

 VAR_17->vtblk_disk = VAR_20 = FUNC_1();
 VAR_20->d_open = VAR_15;
 VAR_20->d_close = VAR_12;
 VAR_20->d_ioctl = VAR_14;
 VAR_20->d_strategy = VAR_16;
 VAR_20->d_name = VAR_9;
 VAR_20->d_unit = FUNC_0(VAR_19);
 VAR_20->d_drv1 = VAR_17;
 VAR_20->d_flags = VAR_0 | VAR_2 |
     VAR_1;
 VAR_20->d_hba_vendor = FUNC_5(VAR_19);
 VAR_20->d_hba_device = FUNC_2(VAR_19);
 VAR_20->d_hba_subvendor = FUNC_4(VAR_19);
 VAR_20->d_hba_subdevice = FUNC_3(VAR_19);

 if ((VAR_17->vtblk_flags & VAR_10) == 0)
  VAR_20->d_dump = VAR_13;


 VAR_20->d_mediasize = VAR_18->capacity * 512;

 if (FUNC_6(VAR_19, VAR_4))
  VAR_20->d_sectorsize = VAR_18->blk_size;
 else
  VAR_20->d_sectorsize = 512;
 VAR_20->d_maxsize = (VAR_17->vtblk_max_nsegs - VAR_11 - 1) *
     VAR_3;
 if (VAR_20->d_maxsize < VAR_3)
  VAR_20->d_maxsize = VAR_3;

 if (FUNC_6(VAR_19, VAR_5)) {
  VAR_20->d_fwsectors = VAR_18->geometry.sectors;
  VAR_20->d_fwheads = VAR_18->geometry.heads;
 }

 if (FUNC_6(VAR_19, VAR_6) &&
     VAR_18->topology.physical_block_exp > 0) {
  VAR_20->d_stripesize = VAR_20->d_sectorsize *
      (1 << VAR_18->topology.physical_block_exp);
  VAR_20->d_stripeoffset = (VAR_20->d_stripesize -
      VAR_18->topology.alignment_offset * VAR_20->d_sectorsize) %
      VAR_20->d_stripesize;
 }

 if (FUNC_7(VAR_17, VAR_18) != 0)
  VAR_17->vtblk_write_cache = VAR_7;
 else
  VAR_17->vtblk_write_cache = VAR_8;
}
