
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_inode; int d_parent; } ;


 int FUNC_0 (struct dentry*) ;
 struct dentry* FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (int ,struct dentry*) ;

__attribute__((used)) static void FUNC_4(struct dentry *VAR_0)
{
 struct dentry *VAR_1 = FUNC_1(VAR_0->d_parent);

 FUNC_0(VAR_0);
 FUNC_3(VAR_1->d_inode, VAR_0);
 FUNC_2(VAR_1);
}
