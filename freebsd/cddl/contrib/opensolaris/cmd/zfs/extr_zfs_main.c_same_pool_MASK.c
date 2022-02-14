
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zfs_handle_t ;


 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;
 char* FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(zfs_handle_t *VAR_1, const char *VAR_2)
{
 int VAR_3 = FUNC_0(VAR_2, "/@");
 const char *VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = FUNC_0(VAR_4, "/@");

 if (VAR_3 != VAR_5)
  return (VAR_0);
 return (FUNC_1(VAR_2, VAR_4, VAR_3) == 0);
}
