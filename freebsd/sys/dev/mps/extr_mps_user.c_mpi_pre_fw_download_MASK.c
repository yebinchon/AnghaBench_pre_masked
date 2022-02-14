
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mps_usr_command {int req_len; int rpl_len; scalar_t__ len; int buf; } ;
struct mps_command {int cm_flags; int cm_data; scalar_t__ cm_req; } ;
struct TYPE_7__ {int MsgFlags; scalar_t__ TotalImageSize; int SGL; } ;
struct TYPE_6__ {int DetailsLength; scalar_t__ ImageSize; scalar_t__ ImageOffset; scalar_t__ ContextSize; } ;
typedef TYPE_1__ MPI2_FW_DOWNLOAD_TCSGE ;
typedef TYPE_2__ MPI2_FW_DOWNLOAD_REQUEST ;
typedef int MPI2_FW_DOWNLOAD_REPLY ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (struct mps_command*,TYPE_2__*,int *) ;
 int FUNC_4 (struct mps_command*,TYPE_1__*,int,int ) ;

__attribute__((used)) static int
FUNC_5(struct mps_command *VAR_4, struct mps_usr_command *VAR_5)
{
 MPI2_FW_DOWNLOAD_REQUEST *VAR_6 = (void *)VAR_4->cm_req;
 MPI2_FW_DOWNLOAD_REPLY *VAR_7;
 MPI2_FW_DOWNLOAD_TCSGE VAR_8;
 int VAR_9;





 FUNC_0(sizeof VAR_6->SGL >= sizeof VAR_8 + VAR_3);

 if (VAR_5->req_len != sizeof *VAR_6)
  return (VAR_0);
 if (VAR_5->rpl_len != sizeof *VAR_7)
  return (VAR_0);

 if (VAR_5->len == 0)
  return (VAR_0);

 VAR_9 = FUNC_2(VAR_5->buf, VAR_4->cm_data, VAR_5->len);
 if (VAR_9 != 0)
  return (VAR_9);

 FUNC_3(VAR_4, VAR_6, &VAR_6->SGL);
 FUNC_1(&VAR_8, sizeof VAR_8);




 if ((VAR_6->MsgFlags & VAR_1) == 0)
  return (VAR_0);
 if (VAR_6->TotalImageSize != VAR_5->len)
  return (VAR_0);





 VAR_8.ContextSize = 0;
 VAR_8.DetailsLength = 12;
 VAR_8.ImageOffset = 0;
 VAR_8.ImageSize = VAR_5->len;

 VAR_4->cm_flags |= VAR_2;

 return (FUNC_4(VAR_4, &VAR_8, sizeof VAR_8, 0));
}
