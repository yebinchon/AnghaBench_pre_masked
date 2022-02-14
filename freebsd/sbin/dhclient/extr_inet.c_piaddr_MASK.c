
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;
struct iaddr {scalar_t__ len; int iabuf; } ;
typedef int pbuf ;


 char* FUNC_0 (struct in_addr) ;
 int FUNC_1 (struct in_addr*,int *,int) ;
 int FUNC_2 (char*,char*,int) ;

char *
FUNC_3(struct iaddr VAR_0)
{
 static char VAR_1[32];
 struct in_addr VAR_2;
 char *VAR_3;

 FUNC_1(&VAR_2, &(VAR_0.iabuf), sizeof(struct in_addr));

 if (VAR_0.len == 0)
  FUNC_2(VAR_1, "<null address>", sizeof(VAR_1));
 else {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 != ((void*)0))
   FUNC_2(VAR_1, VAR_3, sizeof(VAR_1));
  else
   FUNC_2(VAR_1, "<invalid address>", sizeof(VAR_1));
 }
 return (VAR_1);
}
