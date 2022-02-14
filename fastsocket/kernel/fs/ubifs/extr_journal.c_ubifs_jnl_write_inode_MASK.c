
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_inode {int ui_lock; int ui_size; int synced_i_size; scalar_t__ data_len; } ;
struct ubifs_ino_node {int dummy; } ;
struct ubifs_info {TYPE_1__* jheads; } ;
struct inode {int i_ino; int i_nlink; } ;
struct TYPE_2__ {int wbuf; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode const*) ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct ubifs_info*) ;
 int FUNC_3 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_4 (struct ubifs_ino_node*) ;
 struct ubifs_ino_node* FUNC_5 (int,int ) ;
 int FUNC_6 (struct ubifs_info*,size_t,int) ;
 int FUNC_7 (struct ubifs_info*,struct ubifs_ino_node*,struct inode const*,int) ;
 int FUNC_8 (struct ubifs_info*,size_t) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ubifs_info*,int,int) ;
 int FUNC_12 (struct ubifs_info*,int ) ;
 struct ubifs_inode* FUNC_13 (struct inode const*) ;
 int FUNC_14 (struct ubifs_info*,int) ;
 int FUNC_15 (struct ubifs_info*,union ubifs_key*,int,int,int) ;
 int FUNC_16 (struct ubifs_info*,int ) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (struct ubifs_info*,size_t,struct ubifs_ino_node*,int,int*,int*,int) ;

int FUNC_19(struct ubifs_info *VAR_4, const struct inode *VAR_5)
{
 int VAR_6, VAR_7, VAR_8;
 struct ubifs_ino_node *VAR_9;
 struct ubifs_inode *VAR_10 = FUNC_13(VAR_5);
 int VAR_11 = 0, VAR_12 = VAR_3, VAR_13 = !VAR_5->i_nlink;

 FUNC_1("ino %lu, nlink %u", VAR_5->i_ino, VAR_5->i_nlink);





 if (!VAR_13) {
  VAR_12 += VAR_10->data_len;
  VAR_11 = FUNC_0(VAR_5);
 }
 VAR_9 = FUNC_5(VAR_12, VAR_2);
 if (!VAR_9)
  return -VAR_1;


 VAR_6 = FUNC_6(VAR_4, VAR_0, VAR_12);
 if (VAR_6)
  goto out_free;

 FUNC_7(VAR_4, VAR_9, VAR_5, 1);
 VAR_6 = FUNC_18(VAR_4, VAR_0, VAR_9, VAR_12, &VAR_7, &VAR_8, VAR_11);
 if (VAR_6)
  goto out_release;
 if (!VAR_11)
  FUNC_17(&VAR_4->jheads[VAR_0].wbuf,
       VAR_5->i_ino);
 FUNC_8(VAR_4, VAR_0);

 if (VAR_13) {
  VAR_6 = FUNC_16(VAR_4, VAR_5->i_ino);
  if (VAR_6)
   goto out_ro;
  FUNC_12(VAR_4, VAR_5->i_ino);
  VAR_6 = FUNC_11(VAR_4, VAR_7, VAR_12);
 } else {
  union ubifs_key VAR_14;

  FUNC_3(VAR_4, &VAR_14, VAR_5->i_ino);
  VAR_6 = FUNC_15(VAR_4, &VAR_14, VAR_7, VAR_8, VAR_12);
 }
 if (VAR_6)
  goto out_ro;

 FUNC_2(VAR_4);
 FUNC_9(&VAR_10->ui_lock);
 VAR_10->synced_i_size = VAR_10->ui_size;
 FUNC_10(&VAR_10->ui_lock);
 FUNC_4(VAR_9);
 return 0;

out_release:
 FUNC_8(VAR_4, VAR_0);
out_ro:
 FUNC_14(VAR_4, VAR_6);
 FUNC_2(VAR_4);
out_free:
 FUNC_4(VAR_9);
 return VAR_6;
}
