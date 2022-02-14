
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {scalar_t__ s_addr; } ;
struct hostent {scalar_t__ h_addr; } ;
typedef scalar_t__ in_addr_t ;


 scalar_t__ VAR_0 ;
 struct hostent* FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*) ;

in_addr_t
FUNC_2(const char *VAR_1)
{
 struct hostent *VAR_2;
 in_addr_t VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 != VAR_0) {

  return (VAR_3);
 }

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2 == ((void*)0))
  return (VAR_0);
 return (((struct in_addr *)(void *)VAR_2->h_addr)->s_addr);
}
