
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
typedef int in_addr_t ;
typedef int i ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;

in_addr_t
FUNC_3(struct in_addr VAR_6)
{
 in_addr_t VAR_7 = FUNC_2(VAR_6.s_addr);

 if (FUNC_0(VAR_7))
  return (((VAR_7)&VAR_0) >> VAR_1);
 else if (FUNC_1(VAR_7))
  return (((VAR_7)&VAR_2) >> VAR_3);
 else
  return (((VAR_7)&VAR_4) >> VAR_5);
}
