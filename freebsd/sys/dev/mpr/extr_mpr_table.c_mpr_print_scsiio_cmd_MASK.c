
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpr_softc {int dummy; } ;
struct mpr_command {scalar_t__ cm_req; } ;
struct TYPE_2__ {int SGLOffset0; } ;
typedef TYPE_1__ MPI2_SCSI_IO_REQUEST ;


 int FUNC_0 (struct mpr_softc*,struct mpr_command*,int ) ;

void
FUNC_1(struct mpr_softc *VAR_0, struct mpr_command *VAR_1)
{
 MPI2_SCSI_IO_REQUEST *VAR_2;

 VAR_2 = (MPI2_SCSI_IO_REQUEST *)VAR_1->cm_req;
 FUNC_0(VAR_0, VAR_1, VAR_2->SGLOffset0);
}
