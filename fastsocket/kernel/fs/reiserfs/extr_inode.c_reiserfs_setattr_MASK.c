
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct reiserfs_transaction_handle {int dummy; } ;
struct inode {scalar_t__ i_size; scalar_t__ i_uid; scalar_t__ i_gid; int i_sb; } ;
struct iattr {unsigned int ia_valid; scalar_t__ ia_size; int ia_uid; int ia_gid; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {scalar_t__ i_prealloc_count; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct inode*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*,struct iattr*) ;
 int FUNC_7 (struct inode*,struct iattr*) ;
 int FUNC_8 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_9 (struct reiserfs_transaction_handle*,int ,int) ;
 int FUNC_10 (struct inode*) ;
 int FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,struct iattr*) ;
 int FUNC_13 (struct reiserfs_transaction_handle*,struct inode*) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (struct inode*,struct iattr*) ;

int FUNC_18(struct dentry *VAR_14, struct iattr *VAR_15)
{
 struct inode *VAR_16 = VAR_14->d_inode;
 int VAR_17;
 unsigned int VAR_18;


 VAR_18 = VAR_15->ia_valid &= ~(VAR_3|VAR_2);

 FUNC_15(VAR_16->i_sb);
 if (VAR_15->ia_valid & VAR_6) {



  if (FUNC_4(VAR_16) == VAR_11 &&
      VAR_15->ia_size > VAR_12) {
   VAR_17 = -VAR_9;
   goto out;
  }

  if (VAR_15->ia_size > VAR_16->i_size) {
   VAR_17 = FUNC_3(VAR_16, VAR_15->ia_size);
   if (FUNC_0(VAR_16)->i_prealloc_count > 0) {
    int VAR_19;
    struct reiserfs_transaction_handle VAR_20;

    VAR_19 = FUNC_8(&VAR_20, VAR_16->i_sb, 4);
    if (!VAR_19) {
     FUNC_13(&VAR_20, VAR_16);
     VAR_19 = FUNC_9(&VAR_20, VAR_16->i_sb, 4);
    }
    if (VAR_19)
     VAR_17 = VAR_19;
   }
   if (VAR_17)
    goto out;




   VAR_15->ia_valid |= (VAR_5 | VAR_0);
  }
 }

 if ((((VAR_15->ia_valid & VAR_7) && (VAR_15->ia_uid & ~0xffff)) ||
      ((VAR_15->ia_valid & VAR_1) && (VAR_15->ia_gid & ~0xffff))) &&
     (FUNC_5(VAR_16) == VAR_13)) {

  VAR_17 = -VAR_10;
  goto out;
 }

 VAR_17 = FUNC_6(VAR_16, VAR_15);
 if (!VAR_17) {
  if ((VAR_18 & VAR_7 && VAR_15->ia_uid != VAR_16->i_uid) ||
      (VAR_18 & VAR_1 && VAR_15->ia_gid != VAR_16->i_gid)) {
   VAR_17 = FUNC_12(VAR_16, VAR_15);

   if (!VAR_17) {
    struct reiserfs_transaction_handle VAR_21;
    int VAR_22 =
        2 *
        (FUNC_2(VAR_16->i_sb) +
         FUNC_1(VAR_16->i_sb)) +
        2;


    VAR_17 =
        FUNC_8(&VAR_21, VAR_16->i_sb,
        VAR_22);
    if (VAR_17)
     goto out;
    VAR_17 =
        FUNC_17(VAR_16, VAR_15) ? -VAR_8 : 0;
    if (VAR_17) {
     FUNC_9(&VAR_21, VAR_16->i_sb,
          VAR_22);
     goto out;
    }


    if (VAR_15->ia_valid & VAR_7)
     VAR_16->i_uid = VAR_15->ia_uid;
    if (VAR_15->ia_valid & VAR_1)
     VAR_16->i_gid = VAR_15->ia_gid;
    FUNC_10(VAR_16);
    VAR_17 =
        FUNC_9(&VAR_21, VAR_16->i_sb, VAR_22);
   }
  }
  if (!VAR_17)
   VAR_17 = FUNC_7(VAR_16, VAR_15);
 }

 if (!VAR_17 && FUNC_14(VAR_16->i_sb)) {
  if (VAR_15->ia_valid & VAR_4)
   VAR_17 = FUNC_11(VAR_16);
 }

      out:
 FUNC_16(VAR_16->i_sb);
 return VAR_17;
}
