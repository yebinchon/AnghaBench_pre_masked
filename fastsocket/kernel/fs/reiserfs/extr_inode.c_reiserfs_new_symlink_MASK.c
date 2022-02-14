
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct treepath {int dummy; } ;
struct super_block {int dummy; } ;
struct reiserfs_transaction_handle {int t_trans_id; struct super_block* t_super; } ;
struct TYPE_2__ {int k_objectid; int k_dir_id; } ;
struct item_head {TYPE_1__ ih_key; } ;
struct inode {int dummy; } ;
struct cpu_key {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cpu_key*,int ,int ,int ,int,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct item_head*,int *,int ,int,int ,int,int ) ;
 int FUNC_4 (struct treepath*) ;
 int FUNC_5 (struct super_block*,char*,char*) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,struct treepath*,struct cpu_key*,struct item_head*,struct inode*,char const*) ;
 int FUNC_7 (struct super_block*,char*,char*,TYPE_1__*) ;
 int FUNC_8 (struct super_block*,struct cpu_key*,struct treepath*) ;

__attribute__((used)) static int FUNC_9(struct reiserfs_transaction_handle *VAR_6, struct inode *VAR_7,
    struct item_head *VAR_8,
    struct treepath *VAR_9, const char *VAR_10,
    int VAR_11)
{
 struct super_block *VAR_12 = VAR_6->t_super;
 struct cpu_key VAR_13;
 int VAR_14;

 FUNC_0(!VAR_6->t_trans_id);

 FUNC_1(&VAR_13, VAR_4,
        FUNC_2(VAR_8->ih_key.k_dir_id),
        FUNC_2(VAR_8->ih_key.k_objectid),
        1, VAR_5, 3 );

 FUNC_3(VAR_8, ((void*)0), VAR_4, 1, VAR_5, VAR_11,
     0 );


 VAR_14 = FUNC_8(VAR_12, &VAR_13, VAR_9);
 if (VAR_14 == VAR_2) {
  FUNC_5(VAR_12, "vs-13080",
          "i/o failure occurred creating new symlink");
  return -VAR_1;
 }
 if (VAR_14 == VAR_3) {
  FUNC_4(VAR_9);
  FUNC_7(VAR_12, "vs-13080",
     "object with this key exists (%k)",
     &(VAR_8->ih_key));
  return -VAR_0;
 }


 return FUNC_6(VAR_6, VAR_9, &VAR_13, VAR_8, VAR_7, VAR_10);
}
