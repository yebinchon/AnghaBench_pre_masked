
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct reiserfs_transaction_handle {int t_trans_id; } ;
struct item_head {int dummy; } ;
struct inode {TYPE_2__* i_sb; int i_mode; scalar_t__ i_ino; } ;
struct TYPE_8__ {scalar_t__ k_objectid; int k_dir_id; } ;
struct cpu_key {int key_length; int version; TYPE_1__ on_disk_key; } ;
typedef int __le32 ;
struct TYPE_11__ {int i_flags; } ;
struct TYPE_10__ {int k_dir_id; } ;
struct TYPE_9__ {int s_blocksize; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_4__* FUNC_2 (struct inode*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_3 (struct inode*) ;
 int FUNC_4 (int,char*,long) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct item_head*,struct cpu_key*,int ,int,int ,int,int) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,char*,char*,...) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,int *,struct cpu_key*,struct item_head*,int *,char*) ;
 int FUNC_10 (TYPE_2__*,char*,char*,TYPE_4__*) ;
 int FUNC_11 (TYPE_2__*,struct cpu_key*,int *) ;
 int FUNC_12 (struct cpu_key*,int) ;
 int FUNC_13 (struct cpu_key*,int ) ;

void FUNC_14(struct reiserfs_transaction_handle *VAR_9,
     struct inode *VAR_10, int VAR_11)
{
 FUNC_1(VAR_8);
 int VAR_12;
 struct cpu_key VAR_13;
 struct item_head VAR_14;
 __le32 VAR_15;

 FUNC_0(!VAR_9->t_trans_id);


 FUNC_4(VAR_11 &&
        (FUNC_3(VAR_10)->i_flags & VAR_6),
        "saved link already exists for truncated inode %lx",
        (long)VAR_10->i_ino);
 FUNC_4(!VAR_11 &&
        (FUNC_3(VAR_10)->i_flags & VAR_7),
        "saved link already exists for unlinked inode %lx",
        (long)VAR_10->i_ino);


 VAR_13.version = VAR_2;
 VAR_13.on_disk_key.k_dir_id = VAR_3;
 VAR_13.on_disk_key.k_objectid = VAR_10->i_ino;
 if (!VAR_11) {

  FUNC_12(&VAR_13, 1 + VAR_10->i_sb->s_blocksize);
  FUNC_13(&VAR_13, VAR_4);


  FUNC_6(&VAR_14, &VAR_13, VAR_13.version,
      1 + VAR_10->i_sb->s_blocksize, VAR_4,
      4 , 0xffff );
 } else {

  if (FUNC_5(VAR_10->i_mode))
   FUNC_10(VAR_10->i_sb, "green-2102",
      "Adding a truncate savelink for "
      "a directory %k! Please report",
      FUNC_2(VAR_10));
  FUNC_12(&VAR_13, 1);
  FUNC_13(&VAR_13, VAR_5);


  FUNC_6(&VAR_14, &VAR_13, VAR_13.version, 1, VAR_5,
      4 , 0 );
 }
 VAR_13.key_length = 3;


 VAR_12 = FUNC_11(VAR_10->i_sb, &VAR_13, &VAR_8);
 if (VAR_12 != VAR_1) {
  if (VAR_12 != -VAR_0)
   FUNC_8(VAR_10->i_sb, "vs-2100",
           "search_by_key (%K) returned %d", &VAR_13,
           VAR_12);
  FUNC_7(&VAR_8);
  return;
 }


 VAR_15 = FUNC_2(VAR_10)->k_dir_id;


 VAR_12 =
     FUNC_9(VAR_9, &VAR_8, &VAR_13, &VAR_14, ((void*)0), (char *)&VAR_15);
 if (VAR_12) {
  if (VAR_12 != -VAR_0)
   FUNC_8(VAR_10->i_sb, "vs-2120",
           "insert_item returned %d", VAR_12);
 } else {
  if (VAR_11)
   FUNC_3(VAR_10)->i_flags |=
       VAR_6;
  else
   FUNC_3(VAR_10)->i_flags |= VAR_7;
 }
}
