
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {int dirty; int ui_mutex; int flags; int data_len; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int dirtied_ino; int dirtied_ino_d; } ;
struct inode {int i_ino; int i_ctime; TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct ubifs_info* s_fs_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (char*,int ) ;
 struct ubifs_inode* FUNC_10 (struct inode*) ;
 int FUNC_11 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*,int) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct ubifs_inode *VAR_9 = FUNC_10(VAR_4);
 struct ubifs_info *VAR_10 = VAR_4->i_sb->s_fs_info;
 struct ubifs_budget_req VAR_11 = { .dirtied_ino = 1,
     .dirtied_ino_d = VAR_9->data_len };

 VAR_7 = FUNC_7(VAR_10, &VAR_11);
 if (VAR_7)
  return VAR_7;





 FUNC_4(&VAR_9->ui_mutex);
 VAR_6 = FUNC_6(VAR_9->flags);
 if ((VAR_5 ^ VAR_6) & (VAR_2 | VAR_3)) {
  if (!FUNC_1(VAR_0)) {
   VAR_7 = -VAR_1;
   goto out_unlock;
  }
 }

 VAR_9->flags = FUNC_2(VAR_5);
 FUNC_12(VAR_4);
 VAR_4->i_ctime = FUNC_8(VAR_4);
 VAR_8 = VAR_9->dirty;
 FUNC_3(VAR_4);
 FUNC_5(&VAR_9->ui_mutex);

 if (VAR_8)
  FUNC_11(VAR_10, &VAR_11);
 if (FUNC_0(VAR_4))
  VAR_7 = FUNC_13(VAR_4, 1);
 return VAR_7;

out_unlock:
 FUNC_9("can't modify inode %lu attributes", VAR_4->i_ino);
 FUNC_5(&VAR_9->ui_mutex);
 FUNC_11(VAR_10, &VAR_11);
 return VAR_7;
}
