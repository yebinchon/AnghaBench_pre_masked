
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpr_usr_command {int req_len; int rpl_len; } ;
struct mpr_command {scalar_t__ cm_sglsize; int * cm_sge; scalar_t__ cm_req; } ;
typedef int MPI2_IOC_FACTS_REQUEST ;
typedef int MPI2_IOC_FACTS_REPLY ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct mpr_command *VAR_1, struct mpr_usr_command *VAR_2)
{
 MPI2_IOC_FACTS_REQUEST *VAR_3 = (void *)VAR_1->cm_req;
 MPI2_IOC_FACTS_REPLY *VAR_4;

 if (VAR_2->req_len != sizeof *VAR_3)
  return (VAR_0);
 if (VAR_2->rpl_len != sizeof *VAR_4)
  return (VAR_0);

 VAR_1->cm_sge = ((void*)0);
 VAR_1->cm_sglsize = 0;
 return (0);
}
