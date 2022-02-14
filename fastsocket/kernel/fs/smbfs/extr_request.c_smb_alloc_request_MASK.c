
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct smb_sb_info {int nr_requests; } ;
struct smb_request {int dummy; } ;
struct TYPE_3__ {int policy; } ;


 int VAR_0 ;
 struct smb_request* FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (struct smb_sb_info*) ;
 int FUNC_5 () ;
 struct smb_request* FUNC_6 (struct smb_sb_info*,int) ;

struct smb_request *FUNC_7(struct smb_sb_info *VAR_4, int VAR_5)
{
 struct smb_request *VAR_6 = ((void*)0);

 for (;;) {
  FUNC_1(&VAR_4->nr_requests);
  if (FUNC_2(&VAR_4->nr_requests) <= VAR_1) {
   VAR_6 = FUNC_6(VAR_4, VAR_5);
   if (VAR_6 != ((void*)0))
    break;
  }
  break;

 }
 return VAR_6;
}
