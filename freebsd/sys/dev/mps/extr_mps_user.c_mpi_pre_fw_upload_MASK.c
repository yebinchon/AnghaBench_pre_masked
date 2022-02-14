
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mps_usr_command {int req_len; int rpl_len; int len; } ;
struct mps_command {int cm_flags; scalar_t__ cm_req; } ;
struct TYPE_7__ {int SGL; } ;
struct TYPE_6__ {int DetailsLength; int ImageSize; scalar_t__ ImageOffset; scalar_t__ ContextSize; } ;
typedef TYPE_1__ MPI2_FW_UPLOAD_TCSGE ;
typedef TYPE_2__ MPI2_FW_UPLOAD_REQUEST ;
typedef int MPI2_FW_UPLOAD_REPLY ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (struct mps_command*,TYPE_2__*,int *) ;
 int FUNC_3 (struct mps_command*,TYPE_1__*,int,int ) ;

__attribute__((used)) static int
FUNC_4(struct mps_command *VAR_3, struct mps_usr_command *VAR_4)
{
 MPI2_FW_UPLOAD_REQUEST *VAR_5 = (void *)VAR_3->cm_req;
 MPI2_FW_UPLOAD_REPLY *VAR_6;
 MPI2_FW_UPLOAD_TCSGE VAR_7;





 FUNC_0(sizeof VAR_5->SGL >= sizeof VAR_7 + VAR_2);

 if (VAR_4->req_len != sizeof *VAR_5)
  return (VAR_0);
 if (VAR_4->rpl_len != sizeof *VAR_6)
  return (VAR_0);

 FUNC_2(VAR_3, VAR_5, &VAR_5->SGL);
 FUNC_1(&VAR_7, sizeof VAR_7);





 VAR_7.ContextSize = 0;
 VAR_7.DetailsLength = 12;




 VAR_7.ImageOffset = 0;
 VAR_7.ImageSize = VAR_4->len;

 VAR_3->cm_flags |= VAR_1;

 return (FUNC_3(VAR_3, &VAR_7, sizeof VAR_7, 0));
}
