
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int XATTR_SECURITY_PREFIX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,char const*,void*,size_t) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static int
FUNC_3(struct inode *VAR_2, const char *VAR_3, void *VAR_4, size_t VAR_5)
{
 if (FUNC_2(VAR_3) < sizeof(XATTR_SECURITY_PREFIX))
  return -VAR_0;

 if (FUNC_0(VAR_2))
  return -VAR_1;

 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
}
