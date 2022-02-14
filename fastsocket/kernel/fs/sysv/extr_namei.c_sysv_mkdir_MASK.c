
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; int i_sb; } ;
struct dentry {int dummy; } ;
struct TYPE_2__ {scalar_t__ s_link_max; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*) ;
 TYPE_1__* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct dentry*,struct inode*) ;
 int FUNC_4 (struct inode*) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct dentry*,struct inode*) ;
 int FUNC_8 (struct inode*,struct inode*) ;
 struct inode* FUNC_9 (struct inode*,int) ;
 int FUNC_10 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_11(struct inode * VAR_2, struct dentry *VAR_3, int VAR_4)
{
 struct inode * VAR_5;
 int VAR_6 = -VAR_0;

 if (VAR_2->i_nlink >= FUNC_2(VAR_2->i_sb)->s_link_max)
  goto out;
 FUNC_5(VAR_2);

 VAR_5 = FUNC_9(VAR_2, VAR_1|VAR_4);
 VAR_6 = FUNC_1(VAR_5);
 if (FUNC_0(VAR_5))
  goto out_dir;

 FUNC_10(VAR_5, 0);

 FUNC_5(VAR_5);

 VAR_6 = FUNC_8(VAR_5, VAR_2);
 if (VAR_6)
  goto out_fail;

 VAR_6 = FUNC_7(VAR_3, VAR_5);
 if (VAR_6)
  goto out_fail;

        FUNC_3(VAR_3, VAR_5);
out:
 return VAR_6;

out_fail:
 FUNC_4(VAR_5);
 FUNC_4(VAR_5);
 FUNC_6(VAR_5);
out_dir:
 FUNC_4(VAR_2);
 goto out;
}
