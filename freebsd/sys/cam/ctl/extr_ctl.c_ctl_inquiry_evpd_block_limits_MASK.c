
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint64_t ;
struct scsi_vpd_block_limits {int device; int max_cmp_write_len; int flags; int max_write_same_length; int max_atomic_boundary_size; int max_atomic_transfer_length_with_atomic_boundary; int atomic_transfer_length_granularity; int atomic_alignment; int max_atomic_transfer_length; int unmap_grain_align; int opt_unmap_grain; int max_unmap_blk_cnt; int max_unmap_lba_cnt; int opt_txfer_len; int max_txfer_len; int page_length; int page_code; } ;
struct TYPE_4__ {int flags; } ;
struct ctl_scsiio {int be_move_done; TYPE_2__ io_hdr; int kern_data_len; int kern_total_len; scalar_t__ kern_sg_entries; scalar_t__ kern_rel_offset; scalar_t__ kern_data_ptr; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_3__ {int lun_type; int opttxferlen; int flags; int ublockexp; int ublockoff; int atomicblock; int maxlba; int options; } ;


 int VAR_0 ;
 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
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
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (char const*,int*) ;
 int FUNC_3 (struct ctl_scsiio*) ;
 char* FUNC_4 (int ,char*,int *) ;
 scalar_t__ FUNC_5 (int,int ,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (int,int ) ;

__attribute__((used)) static int
FUNC_10(struct ctl_scsiio *VAR_13, int VAR_14)
{
 struct ctl_lun *VAR_15 = FUNC_0(VAR_13);
 struct scsi_vpd_block_limits *VAR_16;
 const char *VAR_17;
 uint64_t VAR_18;

 VAR_13->kern_data_ptr = FUNC_5(sizeof(*VAR_16), VAR_3, VAR_4 | VAR_5);
 VAR_16 = (struct scsi_vpd_block_limits *)VAR_13->kern_data_ptr;
 VAR_13->kern_sg_entries = 0;
 VAR_13->kern_rel_offset = 0;
 VAR_13->kern_sg_entries = 0;
 VAR_13->kern_data_len = FUNC_6(sizeof(*VAR_16), VAR_14);
 VAR_13->kern_total_len = VAR_13->kern_data_len;






 if (VAR_15 != ((void*)0))
  VAR_16->device = (VAR_6 << 5) |
      VAR_15->be_lun->lun_type;
 else
  VAR_16->device = (VAR_7 << 5) | VAR_10;

 VAR_16->page_code = VAR_8;
 FUNC_8(sizeof(*VAR_16) - 4, VAR_16->page_length);
 VAR_16->max_cmp_write_len = 0xff;
 FUNC_9(0xffffffff, VAR_16->max_txfer_len);
 if (VAR_15 != ((void*)0)) {
  FUNC_9(VAR_15->be_lun->opttxferlen, VAR_16->opt_txfer_len);
  if (VAR_15->be_lun->flags & VAR_1) {
   VAR_18 = 0xffffffff;
   VAR_17 = FUNC_4(VAR_15->be_lun->options,
       "unmap_max_lba", ((void*)0));
   if (VAR_17 != ((void*)0))
    FUNC_2(VAR_17, &VAR_18);
   FUNC_9(VAR_18, VAR_16->max_unmap_lba_cnt);
   VAR_18 = 0xffffffff;
   VAR_17 = FUNC_4(VAR_15->be_lun->options,
       "unmap_max_descr", ((void*)0));
   if (VAR_17 != ((void*)0))
    FUNC_2(VAR_17, &VAR_18);
   FUNC_9(VAR_18, VAR_16->max_unmap_blk_cnt);
   if (VAR_15->be_lun->ublockexp != 0) {
    FUNC_9((1 << VAR_15->be_lun->ublockexp),
        VAR_16->opt_unmap_grain);
    FUNC_9(0x80000000 | VAR_15->be_lun->ublockoff,
        VAR_16->unmap_grain_align);
   }
  }
  FUNC_9(VAR_15->be_lun->atomicblock,
      VAR_16->max_atomic_transfer_length);
  FUNC_9(0, VAR_16->atomic_alignment);
  FUNC_9(0, VAR_16->atomic_transfer_length_granularity);
  FUNC_9(0, VAR_16->max_atomic_transfer_length_with_atomic_boundary);
  FUNC_9(0, VAR_16->max_atomic_boundary_size);
  VAR_18 = VAR_11;
  VAR_17 = FUNC_4(VAR_15->be_lun->options,
      "write_same_max_lba", ((void*)0));
  if (VAR_17 != ((void*)0))
   FUNC_2(VAR_17, &VAR_18);
  FUNC_7(VAR_18, VAR_16->max_write_same_length);
  if (VAR_15->be_lun->maxlba + 1 > VAR_18)
   VAR_16->flags |= VAR_9;
 }

 FUNC_3(VAR_13);
 VAR_13->io_hdr.flags |= VAR_0;
 VAR_13->be_move_done = VAR_12;
 FUNC_1((union ctl_io *)VAR_13);
 return (VAR_2);
}
