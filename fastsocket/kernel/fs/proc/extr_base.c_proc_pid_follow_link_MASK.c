
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nameidata {int last_type; int path; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_3__ {int (* proc_get_link ) (struct inode*,int *) ;} ;
struct TYPE_4__ {TYPE_1__ op; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int *) ;

__attribute__((used)) static void *FUNC_5(struct dentry *VAR_2, struct nameidata *VAR_3)
{
 struct inode *VAR_4 = VAR_2->d_inode;
 int VAR_5 = -VAR_0;


 FUNC_2(&VAR_3->path);


 if (!FUNC_3(VAR_4))
  goto out;

 VAR_5 = FUNC_1(VAR_4)->op.proc_get_link(VAR_4, &VAR_3->path);
 VAR_3->last_type = VAR_1;
out:
 return FUNC_0(VAR_5);
}
