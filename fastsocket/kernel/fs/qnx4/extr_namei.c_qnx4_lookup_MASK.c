
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qnx4_link_info {int dl_inode_ndx; int dl_inode_blk; } ;
struct qnx4_inode_entry {int di_status; } ;
struct nameidata {int dummy; } ;
struct inode {int i_sb; } ;
struct TYPE_2__ {char* name; int len; } ;
struct dentry {TYPE_1__ d_name; } ;
struct buffer_head {int dummy; } ;


 struct dentry* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct dentry*,struct inode*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 struct buffer_head* FUNC_8 (int,struct inode*,char const*,struct qnx4_inode_entry**,int*) ;
 struct inode* FUNC_9 (int ,int) ;
 int FUNC_10 () ;

struct dentry * FUNC_11(struct inode *VAR_2, struct dentry *VAR_3, struct nameidata *VAR_4)
{
 int VAR_5;
 struct qnx4_inode_entry *VAR_6;
 struct qnx4_link_info *VAR_7;
 struct buffer_head *VAR_8;
 const char *VAR_9 = VAR_3->d_name.name;
 int VAR_10 = VAR_3->d_name.len;
 struct inode *VAR_11 = ((void*)0);

 FUNC_7();
 if (!(VAR_8 = FUNC_8(VAR_10, VAR_2, VAR_9, &VAR_6, &VAR_5)))
  goto out;

 if ((VAR_6->di_status & VAR_0) == VAR_0) {
  VAR_7 = (struct qnx4_link_info *) VAR_6;
  VAR_5 = (FUNC_6(VAR_7->dl_inode_blk) - 1) *
                    VAR_1 +
      VAR_7->dl_inode_ndx;
 }
 FUNC_4(VAR_8);

 VAR_11 = FUNC_9(VAR_2->i_sb, VAR_5);
 if (FUNC_1(VAR_11)) {
  FUNC_10();
  FUNC_3(("qnx4: lookup->iget -> error %ld\n",
      FUNC_2(VAR_11)));
  return FUNC_0(VAR_11);
 }
out:
 FUNC_10();
 FUNC_5(VAR_3, VAR_11);

 return ((void*)0);
}
