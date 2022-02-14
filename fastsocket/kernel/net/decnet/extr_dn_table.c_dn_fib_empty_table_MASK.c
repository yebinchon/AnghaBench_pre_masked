
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct dn_fib_table {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dn_fib_table* FUNC_0 (scalar_t__,int) ;

struct dn_fib_table *FUNC_1(void)
{
 u32 VAR_2;

 for(VAR_2 = VAR_1; VAR_2 <= VAR_0; VAR_2++)
  if (FUNC_0(VAR_2, 0) == ((void*)0))
   return FUNC_0(VAR_2, 1);
 return ((void*)0);
}
