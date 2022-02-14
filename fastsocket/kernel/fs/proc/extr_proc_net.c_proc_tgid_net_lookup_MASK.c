
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int proc_net; } ;
struct nameidata {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {int dummy; } ;


 int VAR_0 ;
 struct dentry* FUNC_0 (int ) ;
 struct net* FUNC_1 (struct inode*) ;
 struct dentry* FUNC_2 (int ,struct inode*,struct dentry*) ;
 int FUNC_3 (struct net*) ;

__attribute__((used)) static struct dentry *FUNC_4(struct inode *VAR_1,
  struct dentry *VAR_2, struct nameidata *VAR_3)
{
 struct dentry *VAR_4;
 struct net *VAR_5;

 VAR_4 = FUNC_0(-VAR_0);
 VAR_5 = FUNC_1(VAR_1);
 if (VAR_5 != ((void*)0)) {
  VAR_4 = FUNC_2(VAR_5->proc_net, VAR_1, VAR_2);
  FUNC_3(VAR_5);
 }
 return VAR_4;
}
