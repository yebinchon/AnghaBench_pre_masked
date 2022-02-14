
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_sb; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*,int ,int *) ;
 int FUNC_1 (int ,char*,char*,int) ;

int FUNC_2(struct inode *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1, VAR_0, ((void*)0));
 if (VAR_2)
  FUNC_1(VAR_1->i_sb, "jdm-20004",
     "Couldn't delete all xattrs (%d)\n", VAR_2);
 return VAR_2;
}
