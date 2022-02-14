
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct path {TYPE_1__* dentry; } ;
struct inode {int dummy; } ;
struct cred {int dummy; } ;
typedef int loff_t ;
struct TYPE_2__ {struct inode* d_inode; } ;


 struct cred* FUNC_0 () ;
 int FUNC_1 (struct cred const*,struct inode*,scalar_t__,int *) ;
 scalar_t__ FUNC_2 (struct inode*) ;

__attribute__((used)) static int FUNC_3(struct path *VAR_0, loff_t VAR_1,
     unsigned int VAR_2)
{
 const struct cred *VAR_3 = FUNC_0();
 struct inode *VAR_4 = VAR_0->dentry->d_inode;
 u32 VAR_5 = FUNC_2(VAR_4);

 if (VAR_5)
  return FUNC_1(VAR_3, VAR_4, VAR_5, ((void*)0));

 return 0;
}
