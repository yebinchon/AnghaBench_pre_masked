
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int initid; int targ_port; int targ_lun; int targ_mapped_lun; } ;
struct TYPE_3__ {TYPE_2__ nexus; } ;
union ctl_io {TYPE_1__ io_hdr; } ;


 int FUNC_0 (char*,int,char*,int,int,int,int) ;

void
FUNC_1(union ctl_io *VAR_0, char *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1, VAR_2, "(%u:%u:%u/%u): ",
     VAR_0->io_hdr.nexus.initid, VAR_0->io_hdr.nexus.targ_port,
     VAR_0->io_hdr.nexus.targ_lun, VAR_0->io_hdr.nexus.targ_mapped_lun);
}
