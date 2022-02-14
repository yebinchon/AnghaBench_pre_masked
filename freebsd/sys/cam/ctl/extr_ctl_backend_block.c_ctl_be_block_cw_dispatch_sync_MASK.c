
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctl_private; } ;
union ctl_io {TYPE_1__ io_hdr; } ;
struct ctl_lba_len_flags {int len; int lba; int flags; } ;
struct ctl_be_lun {int blocksize; } ;
struct ctl_be_block_lun {int (* lun_flush ) (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;struct ctl_be_lun cbe_lun; } ;
struct ctl_be_block_io {int io_len; int io_offset; int io_arg; int ds_trans_type; int bio_cmd; } ;
struct TYPE_4__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (union ctl_io*) ;
 int VAR_3 ;
 int FUNC_2 (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;

__attribute__((used)) static void
FUNC_3(struct ctl_be_block_lun *VAR_4,
       union ctl_io *VAR_5)
{
 struct ctl_be_lun *VAR_6 = &VAR_4->cbe_lun;
 struct ctl_be_block_io *VAR_7;
 struct ctl_lba_len_flags *VAR_8;

 FUNC_0("entered\n");
 VAR_7 = (struct ctl_be_block_io *)FUNC_1(VAR_5)->ptr;
 VAR_8 = (struct ctl_lba_len_flags *)&VAR_5->io_hdr.ctl_private[VAR_1];

 VAR_7->io_len = VAR_8->len * VAR_6->blocksize;
 VAR_7->io_offset = VAR_8->lba * VAR_6->blocksize;
 VAR_7->io_arg = (VAR_8->flags & VAR_3) != 0;
 VAR_7->bio_cmd = VAR_0;
 VAR_7->ds_trans_type = VAR_2;
 FUNC_0("SYNC\n");
 VAR_4->lun_flush(VAR_4, VAR_7);
}
