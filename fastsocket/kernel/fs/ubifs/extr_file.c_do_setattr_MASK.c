
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ubifs_inode {int dirty; int ui_mutex; int ui_size; int data_len; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int dirtied_ino; int dirtied_ino_d; } ;
struct inode {TYPE_2__* i_sb; int i_size; int i_ctime; int i_mtime; } ;
struct iattr {int ia_valid; int ia_size; } ;
typedef int loff_t ;
struct TYPE_4__ {TYPE_1__* s_op; } ;
struct TYPE_3__ {int (* write_inode ) (struct inode*,int *) ;} ;


 int FUNC_0 (int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct inode*,int) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct inode*,struct iattr const*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct inode*,int *) ;
 int FUNC_9 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_10 (struct inode*) ;
 struct ubifs_inode* FUNC_11 (struct inode*) ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_13 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_14(struct ubifs_info *VAR_3, struct inode *VAR_4,
        const struct iattr *VAR_5)
{
 int VAR_6, VAR_7;
 loff_t VAR_8 = VAR_5->ia_size;
 struct ubifs_inode *VAR_9 = FUNC_11(VAR_4);
 struct ubifs_budget_req VAR_10 = { .dirtied_ino = 1,
    .dirtied_ino_d = FUNC_0(VAR_9->data_len, 8) };

 VAR_6 = FUNC_9(VAR_3, &VAR_10);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->ia_valid & VAR_0) {
  FUNC_3("size %lld -> %lld", VAR_4->i_size, VAR_8);
  VAR_6 = FUNC_13(VAR_4, VAR_8);
  if (VAR_6)
   goto out;
 }

 FUNC_6(&VAR_9->ui_mutex);
 if (VAR_5->ia_valid & VAR_0) {

  VAR_4->i_mtime = VAR_4->i_ctime = FUNC_10(VAR_4);

  VAR_9->ui_size = VAR_4->i_size;
 }

 FUNC_4(VAR_4, VAR_5);

 VAR_7 = VAR_9->dirty;
 if (VAR_5->ia_valid & VAR_0)




   FUNC_2(VAR_4, VAR_2 | VAR_1);
 else
  FUNC_5(VAR_4);
 FUNC_7(&VAR_9->ui_mutex);

 if (VAR_7)
  FUNC_12(VAR_3, &VAR_10);
 if (FUNC_1(VAR_4))
  VAR_6 = VAR_4->i_sb->s_op->write_inode(VAR_4, ((void*)0));
 return VAR_6;

out:
 FUNC_12(VAR_3, &VAR_10);
 return VAR_6;
}
