
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct netinfo {void* n_mask; int n_family; void* n_dst; } ;
struct netent {int n_net; } ;
struct in_addr {int s_addr; } ;
typedef int hname ;


 int VAR_0 ;
 int VAR_1 ;
 struct netent* FUNC_0 (char*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (char*,struct in_addr*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 char* FUNC_6 (char*,char) ;
 scalar_t__ FUNC_7 (char*,char**,int ) ;

__attribute__((used)) static int
FUNC_8(char *VAR_2,
       struct netinfo *VAR_3)
{
 int VAR_4;
 struct netent *VAR_5;
 u_int VAR_6;
 struct in_addr VAR_7;
 char VAR_8[VAR_0+1];
 char *VAR_9, *VAR_10;




 if (((void*)0) != (VAR_9 = FUNC_6(VAR_2,'/'))) {
  VAR_4 = (int)(VAR_9 - VAR_2);
  if (VAR_4 > (int)sizeof(VAR_8)-1)
   return 0;
  FUNC_3(VAR_8, VAR_2, VAR_4);
  VAR_8[VAR_4] = '\0';
  VAR_9++;
  VAR_2 = VAR_8;
 }

 VAR_5 = FUNC_0(VAR_2);
 if (VAR_5 != ((void*)0)) {
  VAR_7.s_addr = VAR_5->n_net;
 } else if (FUNC_2(VAR_2, &VAR_7) == 1) {
  VAR_7.s_addr = FUNC_4(VAR_7.s_addr);
 } else {
  return 0;
 }

 if (VAR_9 == ((void*)0)) {
  VAR_6 = FUNC_5(VAR_7.s_addr);
  if ((~VAR_6 & VAR_7.s_addr) != 0)
   VAR_6 = 0xffffffff;
 } else {
  VAR_6 = (u_int)FUNC_7(VAR_9, &VAR_10, 0);
  if (*VAR_10 != '\0' || VAR_6 > 32)
   return 0;
  VAR_6 = 0xffffffff << (32-VAR_6);
 }

 VAR_3->n_dst = FUNC_1(VAR_7.s_addr);
 VAR_3->n_family = VAR_1;
 VAR_3->n_mask = FUNC_1(VAR_6);
 return 1;
}
