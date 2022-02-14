
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {TYPE_1__* mnt; } ;
struct dentry {int d_time; int * d_op; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct smb_sb_info* FUNC_0 (struct dentry*) ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_1(struct dentry *VAR_4)
{
 struct smb_sb_info *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->mnt->flags & VAR_0)
  VAR_4->d_op = &VAR_3;
 else
  VAR_4->d_op = &VAR_2;
 VAR_4->d_time = VAR_1;
}
