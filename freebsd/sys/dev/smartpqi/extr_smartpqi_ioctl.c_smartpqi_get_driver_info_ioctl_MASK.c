
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_transfer_size; } ;
struct pqisrc_softstate {TYPE_1__ pqi_cap; int max_io_for_scsi_ml; } ;
struct cdev {struct pqisrc_softstate* si_drv1; } ;
typedef TYPE_2__* pdriver_info ;
typedef int caddr_t ;
struct TYPE_4__ {int max_transfer_length; int max_io; scalar_t__ max_targets; int build_revision; int release_version; int minor_version; int major_version; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void FUNC_1(caddr_t VAR_5, struct cdev *VAR_6)
{
 struct pqisrc_softstate *VAR_7 = VAR_6->si_drv1;
 pdriver_info VAR_8 = (pdriver_info)VAR_5;

 FUNC_0("IN udata = %p cdev = %p\n", VAR_5, VAR_6);

 VAR_8->major_version = VAR_0;
 VAR_8->minor_version = VAR_1;
 VAR_8->release_version = VAR_2;
 VAR_8->build_revision = VAR_3;
 VAR_8->max_targets = VAR_4 - 1;
 VAR_8->max_io = VAR_7->max_io_for_scsi_ml;
 VAR_8->max_transfer_length = VAR_7->pqi_cap.max_transfer_size;

 FUNC_0("OUT\n");
}
