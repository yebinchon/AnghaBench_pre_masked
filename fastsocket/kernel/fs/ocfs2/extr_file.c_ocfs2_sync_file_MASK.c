
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {TYPE_2__* journal; } ;
struct inode {int i_state; int i_sb; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int name; int len; } ;
struct dentry {struct inode* d_inode; TYPE_1__ d_name; } ;
typedef int journal_t ;
struct TYPE_4__ {int * j_journal; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ocfs2_super* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,struct file*,struct dentry*,int,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2,
      struct dentry *VAR_3,
      int VAR_4)
{
 int VAR_5 = 0;
 journal_t *VAR_6;
 struct inode *VAR_7 = VAR_3->d_inode;
 struct ocfs2_super *VAR_8 = FUNC_0(VAR_7->i_sb);

 FUNC_2("(0x%p, 0x%p, %d, '%.*s')\n", VAR_2, VAR_3, VAR_4,
     VAR_3->d_name.len, VAR_3->d_name.name);

 VAR_5 = FUNC_4(VAR_3->d_inode);
 if (VAR_5)
  goto bail;

 if (VAR_4 && !(VAR_7->i_state & VAR_1))
  goto bail;

 VAR_6 = VAR_8->journal->j_journal;
 VAR_5 = FUNC_1(VAR_6);

bail:
 FUNC_3(VAR_5);

 return (VAR_5 < 0) ? -VAR_0 : 0;
}
