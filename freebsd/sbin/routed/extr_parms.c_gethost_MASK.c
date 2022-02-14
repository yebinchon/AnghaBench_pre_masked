
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int s_addr; } ;
struct hostent {int h_addr; } ;
typedef int naddr ;


 struct hostent* FUNC_0 (char*) ;
 int FUNC_1 (char*,struct in_addr*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int ) ;

int
FUNC_4(char *VAR_0,
 naddr *VAR_1)
{
 struct hostent *VAR_2;
 struct in_addr VAR_3;






 if (FUNC_1(VAR_0, &VAR_3) == 1) {



  if (FUNC_3(VAR_3.s_addr)>>24 == 0
      || FUNC_3(VAR_3.s_addr)>>24 == 0xff)
   return 0;
  *VAR_1 = VAR_3.s_addr;
  return 1;
 }

 VAR_2 = FUNC_0(VAR_0);
 if (VAR_2) {
  FUNC_2(VAR_1, VAR_2->h_addr, sizeof(*VAR_1));
  return 1;
 }

 return 0;
}
