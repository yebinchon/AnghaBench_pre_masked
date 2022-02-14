
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct reiserfs_dir_entry {scalar_t__ de_objectid; scalar_t__ de_entrylen; int de_entry_key; int * de_gen_number_bit_string; } ;
struct inode {scalar_t__ i_ino; int i_nlink; int i_sb; void* i_mtime; void* i_ctime; int i_size; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;


 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct reiserfs_transaction_handle*,struct inode*,int ) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,int ,int) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,int *,int *,struct inode*,int *,int ) ;
 int FUNC_10 (struct inode*,int ,int ,int *,struct reiserfs_dir_entry*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_13 (int ,char*,char*,scalar_t__,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_8, struct dentry *VAR_9)
{
 int VAR_10, VAR_11;
 struct inode *VAR_12;
 struct reiserfs_dir_entry VAR_13;
 FUNC_0(VAR_7);
 struct reiserfs_transaction_handle VAR_14;
 int VAR_15;
 unsigned long VAR_16;

 VAR_12 = VAR_9->d_inode;





 VAR_15 =
     VAR_5 * 2 + 2 +
     4 * FUNC_1(VAR_8->i_sb);

 FUNC_14(VAR_8->i_sb);
 VAR_10 = FUNC_5(&VAR_14, VAR_8->i_sb, VAR_15);
 if (VAR_10)
  goto out_unlink;

 VAR_13.de_gen_number_bit_string = ((void*)0);
 if ((VAR_10 =
      FUNC_10(VAR_8, VAR_9->d_name.name, VAR_9->d_name.len,
     &VAR_7, &VAR_13)) == VAR_6) {
  VAR_10 = -VAR_3;
  goto end_unlink;
 } else if (VAR_10 == VAR_4) {
  VAR_10 = -VAR_2;
  goto end_unlink;
 }

 FUNC_11(VAR_12);
 FUNC_11(VAR_8);

 if (VAR_13.de_objectid != VAR_12->i_ino) {


  VAR_10 = -VAR_2;
  goto end_unlink;
 }

 if (!VAR_12->i_nlink) {
  FUNC_13(VAR_12->i_sb, "reiserfs-7042",
     "deleting nonexistent file (%lu), %d",
     VAR_12->i_ino, VAR_12->i_nlink);
  VAR_12->i_nlink = 1;
 }

 FUNC_3(VAR_12);





 VAR_16 = VAR_12->i_nlink;

 VAR_10 =
     FUNC_9(&VAR_14, &VAR_7, &(VAR_13.de_entry_key), VAR_8, ((void*)0),
       0);
 if (VAR_10 < 0) {
  FUNC_4(VAR_12);
  goto end_unlink;
 }
 VAR_12->i_ctime = VAR_0;
 FUNC_12(&VAR_14, VAR_12);

 VAR_8->i_size -= (VAR_13.de_entrylen + VAR_1);
 VAR_8->i_ctime = VAR_8->i_mtime = VAR_0;
 FUNC_12(&VAR_14, VAR_8);

 if (!VAR_16)

  FUNC_2(&VAR_14, VAR_12, 0 );

 VAR_10 = FUNC_6(&VAR_14, VAR_8->i_sb, VAR_15);
 FUNC_8(&VAR_7);
 FUNC_15(VAR_8->i_sb);
 return VAR_10;

      end_unlink:
 FUNC_7(&VAR_7);
 VAR_11 = FUNC_6(&VAR_14, VAR_8->i_sb, VAR_15);
 FUNC_8(&VAR_7);
 if (VAR_11)
  VAR_10 = VAR_11;
      out_unlink:
 FUNC_15(VAR_8->i_sb);
 return VAR_10;
}
