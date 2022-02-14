
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpr_usr_command {int req_len; int rpl_len; scalar_t__ len; } ;
struct mpr_command {int cm_flags; scalar_t__ cm_req; } ;
struct TYPE_3__ {scalar_t__ ImageSize; int SGL; scalar_t__ ImageOffset; } ;
typedef int MPI2_FW_UPLOAD_REPLY ;
typedef TYPE_1__ MPI25_FW_UPLOAD_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mpr_command*,TYPE_1__*,int *) ;
 int FUNC_1 (struct mpr_command*,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct mpr_command *VAR_2, struct mpr_usr_command *VAR_3)
{
 MPI25_FW_UPLOAD_REQUEST *VAR_4 = (void *)VAR_2->cm_req;
 MPI2_FW_UPLOAD_REPLY *VAR_5;

 if (VAR_3->req_len != sizeof *VAR_4)
  return (VAR_0);
 if (VAR_3->rpl_len != sizeof *VAR_5)
  return (VAR_0);

 FUNC_0(VAR_2, VAR_4, &VAR_4->SGL);
 if (VAR_3->len == 0) {

  return (0);
 }

 VAR_4->ImageOffset = 0;
 VAR_4->ImageSize = VAR_3->len;

 VAR_2->cm_flags |= VAR_1;

 return (FUNC_1(VAR_2, &VAR_4->SGL, 0));
}
