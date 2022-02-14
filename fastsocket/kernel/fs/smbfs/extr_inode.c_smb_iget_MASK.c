
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_5__ {int capabilities; } ;
struct smb_sb_info {TYPE_2__ opt; } ;
struct smb_fattr {int f_rdev; int f_ino; } ;
struct TYPE_4__ {int * a_ops; } ;
struct inode {int i_mode; int * i_op; int * i_fop; TYPE_1__ i_data; int i_ino; } ;
struct TYPE_6__ {scalar_t__ openers; scalar_t__ closed; scalar_t__ flags; scalar_t__ access; scalar_t__ fileid; scalar_t__ open; } ;


 int FUNC_0 (char*,struct smb_fattr*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 struct smb_sb_info* FUNC_2 (struct super_block*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct inode*,int ,int ) ;
 int FUNC_7 (struct inode*) ;
 struct inode* FUNC_8 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct inode*,struct smb_fattr*) ;

struct inode *
FUNC_10(struct super_block *VAR_8, struct smb_fattr *VAR_9)
{
 struct smb_sb_info *VAR_10 = FUNC_2(VAR_8);
 struct inode *VAR_11;

 FUNC_0("smb_iget: %p\n", VAR_9);

 VAR_11 = FUNC_8(VAR_8);
 if (!VAR_11)
  return VAR_11;
 VAR_11->i_ino = VAR_9->f_ino;
 FUNC_1(VAR_11)->open = 0;
 FUNC_1(VAR_11)->fileid = 0;
 FUNC_1(VAR_11)->access = 0;
 FUNC_1(VAR_11)->flags = 0;
 FUNC_1(VAR_11)->closed = 0;
 FUNC_1(VAR_11)->openers = 0;
 FUNC_9(VAR_11, VAR_9);
 if (FUNC_5(VAR_11->i_mode)) {
  VAR_11->i_op = &VAR_5;
  VAR_11->i_fop = &VAR_6;
  VAR_11->i_data.a_ops = &VAR_4;
 } else if (FUNC_3(VAR_11->i_mode)) {
  if (VAR_10->opt.capabilities & VAR_0)
   VAR_11->i_op = &VAR_2;
  else
   VAR_11->i_op = &VAR_1;
  VAR_11->i_fop = &VAR_3;
 } else if (FUNC_4(VAR_11->i_mode)) {
  VAR_11->i_op = &VAR_7;
 } else {
  FUNC_6(VAR_11, VAR_11->i_mode, VAR_9->f_rdev);
 }
 FUNC_7(VAR_11);
 return VAR_11;
}
