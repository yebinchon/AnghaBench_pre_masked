
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int capabilities; scalar_t__ protocol; } ;
struct smb_sb_info {TYPE_3__ opt; } ;
struct smb_inode_info {scalar_t__ access; int closed; scalar_t__ oldmtime; int fileid; scalar_t__ open; } ;
struct smb_fattr {int dummy; } ;
struct TYPE_5__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct TYPE_4__ {int tv_sec; scalar_t__ tv_nsec; } ;
struct inode {TYPE_2__ i_mtime; TYPE_1__ i_atime; } ;


 int VAR_0 ;
 struct smb_inode_info* FUNC_0 (struct inode*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct inode*,struct smb_fattr*) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct smb_sb_info*,int ,int) ;
 int FUNC_4 (struct smb_sb_info*,struct inode*,struct smb_fattr*) ;

__attribute__((used)) static int
FUNC_5(struct smb_sb_info *VAR_5, struct inode * VAR_6)
{
 struct smb_inode_info *VAR_7 = FUNC_0(VAR_6);
 int VAR_8 = 0;
 if (FUNC_2(VAR_6))
 {




  VAR_7->open = 0;






  if (VAR_6->i_mtime.tv_sec & 1) {
   VAR_6->i_mtime.tv_sec--;
   VAR_6->i_mtime.tv_nsec = 0;
  }
  if (VAR_6->i_atime.tv_sec & 1) {
   VAR_6->i_atime.tv_sec--;
   VAR_6->i_atime.tv_nsec = 0;
  }




  if ((VAR_5->opt.capabilities & VAR_0) == 0 &&
      (VAR_5->opt.protocol >= VAR_2) &&
      !(VAR_7->access == VAR_1))
  {
   struct smb_fattr VAR_9;
   FUNC_1(VAR_6, &VAR_9);
   FUNC_4(VAR_5, VAR_6, &VAR_9);
  }

  VAR_8 = FUNC_3(VAR_5, VAR_7->fileid, VAR_6->i_mtime.tv_sec);




  if (VAR_5->opt.protocol < VAR_3)
   VAR_7->oldmtime = 0;
  VAR_7->closed = VAR_4;
 }
 return VAR_8;
}
