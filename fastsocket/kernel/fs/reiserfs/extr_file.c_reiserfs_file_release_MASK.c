
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct inode {int i_sb; int i_mutex; int i_count; int i_ino; int i_mode; } ;
struct file {int dummy; } ;
struct TYPE_2__ {int i_flags; scalar_t__ i_prealloc_count; int i_mmap; } ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_6 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_7 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct reiserfs_transaction_handle*,struct inode*) ;
 int FUNC_11 (struct inode*,int ) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (int ,char*,char*,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (struct inode*) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_2, struct file *VAR_3)
{

 struct reiserfs_transaction_handle VAR_4;
 int VAR_5;
 int VAR_6 = 0;

 FUNC_0(!FUNC_2(VAR_2->i_mode));


 if ((FUNC_3(&VAR_2->i_count) > 1 ||
      !(FUNC_1(VAR_2)->i_flags & VAR_1) ||
      !FUNC_16(VAR_2)) &&
     FUNC_1(VAR_2)->i_prealloc_count <= 0) {
  return 0;
 }

 FUNC_8(&VAR_2->i_mutex);

 FUNC_8(&(FUNC_1(VAR_2)->i_mmap));
 if (FUNC_1(VAR_2)->i_flags & VAR_0)
  FUNC_1(VAR_2)->i_flags &= ~VAR_1;

 FUNC_14(VAR_2->i_sb);





 VAR_5 = FUNC_5(&VAR_4, VAR_2->i_sb, 1);
 if (VAR_5) {




  VAR_6 = VAR_5;
  VAR_5 = FUNC_7(&VAR_4, VAR_2->i_sb, 1);

  if (VAR_5) {







   FUNC_4(VAR_2);
   FUNC_13(VAR_2->i_sb, "clm-9001",
      "pinning inode %lu because the "
      "preallocation can't be freed",
      VAR_2->i_ino);
   goto out;
  }
 }
 FUNC_12(VAR_2);




 VAR_5 = FUNC_6(&VAR_4, VAR_2->i_sb, 1);


 if (!VAR_5)
  VAR_5 = VAR_6;

 if (!VAR_5 && FUNC_3(&VAR_2->i_count) <= 1 &&
     (FUNC_1(VAR_2)->i_flags & VAR_1) &&
     FUNC_16(VAR_2)) {




  VAR_5 = FUNC_11(VAR_2, 0);
 }
      out:
 FUNC_9(&(FUNC_1(VAR_2)->i_mmap));
 FUNC_9(&VAR_2->i_mutex);
 FUNC_15(VAR_2->i_sb);
 return VAR_5;
}
