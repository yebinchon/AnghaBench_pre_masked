
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctl_private; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
typedef int uint64_t ;
struct scsi_unmap_desc {int lba; int length; } ;
struct ctl_ptr_len_flags {int len; scalar_t__ ptr; } ;
struct TYPE_4__ {int blocksize; } ;
struct ctl_be_block_lun {TYPE_2__ cbe_lun; int io_lock; int disk_stats; } ;
struct ctl_be_block_io {int io_offset; int io_len; int ds_t0; union ctl_io* io; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ctl_be_block_lun*,struct ctl_be_block_io*,int,int,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct ctl_be_block_lun *VAR_3,
         struct ctl_be_block_io *VAR_4)
{
 union ctl_io *VAR_5;
 struct ctl_ptr_len_flags *VAR_6;
 struct scsi_unmap_desc *VAR_7, *VAR_8;
 uint64_t VAR_9;

 VAR_5 = VAR_4->io;

 FUNC_0("entered\n");

 FUNC_1(&VAR_4->ds_t0);
 FUNC_4(&VAR_3->io_lock);
 FUNC_3(VAR_3->disk_stats, &VAR_4->ds_t0);
 FUNC_5(&VAR_3->io_lock);

 if (VAR_4->io_offset == -1) {
  VAR_4->io_len = 0;
  VAR_6 = (struct ctl_ptr_len_flags *)&VAR_5->io_hdr.ctl_private[VAR_0];
  VAR_7 = (struct scsi_unmap_desc *)VAR_6->ptr;
  VAR_8 = VAR_7 + VAR_6->len / sizeof(*VAR_7);
  for (; VAR_7 < VAR_8; VAR_7++) {
   VAR_9 = (uint64_t)FUNC_6(VAR_7->length) *
       VAR_3->cbe_lun.blocksize;
   VAR_4->io_len += VAR_9;
   FUNC_2(VAR_3, VAR_4,
       FUNC_7(VAR_7->lba) * VAR_3->cbe_lun.blocksize,
       VAR_9, (VAR_8 - VAR_7 < 2) ? VAR_2 : VAR_1);
  }
 } else
  FUNC_2(VAR_3, VAR_4,
      VAR_4->io_offset, VAR_4->io_len, VAR_2);
}
