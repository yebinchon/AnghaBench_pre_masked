
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_lock; int i_default_acl; int i_acl; } ;




 struct posix_acl* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static struct posix_acl *
FUNC_3(struct inode *VAR_0, int VAR_1)
{
 struct posix_acl *VAR_2 = ((void*)0);

 FUNC_1(&VAR_0->i_lock);
 switch(VAR_1) {
  case 129:
   VAR_2 = FUNC_0(VAR_0->i_acl);
   break;

  case 128:
   VAR_2 = FUNC_0(VAR_0->i_default_acl);
   break;
 }
 FUNC_2(&VAR_0->i_lock);

 return VAR_2;
}
