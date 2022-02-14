
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int POSIX_ACL_XATTR_DEFAULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (struct inode*,int ,void*,size_t) ;

__attribute__((used)) static int
FUNC_2(struct inode *VAR_2, const char *VAR_3,
        void *VAR_4, size_t VAR_5)
{
 if (FUNC_0(VAR_3) != sizeof(POSIX_ACL_XATTR_DEFAULT) - 1)
  return -VAR_1;
 return FUNC_1(VAR_2, VAR_0, VAR_4, VAR_5);
}
