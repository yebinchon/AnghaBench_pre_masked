
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ubifs_inode {int data_len; scalar_t__ xattr_cnt; scalar_t__ xattr_names; int xattr; int ui_size; int ui_mutex; int xattr_size; int data; int flags; } ;
struct ubifs_info {int dummy; } ;
struct ubifs_budget_req {int new_ino; int new_dent; int dirtied_ino; int dirtied_ino_d; int new_ino_d; } ;
struct qstr {scalar_t__ len; } ;
struct inode {int i_flags; int i_size; int i_ctime; int * i_fop; int * i_op; TYPE_1__* i_mapping; } ;
struct TYPE_2__ {int * a_ops; } ;


 int FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (struct inode*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct inode*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ,void const*,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_12 (struct ubifs_info*,struct ubifs_budget_req*) ;
 int FUNC_13 (struct inode*) ;
 struct ubifs_inode* FUNC_14 (struct inode*) ;
 int FUNC_15 (struct ubifs_info*,struct inode*,struct qstr const*,struct inode*,int ,int) ;
 struct inode* FUNC_16 (struct ubifs_info*,struct inode*,int) ;
 int FUNC_17 (struct ubifs_info*,struct ubifs_budget_req*) ;

__attribute__((used)) static int FUNC_18(struct ubifs_info *VAR_15, struct inode *VAR_16,
   const struct qstr *VAR_17, const void *VAR_18, int VAR_19)
{
 int VAR_20;
 struct inode *VAR_21;
 struct ubifs_inode *VAR_22, *VAR_23 = FUNC_14(VAR_16);
 struct ubifs_budget_req VAR_24 = { .new_ino = 1, .new_dent = 1,
    .new_ino_d = FUNC_0(VAR_19, 8), .dirtied_ino = 1,
    .dirtied_ino_d = FUNC_0(VAR_23->data_len, 8) };

 if (VAR_23->xattr_cnt >= VAR_3)
  return -VAR_1;






 if (VAR_23->xattr_names + VAR_23->xattr_cnt +
     VAR_17->len + 1 > VAR_11)
  return -VAR_1;

 VAR_20 = FUNC_12(VAR_15, &VAR_24);
 if (VAR_20)
  return VAR_20;

 VAR_21 = FUNC_16(VAR_15, VAR_16, VAR_4 | VAR_5);
 if (FUNC_3(VAR_21)) {
  VAR_20 = FUNC_4(VAR_21);
  goto out_budg;
 }


 VAR_21->i_mapping->a_ops = &VAR_12;
 VAR_21->i_op = &VAR_14;
 VAR_21->i_fop = &VAR_13;

 VAR_21->i_flags |= VAR_9 | VAR_6 | VAR_7 | VAR_8;
 VAR_22 = FUNC_14(VAR_21);
 VAR_22->xattr = 1;
 VAR_22->flags |= VAR_10;
 VAR_22->data = FUNC_7(VAR_19, VAR_2);
 if (!VAR_22->data) {
  VAR_20 = -VAR_0;
  goto out_free;
 }
 FUNC_9(VAR_22->data, VAR_18, VAR_19);
 VAR_21->i_size = VAR_22->ui_size = VAR_19;
 VAR_22->data_len = VAR_19;

 FUNC_10(&VAR_23->ui_mutex);
 VAR_16->i_ctime = FUNC_13(VAR_16);
 VAR_23->xattr_cnt += 1;
 VAR_23->xattr_size += FUNC_1(VAR_17->len);
 VAR_23->xattr_size += FUNC_2(VAR_19);
 VAR_23->xattr_names += VAR_17->len;

 VAR_20 = FUNC_15(VAR_15, VAR_16, VAR_17, VAR_21, 0, 1);
 if (VAR_20)
  goto out_cancel;
 FUNC_11(&VAR_23->ui_mutex);

 FUNC_17(VAR_15, &VAR_24);
 FUNC_5(VAR_21);
 FUNC_6(VAR_21);
 return 0;

out_cancel:
 VAR_23->xattr_cnt -= 1;
 VAR_23->xattr_size -= FUNC_1(VAR_17->len);
 VAR_23->xattr_size -= FUNC_2(VAR_19);
 FUNC_11(&VAR_23->ui_mutex);
out_free:
 FUNC_8(VAR_21);
 FUNC_6(VAR_21);
out_budg:
 FUNC_17(VAR_15, &VAR_24);
 return VAR_20;
}
