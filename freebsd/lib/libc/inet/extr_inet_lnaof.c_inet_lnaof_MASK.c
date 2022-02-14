
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef int in_addr_t ;
typedef int i ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

in_addr_t
FUNC_3(struct in_addr VAR_3)
{
 in_addr_t VAR_4 = FUNC_2(VAR_3.s_addr);

 if (FUNC_0(VAR_4))
  return ((VAR_4)&VAR_0);
 else if (FUNC_1(VAR_4))
  return ((VAR_4)&VAR_1);
 else
  return ((VAR_4)&VAR_2);
}
