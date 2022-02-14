
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_wbuf {int dummy; } ;
struct ubifs_inode {scalar_t__ data_len; int ui_lock; int ui_size; int synced_i_size; int del_cmtno; int ui_mutex; } ;
struct ubifs_ino_node {int dummy; } ;
struct ubifs_info {TYPE_2__* jheads; int cmt_no; } ;
struct TYPE_3__ {int node_type; } ;
struct ubifs_dent_node {char* name; int nlen; int type; int inum; int key; TYPE_1__ ch; } ;
struct qstr {int len; int name; } ;
struct inode {scalar_t__ i_nlink; int i_ino; int i_mode; } ;
struct TYPE_4__ {struct ubifs_wbuf wbuf; } ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode const*) ;
 int FUNC_2 (struct inode const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int ,int,int ,scalar_t__,int ) ;
 int FUNC_6 (struct ubifs_info*,union ubifs_key*,int ,struct qstr const*) ;
 int FUNC_7 (struct ubifs_info*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_10 (struct ubifs_info*,union ubifs_key*,int ) ;
 int FUNC_11 (struct ubifs_dent_node*) ;
 struct ubifs_dent_node* FUNC_12 (int,int ) ;
 int FUNC_13 (struct ubifs_info*,size_t,int) ;
 int FUNC_14 (struct ubifs_info*,struct ubifs_inode*) ;
 int FUNC_15 (char*,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct ubifs_info*,struct ubifs_ino_node*,struct inode const*,int) ;
 int FUNC_18 (struct ubifs_info*,size_t) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct ubifs_info*,int,int) ;
 int FUNC_22 (struct ubifs_info*,int ) ;
 int FUNC_23 (int) ;
 int FUNC_24 (struct ubifs_info*,int ) ;
 struct ubifs_inode* FUNC_25 (struct inode const*) ;
 int FUNC_26 (struct ubifs_info*,struct ubifs_dent_node*,int,int ) ;
 int FUNC_27 (struct ubifs_info*,int) ;
 int FUNC_28 (struct ubifs_info*,union ubifs_key*,int,int,int) ;
 int FUNC_29 (struct ubifs_info*,union ubifs_key*,int,int,int,struct qstr const*) ;
 int FUNC_30 (struct ubifs_info*,union ubifs_key*,struct qstr const*) ;
 int FUNC_31 (struct ubifs_wbuf*,int ) ;
 int FUNC_32 (struct ubifs_info*,size_t,struct ubifs_dent_node*,int,int*,int*,int) ;
 int FUNC_33 (struct ubifs_info*,union ubifs_key*,int ,struct qstr const*) ;
 int FUNC_34 (struct ubifs_dent_node*) ;

int FUNC_35(struct ubifs_info *VAR_7, const struct inode *VAR_8,
       const struct qstr *VAR_9, const struct inode *VAR_10,
       int VAR_11, int VAR_12)
{
 int VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22 = FUNC_1(VAR_8);
 int VAR_23 = !!(VAR_11 && VAR_10->i_nlink == 0);
 struct ubifs_inode *VAR_24 = FUNC_25(VAR_10);
 struct ubifs_inode *VAR_25 = FUNC_25(VAR_8);
 struct ubifs_dent_node *VAR_26;
 struct ubifs_ino_node *VAR_27;
 union ubifs_key VAR_28, VAR_29;

 FUNC_5("ino %lu, dent '%.*s', data len %d in dir ino %lu",
  VAR_10->i_ino, VAR_9->len, VAR_9->name, VAR_24->data_len, VAR_8->i_ino);
 FUNC_23(VAR_25->data_len == 0);
 FUNC_23(FUNC_16(&VAR_25->ui_mutex));

 VAR_14 = VAR_4 + VAR_9->len + 1;
 VAR_15 = VAR_5;







 if (!VAR_23) {
  VAR_15 += VAR_24->data_len;
  VAR_22 |= FUNC_2(VAR_10);
 }

 VAR_20 = FUNC_0(VAR_14, 8);
 VAR_21 = FUNC_0(VAR_15, 8);
 VAR_16 = VAR_20 + VAR_21 + VAR_5;
 VAR_26 = FUNC_12(VAR_16, VAR_2);
 if (!VAR_26)
  return -VAR_1;


 VAR_13 = FUNC_13(VAR_7, VAR_0, VAR_16);
 if (VAR_13)
  goto out_free;

 if (!VAR_12) {
  VAR_26->ch.node_type = VAR_3;
  FUNC_6(VAR_7, &VAR_28, VAR_8->i_ino, VAR_9);
 } else {
  VAR_26->ch.node_type = VAR_6;
  FUNC_33(VAR_7, &VAR_28, VAR_8->i_ino, VAR_9);
 }

 FUNC_10(VAR_7, &VAR_28, VAR_26->key);
 VAR_26->inum = VAR_11 ? 0 : FUNC_4(VAR_10->i_ino);
 VAR_26->type = FUNC_8(VAR_10->i_mode);
 VAR_26->nlen = FUNC_3(VAR_9->len);
 FUNC_15(VAR_26->name, VAR_9->name, VAR_9->len);
 VAR_26->name[VAR_9->len] = '\0';
 FUNC_34(VAR_26);
 FUNC_26(VAR_7, VAR_26, VAR_14, 0);

 VAR_27 = (void *)VAR_26 + VAR_20;
 FUNC_17(VAR_7, VAR_27, VAR_10, 0);
 VAR_27 = (void *)VAR_27 + VAR_21;
 FUNC_17(VAR_7, VAR_27, VAR_8, 1);

 if (VAR_23) {
  VAR_13 = FUNC_22(VAR_7, VAR_10->i_ino);
  if (VAR_13) {
   FUNC_18(VAR_7, VAR_0);
   goto out_finish;
  }
  VAR_24->del_cmtno = VAR_7->cmt_no;
 }

 VAR_13 = FUNC_32(VAR_7, VAR_0, VAR_26, VAR_16, &VAR_17, &VAR_19, VAR_22);
 if (VAR_13)
  goto out_release;
 if (!VAR_22) {
  struct ubifs_wbuf *VAR_30 = &VAR_7->jheads[VAR_0].wbuf;

  FUNC_31(VAR_30, VAR_10->i_ino);
  FUNC_31(VAR_30, VAR_8->i_ino);
 }
 FUNC_18(VAR_7, VAR_0);
 FUNC_11(VAR_26);

 if (VAR_11) {
  VAR_13 = FUNC_30(VAR_7, &VAR_28, VAR_9);
  if (VAR_13)
   goto out_ro;
  VAR_13 = FUNC_21(VAR_7, VAR_17, VAR_14);
 } else
  VAR_13 = FUNC_29(VAR_7, &VAR_28, VAR_17, VAR_19, VAR_14, VAR_9);
 if (VAR_13)
  goto out_ro;







 FUNC_9(VAR_7, &VAR_29, VAR_10->i_ino);
 VAR_18 = VAR_19 + VAR_20;
 VAR_13 = FUNC_28(VAR_7, &VAR_29, VAR_17, VAR_18, VAR_15);
 if (VAR_13)
  goto out_ro;

 FUNC_9(VAR_7, &VAR_29, VAR_8->i_ino);
 VAR_18 += VAR_21;
 VAR_13 = FUNC_28(VAR_7, &VAR_29, VAR_17, VAR_18, VAR_5);
 if (VAR_13)
  goto out_ro;

 FUNC_7(VAR_7);
 FUNC_19(&VAR_24->ui_lock);
 VAR_24->synced_i_size = VAR_24->ui_size;
 FUNC_20(&VAR_24->ui_lock);
 FUNC_14(VAR_7, VAR_24);
 FUNC_14(VAR_7, VAR_25);
 return 0;

out_finish:
 FUNC_7(VAR_7);
out_free:
 FUNC_11(VAR_26);
 return VAR_13;

out_release:
 FUNC_18(VAR_7, VAR_0);
out_ro:
 FUNC_27(VAR_7, VAR_13);
 if (VAR_23)
  FUNC_24(VAR_7, VAR_10->i_ino);
 FUNC_7(VAR_7);
 return VAR_13;
}
