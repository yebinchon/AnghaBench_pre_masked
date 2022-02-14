
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_export {int ex_flags; } ;
struct dentry {int * d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;

int FUNC_1(struct dentry *VAR_1, struct svc_export *VAR_2)
{
 if (FUNC_0(VAR_1))
  return 1;
 if (!(VAR_2->ex_flags & VAR_0))
  return 0;
 return VAR_1->d_inode != ((void*)0);
}
