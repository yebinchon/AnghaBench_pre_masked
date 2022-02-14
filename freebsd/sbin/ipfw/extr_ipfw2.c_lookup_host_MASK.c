
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct hostent {scalar_t__* h_addr_list; } ;


 struct hostent* FUNC_0 (char*) ;
 int FUNC_1 (char*,struct in_addr*) ;

__attribute__((used)) static int
FUNC_2 (char *VAR_0, struct in_addr *VAR_1)
{
 struct hostent *VAR_2;

 if (!FUNC_1(VAR_0, VAR_1)) {
  if ((VAR_2 = FUNC_0(VAR_0)) == ((void*)0))
   return(-1);
  *VAR_1 = *(struct in_addr *)VAR_2->h_addr_list[0];
 }
 return(0);
}
