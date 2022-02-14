
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vfsmount {int dummy; } ;
struct net {TYPE_1__* proc_net; } ;
struct kstat {int nlink; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; } ;
struct TYPE_2__ {int nlink; } ;


 int FUNC_0 (struct inode*,struct kstat*) ;
 struct net* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct net*) ;

__attribute__((used)) static int FUNC_3(struct vfsmount *VAR_0, struct dentry *VAR_1,
  struct kstat *VAR_2)
{
 struct inode *VAR_3 = VAR_1->d_inode;
 struct net *VAR_4;

 VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_3, VAR_2);

 if (VAR_4 != ((void*)0)) {
  VAR_2->nlink = VAR_4->proc_net->nlink;
  FUNC_2(VAR_4);
 }

 return 0;
}
