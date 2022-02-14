
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ctl_private; } ;
union ctl_io {int scsiio; TYPE_1__ io_hdr; } ;
struct ctl_ptr_len_flags {int flags; } ;
struct ctl_be_block_lun {int (* unmap ) (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;} ;
struct ctl_be_block_io {int io_offset; int ds_trans_type; int bio_cmd; scalar_t__ io_len; } ;
struct TYPE_4__ {scalar_t__ ptr; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (union ctl_io*) ;
 int VAR_3 ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (struct ctl_be_block_io*) ;
 int FUNC_4 (int *,int ,int,int ,int ,int ) ;
 int FUNC_5 (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;

__attribute__((used)) static void
FUNC_6(struct ctl_be_block_lun *VAR_4,
       union ctl_io *VAR_5)
{
 struct ctl_be_block_io *VAR_6;
 struct ctl_ptr_len_flags *VAR_7;

 FUNC_0("entered\n");

 VAR_6 = (struct ctl_be_block_io *)FUNC_1(VAR_5)->ptr;
 VAR_7 = (struct ctl_ptr_len_flags *)&VAR_5->io_hdr.ctl_private[VAR_1];

 if ((VAR_7->flags & ~VAR_3) != 0 || VAR_4->unmap == ((void*)0)) {
  FUNC_3(VAR_6);
  FUNC_4(&VAR_5->scsiio,
                        0,
                      1,
                    0,
                        0,
                  0);
  FUNC_2(VAR_5);
  return;
 }

 VAR_6->io_len = 0;
 VAR_6->io_offset = -1;
 VAR_6->bio_cmd = VAR_0;
 VAR_6->ds_trans_type = VAR_2;
 FUNC_0("UNMAP\n");
 VAR_4->unmap(VAR_4, VAR_6);
}
