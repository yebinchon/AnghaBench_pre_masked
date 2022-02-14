
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int kern_sg_entries; size_t ext_data_filled; size_t kern_data_len; int * kern_data_ptr; } ;
union ctl_io {TYPE_2__ io_hdr; TYPE_1__ scsiio; } ;
typedef int uint8_t ;
typedef size_t uint32_t ;
typedef int u_int16_t ;
struct ctlfe_softc {size_t maxio; } ;
struct ctlfe_lun_softc {struct ctlfe_softc* parent_softc; } ;
struct ctlfe_cmd_info {int cur_transfer_index; size_t cur_transfer_off; int flags; TYPE_3__* cam_sglist; } ;
struct ctl_sg_entry {size_t len; scalar_t__ addr; } ;
typedef int ccb_flags ;
struct TYPE_6__ {size_t ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
typedef scalar_t__ bus_addr_t ;


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
 int VAR_12 ;
 struct ctlfe_cmd_info* FUNC_0 (union ctl_io*) ;

__attribute__((used)) static void
FUNC_1(struct ctlfe_lun_softc *VAR_13, union ctl_io *VAR_14,
    ccb_flags *VAR_15, uint8_t **VAR_16, uint32_t *VAR_17,
    u_int16_t *VAR_18)
{
 struct ctlfe_softc *VAR_19;
 struct ctlfe_cmd_info *VAR_20;
 struct ctl_sg_entry *VAR_21;
 bus_dma_segment_t *VAR_22;
 size_t VAR_23;
 int VAR_24, VAR_25;

 VAR_20 = FUNC_0(VAR_14);
 VAR_19 = VAR_13->parent_softc;




 *VAR_15 &= ~VAR_6;
 if ((VAR_14->io_hdr.flags & VAR_12) == VAR_11)
  *VAR_15 |= VAR_5;
 else
  *VAR_15 |= VAR_7;

 *VAR_15 &= ~VAR_0;
 VAR_25 = VAR_20->cur_transfer_index;
 VAR_23 = VAR_20->cur_transfer_off;
 VAR_20->flags &= ~VAR_8;
 if (VAR_14->scsiio.kern_sg_entries == 0) {


  VAR_23 += VAR_14->scsiio.ext_data_filled;
  VAR_14->scsiio.ext_data_filled = 0;

  *VAR_16 = VAR_14->scsiio.kern_data_ptr + VAR_23;
  if (VAR_14->scsiio.kern_data_len - VAR_23 <= VAR_19->maxio) {
   *VAR_17 = VAR_14->scsiio.kern_data_len - VAR_23;
  } else {
   *VAR_17 = VAR_19->maxio;
   VAR_20->cur_transfer_off += VAR_19->maxio;
   VAR_20->flags |= VAR_8;
  }
  *VAR_18 = 0;

  if (VAR_14->io_hdr.flags & VAR_10)
   *VAR_15 |= VAR_1;
  else
   *VAR_15 |= VAR_4;
 } else {
  VAR_21 = (struct ctl_sg_entry *)VAR_14->scsiio.kern_data_ptr;


  while (VAR_14->scsiio.ext_data_filled >= VAR_21[VAR_25].len - VAR_23) {
   VAR_14->scsiio.ext_data_filled -= VAR_21[VAR_25].len - VAR_23;
   VAR_25++;
   VAR_23 = 0;
  }
  VAR_23 += VAR_14->scsiio.ext_data_filled;
  VAR_14->scsiio.ext_data_filled = 0;

  VAR_22 = VAR_20->cam_sglist;
  *VAR_17 = 0;
  for (VAR_24 = 0; VAR_24 < VAR_14->scsiio.kern_sg_entries - VAR_25; VAR_24++) {
   VAR_22[VAR_24].ds_addr = (bus_addr_t)(uintptr_t)VAR_21[VAR_24 + VAR_25].addr + VAR_23;
   if (VAR_21[VAR_24 + VAR_25].len - VAR_23 <= VAR_19->maxio - *VAR_17) {
    VAR_22[VAR_24].ds_len = VAR_21[VAR_25 + VAR_24].len - VAR_23;
    *VAR_17 += VAR_22[VAR_24].ds_len;
   } else {
    VAR_22[VAR_24].ds_len = VAR_19->maxio - *VAR_17;
    VAR_20->cur_transfer_index = VAR_25 + VAR_24;
    VAR_20->cur_transfer_off = VAR_22[VAR_24].ds_len + VAR_23;
    VAR_20->flags |= VAR_8;
    *VAR_17 += VAR_22[VAR_24].ds_len;
    if (VAR_21[VAR_24].len != 0)
     VAR_24++;
    break;
   }
   if (VAR_24 == (VAR_9 - 1) &&
       VAR_25 + VAR_24 < (VAR_14->scsiio.kern_sg_entries - 1)) {
    VAR_20->cur_transfer_index = VAR_25 + VAR_24 + 1;
    VAR_20->cur_transfer_off = 0;
    VAR_20->flags |= VAR_8;
    VAR_24++;
    break;
   }
   VAR_23 = 0;
  }
  *VAR_18 = VAR_24;
  if (VAR_14->io_hdr.flags & VAR_10)
   *VAR_15 |= VAR_3;
  else
   *VAR_15 |= VAR_2;
  *VAR_16 = (uint8_t *)VAR_22;
 }
}
