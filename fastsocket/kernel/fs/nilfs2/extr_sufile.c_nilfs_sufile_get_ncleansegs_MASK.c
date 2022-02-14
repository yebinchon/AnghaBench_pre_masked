
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sustat {unsigned long ss_ncleansegs; } ;
struct inode {int dummy; } ;


 int FUNC_0 (struct inode*,struct nilfs_sustat*) ;

int FUNC_1(struct inode *VAR_0, unsigned long *VAR_1)
{
 struct nilfs_sustat VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, &VAR_2);
 if (VAR_3 == 0)
  *VAR_1 = VAR_2.ss_ncleansegs;
 return VAR_3;
}
