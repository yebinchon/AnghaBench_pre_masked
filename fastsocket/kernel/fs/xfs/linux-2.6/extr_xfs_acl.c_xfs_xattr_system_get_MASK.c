
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct posix_acl {int dummy; } ;
struct inode {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct posix_acl*) ;
 int FUNC_1 (struct posix_acl*) ;
 int FUNC_2 (struct posix_acl*) ;
 int FUNC_3 (struct posix_acl*,void*,size_t) ;
 int FUNC_4 (char const*) ;
 struct posix_acl* FUNC_5 (struct inode*,int) ;

__attribute__((used)) static int
FUNC_6(struct inode *VAR_1, const char *VAR_2,
  void *VAR_3, size_t VAR_4)
{
 struct posix_acl *VAR_5;
 int VAR_6, VAR_7;

 VAR_6 = FUNC_4(VAR_2);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_5 = FUNC_5(VAR_1, VAR_6);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_5, VAR_3, VAR_4);
 FUNC_2(VAR_5);

 return VAR_7;
}
