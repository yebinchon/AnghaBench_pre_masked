
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct smb_sb_info {TYPE_1__* mnt; } ;
struct smb_fattr {int f_mode; int attr; int f_size; int f_blocks; scalar_t__ f_unix; } ;
struct TYPE_2__ {int file_mode; int dir_mode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_0(struct smb_sb_info *VAR_6, struct smb_fattr *VAR_7)
{
 if (VAR_7->f_unix)
  return;

 VAR_7->f_mode = VAR_6->mnt->file_mode;
 if (VAR_7->attr & VAR_4) {
  VAR_7->f_mode = VAR_6->mnt->dir_mode;
  VAR_7->f_size = VAR_0;
 }

 if (VAR_7->attr & VAR_5)
  VAR_7->f_mode &= ~(VAR_3 | VAR_1 | VAR_2);


 VAR_7->f_blocks = 0;
 if (VAR_7->f_size != 0)
  VAR_7->f_blocks = 1 + ((VAR_7->f_size-1) >> 9);
 return;
}
