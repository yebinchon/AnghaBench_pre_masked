
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mps_usr_command {int req_len; int rpl_len; } ;
struct mps_command {scalar_t__ cm_req; } ;
struct TYPE_3__ {int SGL; } ;
typedef TYPE_1__ MPI2_SATA_PASSTHROUGH_REQUEST ;
typedef int MPI2_SATA_PASSTHROUGH_REPLY ;


 int VAR_0 ;
 int FUNC_0 (struct mps_command*,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_1(struct mps_command *VAR_1, struct mps_usr_command *VAR_2)
{
 MPI2_SATA_PASSTHROUGH_REQUEST *VAR_3 = (void *)VAR_1->cm_req;
 MPI2_SATA_PASSTHROUGH_REPLY *VAR_4;

 if (VAR_2->req_len != sizeof *VAR_3)
  return (VAR_0);
 if (VAR_2->rpl_len != sizeof *VAR_4)
  return (VAR_0);

 FUNC_0(VAR_1, VAR_3, &VAR_3->SGL);
 return (0);
}
