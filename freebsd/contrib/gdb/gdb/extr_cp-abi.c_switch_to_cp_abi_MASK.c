
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cp_abi_ops {int dummy; } ;


 struct cp_abi_ops VAR_0 ;
 struct cp_abi_ops* FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_1)
{
  struct cp_abi_ops *VAR_2;

  VAR_2 = FUNC_0 (VAR_1);
  if (VAR_2 == ((void*)0))
    return 0;

  VAR_0 = *VAR_2;
  return 1;
}
