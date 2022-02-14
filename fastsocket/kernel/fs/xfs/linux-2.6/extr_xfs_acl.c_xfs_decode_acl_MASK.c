
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_3)
{
 if (FUNC_0(VAR_3, "posix_acl_access") == 0)
  return VAR_0;
 else if (FUNC_0(VAR_3, "posix_acl_default") == 0)
  return VAR_1;
 return -VAR_2;
}
