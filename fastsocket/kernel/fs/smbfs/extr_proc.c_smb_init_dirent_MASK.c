
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {TYPE_1__* mnt; } ;
struct smb_fattr {int f_nlink; scalar_t__ f_unix; int f_gid; int f_uid; } ;
struct TYPE_2__ {int gid; int uid; } ;


 int FUNC_0 (struct smb_fattr*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct smb_sb_info *VAR_0, struct smb_fattr *VAR_1)
{
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->f_nlink = 1;
 VAR_1->f_uid = VAR_0->mnt->uid;
 VAR_1->f_gid = VAR_0->mnt->gid;
 VAR_1->f_unix = 0;
}
