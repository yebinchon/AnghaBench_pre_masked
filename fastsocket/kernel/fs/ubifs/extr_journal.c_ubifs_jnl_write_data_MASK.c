
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef union ubifs_key {int dummy; } ubifs_key ;
struct ubifs_inode {int flags; int compr_type; } ;
struct ubifs_info {TYPE_2__* jheads; } ;
struct TYPE_3__ {int node_type; } ;
struct ubifs_data_node {int compr_type; int data; int size; int key; TYPE_1__ ch; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {int wbuf; } ;


 size_t VAR_0 ;
 int FUNC_0 (union ubifs_key const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,unsigned long,int ,int,int ) ;
 int FUNC_4 (struct ubifs_info*) ;
 int FUNC_5 (struct ubifs_info*,union ubifs_key const*) ;
 scalar_t__ FUNC_6 (struct ubifs_info*,union ubifs_key const*) ;
 int FUNC_7 (struct ubifs_info*,union ubifs_key const*,int *) ;
 int FUNC_8 (struct ubifs_data_node*) ;
 struct ubifs_data_node* FUNC_9 (int,int ) ;
 int FUNC_10 (struct ubifs_info*,size_t,int) ;
 int FUNC_11 (struct ubifs_info*,size_t) ;
 int FUNC_12 (int) ;
 int FUNC_13 (void const*,int,int *,int*,int*) ;
 struct ubifs_inode* FUNC_14 (struct inode const*) ;
 int FUNC_15 (struct ubifs_info*,int) ;
 int FUNC_16 (struct ubifs_info*,union ubifs_key const*,int,int,int) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (struct ubifs_info*,size_t,struct ubifs_data_node*,int,int*,int*) ;
 int FUNC_19 (struct ubifs_data_node*) ;

int FUNC_20(struct ubifs_info *VAR_9, const struct inode *VAR_10,
    const union ubifs_key *VAR_11, const void *VAR_12, int VAR_13)
{
 struct ubifs_data_node *VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18, VAR_19;
 int VAR_20 = VAR_7 + VAR_3 * VAR_8;
 struct ubifs_inode *VAR_21 = FUNC_14(VAR_10);

 FUNC_3("ino %lu, blk %u, len %d, key %s",
  (unsigned long)FUNC_6(VAR_9, VAR_11), FUNC_5(VAR_9, VAR_11), VAR_13,
  FUNC_0(VAR_11));
 FUNC_12(VAR_13 <= VAR_3);

 VAR_14 = FUNC_9(VAR_20, VAR_2);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->ch.node_type = VAR_6;
 FUNC_7(VAR_9, VAR_11, &VAR_14->key);
 VAR_14->size = FUNC_2(VAR_13);
 FUNC_19(VAR_14);

 if (!(VAR_21->flags & VAR_4))

  VAR_18 = VAR_5;
 else
  VAR_18 = VAR_21->compr_type;

 VAR_19 = VAR_20 - VAR_7;
 FUNC_13(VAR_12, VAR_13, &VAR_14->data, &VAR_19, &VAR_18);
 FUNC_12(VAR_19 <= VAR_3);

 VAR_20 = VAR_7 + VAR_19;
 VAR_14->compr_type = FUNC_1(VAR_18);


 VAR_15 = FUNC_10(VAR_9, VAR_0, VAR_20);
 if (VAR_15)
  goto out_free;

 VAR_15 = FUNC_18(VAR_9, VAR_0, VAR_14, VAR_20, &VAR_16, &VAR_17);
 if (VAR_15)
  goto out_release;
 FUNC_17(&VAR_9->jheads[VAR_0].wbuf, FUNC_6(VAR_9, VAR_11));
 FUNC_11(VAR_9, VAR_0);

 VAR_15 = FUNC_16(VAR_9, VAR_11, VAR_16, VAR_17, VAR_20);
 if (VAR_15)
  goto out_ro;

 FUNC_4(VAR_9);
 FUNC_8(VAR_14);
 return 0;

out_release:
 FUNC_11(VAR_9, VAR_0);
out_ro:
 FUNC_15(VAR_9, VAR_15);
 FUNC_4(VAR_9);
out_free:
 FUNC_8(VAR_14);
 return VAR_15;
}
