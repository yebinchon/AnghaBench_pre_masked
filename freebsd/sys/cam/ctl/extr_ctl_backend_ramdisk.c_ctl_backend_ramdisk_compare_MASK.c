
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dma_start_bt; int flags; } ;
struct TYPE_5__ {int kern_data_len; scalar_t__ kern_sg_entries; int kern_data_ptr; int be_move_done; } ;
union ctl_io {TYPE_2__ io_hdr; TYPE_1__ scsiio; } ;
typedef int u_int ;
struct ctl_be_lun {int blocksize; } ;
struct TYPE_8__ {int len; } ;
struct TYPE_7__ {int len; } ;


 TYPE_4__* FUNC_0 (union ctl_io*) ;
 struct ctl_be_lun* FUNC_1 (union ctl_io*) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* FUNC_3 (union ctl_io*) ;
 int VAR_3 ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ,int ) ;

__attribute__((used)) static void
FUNC_7(union ctl_io *VAR_4)
{
 struct ctl_be_lun *VAR_5 = FUNC_1(VAR_4);
 u_int VAR_6, VAR_7;

 VAR_6 = FUNC_0(VAR_4)->len - FUNC_3(VAR_4)->len;
 VAR_6 = FUNC_2(VAR_6, 131072 / VAR_5->blocksize);
 VAR_7 = VAR_6 * VAR_5->blocksize;

 VAR_4->scsiio.be_move_done = VAR_3;
 VAR_4->scsiio.kern_data_ptr = FUNC_6(VAR_7, VAR_1, VAR_2);
 VAR_4->scsiio.kern_data_len = VAR_7;
 VAR_4->scsiio.kern_sg_entries = 0;
 VAR_4->io_hdr.flags |= VAR_0;
 FUNC_3(VAR_4)->len += VAR_6;



 FUNC_4(VAR_4);
}
