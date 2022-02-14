
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mps_softc {int dummy; } ;
struct mps_command {scalar_t__ cm_req; } ;
struct TYPE_2__ {int Function; } ;
typedef TYPE_1__ MPI2_SCSI_TASK_MANAGE_REQUEST ;


 int VAR_0 ;
 struct mps_command* FUNC_0 (struct mps_softc*) ;

struct mps_command *
FUNC_1(struct mps_softc *VAR_1)
{
 MPI2_SCSI_TASK_MANAGE_REQUEST *VAR_2;
 struct mps_command *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == ((void*)0))
  return (((void*)0));

 VAR_2 = (MPI2_SCSI_TASK_MANAGE_REQUEST *)VAR_3->cm_req;
 VAR_2->Function = VAR_0;
 return VAR_3;
}
