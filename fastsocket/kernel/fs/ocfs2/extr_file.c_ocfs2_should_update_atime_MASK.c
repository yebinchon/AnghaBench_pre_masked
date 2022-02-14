
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfsmount {int mnt_flags; } ;
struct timespec {scalar_t__ tv_sec; } ;
struct ocfs2_super {scalar_t__ s_atime_quantum; } ;
struct TYPE_3__ {scalar_t__ tv_sec; } ;
struct inode {int i_flags; TYPE_1__ i_atime; int i_ctime; int i_mtime; int i_mode; TYPE_2__* i_sb; } ;
struct TYPE_4__ {int s_flags; } ;


 struct timespec VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (struct ocfs2_super*) ;
 scalar_t__ FUNC_3 (struct ocfs2_super*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;

int FUNC_5(struct inode *VAR_6,
         struct vfsmount *VAR_7)
{
 struct timespec VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_0(VAR_6->i_sb);

 if (FUNC_2(VAR_9) || FUNC_3(VAR_9))
  return 0;

 if ((VAR_6->i_flags & VAR_5) ||
     ((VAR_6->i_sb->s_flags & VAR_4) && FUNC_1(VAR_6->i_mode)))
  return 0;
 if (VAR_7 == ((void*)0))
  return 0;

 if ((VAR_7->mnt_flags & VAR_1) ||
     ((VAR_7->mnt_flags & VAR_2) && FUNC_1(VAR_6->i_mode)))
  return 0;

 if (VAR_7->mnt_flags & VAR_3) {
  if ((FUNC_4(&VAR_6->i_atime, &VAR_6->i_mtime) <= 0) ||
      (FUNC_4(&VAR_6->i_atime, &VAR_6->i_ctime) <= 0))
   return 1;

  return 0;
 }

 VAR_8 = VAR_0;
 if ((VAR_8.tv_sec - VAR_6->i_atime.tv_sec <= VAR_9->s_atime_quantum))
  return 0;
 else
  return 1;
}
