
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iattr {int ia_valid; } ;
struct dentry {TYPE_1__* d_inode; } ;
struct TYPE_2__ {int i_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dentry*,struct iattr*) ;

__attribute__((used)) static void FUNC_3(struct dentry *VAR_3)
{
 struct iattr VAR_4;
 VAR_4.ia_valid = VAR_2 | VAR_1 | VAR_0;

 FUNC_0(&VAR_3->d_inode->i_mutex);
 FUNC_2(VAR_3, &VAR_4);
 FUNC_1(&VAR_3->d_inode->i_mutex);
}
