
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mpr_usr_command {int req_len; int rpl_len; scalar_t__ len; int buf; } ;
struct mpr_command {int cm_flags; int cm_data; scalar_t__ cm_req; } ;
struct TYPE_3__ {int MsgFlags; scalar_t__ TotalImageSize; scalar_t__ ImageSize; int SGL; scalar_t__ ImageOffset; } ;
typedef int MPI2_FW_DOWNLOAD_REPLY ;
typedef TYPE_1__ MPI25_FW_DOWNLOAD_REQUEST ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct mpr_command*,TYPE_1__*,int *) ;
 int FUNC_2 (struct mpr_command*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct mpr_command *VAR_3, struct mpr_usr_command *VAR_4)
{
 MPI25_FW_DOWNLOAD_REQUEST *VAR_5 = (void *)VAR_3->cm_req;
 MPI2_FW_DOWNLOAD_REPLY *VAR_6;
 int VAR_7;

 if (VAR_4->req_len != sizeof *VAR_5)
  return (VAR_0);
 if (VAR_4->rpl_len != sizeof *VAR_6)
  return (VAR_0);

 if (VAR_4->len == 0)
  return (VAR_0);

 VAR_7 = FUNC_0(VAR_4->buf, VAR_3->cm_data, VAR_4->len);
 if (VAR_7 != 0)
  return (VAR_7);

 FUNC_1(VAR_3, VAR_5, &VAR_5->SGL);




 if ((VAR_5->MsgFlags & VAR_1) == 0)
  return (VAR_0);
 if (VAR_5->TotalImageSize != VAR_4->len)
  return (VAR_0);

 VAR_5->ImageOffset = 0;
 VAR_5->ImageSize = VAR_4->len;

 VAR_3->cm_flags |= VAR_2;

 return (FUNC_2(VAR_3, &VAR_5->SGL, 0));
}
