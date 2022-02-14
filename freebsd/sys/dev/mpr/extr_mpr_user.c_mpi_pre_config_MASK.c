
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpr_usr_command {int req_len; int rpl_len; } ;
struct mpr_command {scalar_t__ cm_req; } ;
struct TYPE_3__ {int PageBufferSGE; } ;
typedef TYPE_1__ MPI2_CONFIG_REQUEST ;
typedef int MPI2_CONFIG_REPLY ;


 int VAR_0 ;
 int FUNC_0 (struct mpr_command*,TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_1(struct mpr_command *VAR_1, struct mpr_usr_command *VAR_2)
{
 MPI2_CONFIG_REQUEST *VAR_3 = (void *)VAR_1->cm_req;
 MPI2_CONFIG_REPLY *VAR_4;

 if (VAR_2->req_len != sizeof *VAR_3)
  return (VAR_0);
 if (VAR_2->rpl_len != sizeof *VAR_4)
  return (VAR_0);

 FUNC_0(VAR_1, VAR_3, &VAR_3->PageBufferSGE);
 return (0);
}
