
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dentry {int d_inode; struct cgroup* d_fsdata; } ;
struct cgroup {int dentry; TYPE_2__* root; TYPE_1__* parent; } ;
typedef int mode_t ;
struct TYPE_4__ {int sb; } ;
struct TYPE_3__ {struct dentry* dentry; } ;


 int VAR_0 ;
 int FUNC_0 (struct dentry*,int,int ) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct dentry*) ;

__attribute__((used)) static int FUNC_5(struct cgroup *VAR_1, struct dentry *VAR_2,
    mode_t VAR_3)
{
 struct dentry *VAR_4;
 int VAR_5 = 0;

 VAR_4 = VAR_1->parent->dentry;
 VAR_5 = FUNC_0(VAR_2, VAR_0 | VAR_3, VAR_1->root->sb);
 if (!VAR_5) {
  VAR_2->d_fsdata = VAR_1;
  FUNC_3(VAR_4->d_inode);
  FUNC_4(VAR_1->dentry, VAR_2);
  FUNC_1(VAR_2);
 }
 FUNC_2(VAR_2);

 return VAR_5;
}
