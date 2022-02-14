
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tag_type; int* cdb; } ;
union ctl_io {TYPE_1__ scsiio; } ;
struct ctl_be_block_softc {int dummy; } ;
struct ctl_be_block_lun {struct ctl_be_block_softc* softc; } ;
struct ctl_be_block_io {int ds_tag_type; int beio_cont; struct ctl_be_block_lun* lun; union ctl_io* io; } ;
struct TYPE_4__ {void* ptr; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_2__* FUNC_1 (union ctl_io*) ;





 struct ctl_be_block_io* FUNC_2 (struct ctl_be_block_softc*) ;
 int FUNC_3 (struct ctl_be_block_lun*,union ctl_io*) ;
 int FUNC_4 (struct ctl_be_block_lun*,union ctl_io*) ;
 int FUNC_5 (struct ctl_be_block_lun*,union ctl_io*) ;
 int VAR_3 ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7(struct ctl_be_block_lun *VAR_4,
    union ctl_io *VAR_5)
{
 struct ctl_be_block_io *VAR_6;
 struct ctl_be_block_softc *VAR_7;

 FUNC_0("entered\n");

 VAR_7 = VAR_4->softc;
 VAR_6 = FUNC_2(VAR_7);
 VAR_6->io = VAR_5;
 VAR_6->lun = VAR_4;
 VAR_6->beio_cont = VAR_3;
 switch (VAR_5->scsiio.tag_type) {
 case 135:
  VAR_6->ds_tag_type = VAR_1;
  break;
 case 136:
  VAR_6->ds_tag_type = VAR_0;
  break;
 case 133:
 case 134:
 case 137:
 default:
  VAR_6->ds_tag_type = VAR_2;
  break;
 }
 FUNC_1(VAR_5)->ptr = (void *)VAR_6;

 switch (VAR_5->scsiio.cdb[0]) {
 case 132:
 case 131:
  FUNC_3(VAR_4, VAR_5);
  break;
 case 129:
 case 128:
  FUNC_5(VAR_4, VAR_5);
  break;
 case 130:
  FUNC_4(VAR_4, VAR_5);
  break;
 default:
  FUNC_6("Unhandled CDB type %#x", VAR_5->scsiio.cdb[0]);
  break;
 }
}
