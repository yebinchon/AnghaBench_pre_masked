
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ext_data_filled; int tag_num; } ;
struct TYPE_8__ {int targ_lun; int targ_port; scalar_t__ initid; } ;
struct TYPE_7__ {TYPE_4__ nexus; } ;
union ctl_io {TYPE_2__ scsiio; TYPE_3__ io_hdr; } ;
typedef int uint64_t ;
struct TYPE_5__ {int targ_port; } ;
struct tpcl_softc {int cur_tag_num; TYPE_1__ port; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (union ctl_io*) ;
 struct tpcl_softc VAR_0 ;

int
FUNC_2(union ctl_io *VAR_1, uint64_t VAR_2)
{
 struct tpcl_softc *VAR_3 = &VAR_0;

 VAR_1->io_hdr.nexus.initid = 0;
 VAR_1->io_hdr.nexus.targ_port = VAR_3->port.targ_port;
 VAR_1->io_hdr.nexus.targ_lun = VAR_2;
 VAR_1->scsiio.tag_num = FUNC_0(&VAR_3->cur_tag_num, 1);
 VAR_1->scsiio.ext_data_filled = 0;
 return (FUNC_1(VAR_1));
}
