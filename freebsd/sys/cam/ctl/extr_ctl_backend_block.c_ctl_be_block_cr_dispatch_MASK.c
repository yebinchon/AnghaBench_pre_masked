
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cdb; } ;
union ctl_io {TYPE_1__ scsiio; } ;
struct ctl_be_block_softc {int dummy; } ;
struct ctl_be_block_lun {int (* get_lba_status ) (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;struct ctl_be_block_softc* softc; } ;
struct ctl_be_block_io {int bio_cmd; int io_len; int ds_tag_type; int ds_trans_type; int (* beio_cont ) (struct ctl_be_block_io*) ;struct ctl_be_block_lun* lun; union ctl_io* io; } ;
struct TYPE_4__ {void* ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (union ctl_io*) ;

 struct ctl_be_block_io* FUNC_2 (struct ctl_be_block_softc*) ;
 int FUNC_3 (struct ctl_be_block_io*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;

__attribute__((used)) static void
FUNC_6(struct ctl_be_block_lun *VAR_2,
    union ctl_io *VAR_3)
{
 struct ctl_be_block_io *VAR_4;
 struct ctl_be_block_softc *VAR_5;

 FUNC_0("entered\n");

 VAR_5 = VAR_2->softc;
 VAR_4 = FUNC_2(VAR_5);
 VAR_4->io = VAR_3;
 VAR_4->lun = VAR_2;
 VAR_4->beio_cont = FUNC_3;
 FUNC_1(VAR_3)->ptr = (void *)VAR_4;

 switch (VAR_3->scsiio.cdb[0]) {
 case 128:
  VAR_4->bio_cmd = -1;
  VAR_4->ds_trans_type = VAR_0;
  VAR_4->ds_tag_type = VAR_1;
  VAR_4->io_len = 0;
  if (VAR_2->get_lba_status)
   VAR_2->get_lba_status(VAR_2, VAR_4);
  else
   FUNC_3(VAR_4);
  break;
 default:
  FUNC_4("Unhandled CDB type %#x", VAR_3->scsiio.cdb[0]);
  break;
 }
}
