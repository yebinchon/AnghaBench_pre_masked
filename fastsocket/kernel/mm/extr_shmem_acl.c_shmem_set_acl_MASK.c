
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int i_lock; struct posix_acl* i_default_acl; struct posix_acl* i_acl; } ;




 void* FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct inode *VAR_0, int VAR_1, struct posix_acl *VAR_2)
{
 struct posix_acl *VAR_3 = ((void*)0);

 FUNC_2(&VAR_0->i_lock);
 switch(VAR_1) {
  case 129:
   VAR_3 = VAR_0->i_acl;
   VAR_0->i_acl = FUNC_0(VAR_2);
   break;

  case 128:
   VAR_3 = VAR_0->i_default_acl;
   VAR_0->i_default_acl = FUNC_0(VAR_2);
   break;
 }
 FUNC_3(&VAR_0->i_lock);
 FUNC_1(VAR_3);
}
