
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
typedef int XATTR_TRUSTED_PREFIX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct inode*,char const*,void*,size_t) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct inode *VAR_3, const char *VAR_4, void *VAR_5, size_t VAR_6)
{
 if (FUNC_3(VAR_4) < sizeof(XATTR_TRUSTED_PREFIX))
  return -VAR_1;

 if (!FUNC_1(VAR_0) || FUNC_0(VAR_3))
  return -VAR_2;

 return FUNC_2(VAR_3, VAR_4, VAR_5, VAR_6);
}
