
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct statfs {int dummy; } ;
struct smb_share {int dummy; } ;
struct smb_cred {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct smb_share*) ;
 scalar_t__ FUNC_2 (struct smb_share*,struct statfs*,struct smb_cred*) ;
 int FUNC_3 (struct smb_share*,struct statfs*,struct smb_cred*) ;
 scalar_t__ FUNC_4 (struct smb_share*,struct statfs*,struct smb_cred*) ;

int
FUNC_5(struct smb_share *VAR_1, struct statfs *VAR_2,
 struct smb_cred *VAR_3)
{

 if (FUNC_0(FUNC_1(VAR_1)) >= VAR_0) {
  if (FUNC_4(VAR_1, VAR_2, VAR_3) == 0)
   return (0);
  if (FUNC_2(VAR_1, VAR_2, VAR_3) == 0)
   return (0);
 }
 return (FUNC_3(VAR_1, VAR_2, VAR_3));
}
