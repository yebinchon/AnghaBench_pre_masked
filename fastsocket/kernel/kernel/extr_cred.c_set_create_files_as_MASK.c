
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int i_gid; int i_uid; } ;
struct cred {int fsgid; int fsuid; } ;


 int FUNC_0 (struct cred*,struct inode*) ;

int FUNC_1(struct cred *VAR_0, struct inode *VAR_1)
{
 VAR_0->fsuid = VAR_1->i_uid;
 VAR_0->fsgid = VAR_1->i_gid;
 return FUNC_0(VAR_0, VAR_1);
}
