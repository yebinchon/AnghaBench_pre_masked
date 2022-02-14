
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udf_fileident_bh {scalar_t__ sbh; scalar_t__ ebh; } ;
struct qstr {char* name; int len; } ;
struct kernel_lb_addr {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_3__ {int extLocation; } ;
struct fileIdentDesc {TYPE_1__ icb; } ;
struct dentry {TYPE_2__* d_inode; } ;
struct TYPE_4__ {int i_sb; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 struct dentry* FUNC_2 (struct inode*) ;
 struct kernel_lb_addr FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,struct qstr*,struct udf_fileident_bh*,struct fileIdentDesc*) ;
 struct inode* FUNC_6 (int ,struct kernel_lb_addr*) ;
 int FUNC_7 () ;

__attribute__((used)) static struct dentry *FUNC_8(struct dentry *VAR_1)
{
 struct kernel_lb_addr VAR_2;
 struct inode *VAR_3 = ((void*)0);
 struct qstr VAR_4 = {.name = "..", .len = 2};
 struct fileIdentDesc VAR_5;
 struct udf_fileident_bh VAR_6;

 FUNC_4();
 if (!FUNC_5(VAR_1->d_inode, &VAR_4, &VAR_6, &VAR_5))
  goto out_unlock;

 if (VAR_6.sbh != VAR_6.ebh)
  FUNC_1(VAR_6.ebh);
 FUNC_1(VAR_6.sbh);

 VAR_2 = FUNC_3(VAR_5.icb.extLocation);
 VAR_3 = FUNC_6(VAR_1->d_inode->i_sb, &VAR_2);
 if (!VAR_3)
  goto out_unlock;
 FUNC_7();

 return FUNC_2(VAR_3);
out_unlock:
 FUNC_7();
 return FUNC_0(-VAR_0);
}
