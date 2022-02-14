
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {TYPE_1__* d_parent; } ;
struct cgroup {int dummy; } ;
struct TYPE_2__ {struct cgroup* d_fsdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct cgroup*,struct dentry*,int) ;

__attribute__((used)) static int FUNC_1(struct inode *VAR_1, struct dentry *VAR_2, int VAR_3)
{
 struct cgroup *VAR_4 = VAR_2->d_parent->d_fsdata;


 return FUNC_0(VAR_4, VAR_2, VAR_3 | VAR_0);
}
