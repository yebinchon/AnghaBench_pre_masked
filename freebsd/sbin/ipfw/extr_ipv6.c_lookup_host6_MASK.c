
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct hostent {int * h_addr_list; } ;


 int VAR_0 ;
 struct hostent* FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,char*,struct in6_addr*) ;
 int FUNC_2 (struct in6_addr*,int ,int) ;

__attribute__((used)) static int
FUNC_3 (char *VAR_1, struct in6_addr *VAR_2)
{
 struct hostent *VAR_3;

 if (!FUNC_1(VAR_0, VAR_1, VAR_2)) {
  if ((VAR_3 = FUNC_0(VAR_1, VAR_0)) == ((void*)0))
   return(-1);
  FUNC_2(VAR_2, VAR_3->h_addr_list[0], sizeof( struct in6_addr));
 }
 return (0);
}
