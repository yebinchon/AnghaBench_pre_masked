
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netent {scalar_t__ n_net; } ;
struct in_addr {int s_addr; } ;
typedef int naddr ;
typedef int hname ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct netent* FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,struct in_addr*) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,char*) ;
 char* FUNC_7 (char*,char) ;
 scalar_t__ FUNC_8 (char*,char**,int ) ;

int
FUNC_9(char *VAR_3,
       naddr *VAR_4,
       naddr *VAR_5)
{
 int VAR_6;
 struct netent *VAR_7;
 naddr VAR_8;
 struct in_addr VAR_9;
 char VAR_10[VAR_1+1];
 char *VAR_11, *VAR_12;




 if (((void*)0) != (VAR_11 = FUNC_7(VAR_3,'/'))) {
  VAR_6 = (int)(VAR_11 - VAR_3);
  if (VAR_6 > (int)sizeof(VAR_10)-1)
   return 0;
  FUNC_3(VAR_10, VAR_3, VAR_6);
  VAR_10[VAR_6] = '\0';
  VAR_11++;
  VAR_3 = VAR_10;
 }

 VAR_7 = FUNC_0(VAR_3);
 if (VAR_7 != ((void*)0)) {
  VAR_9.s_addr = (naddr)VAR_7->n_net;
  if (0 == (VAR_9.s_addr & 0xff000000))
   VAR_9.s_addr <<= 8;
  if (0 == (VAR_9.s_addr & 0xff000000))
   VAR_9.s_addr <<= 8;
  if (0 == (VAR_9.s_addr & 0xff000000))
   VAR_9.s_addr <<= 8;
 } else if (FUNC_2(VAR_3, &VAR_9) == 1) {
  VAR_9.s_addr = FUNC_4(VAR_9.s_addr);
 } else if (!VAR_11 && !FUNC_6(VAR_3,"default")) {
  VAR_9.s_addr = VAR_2;
 } else {
  return 0;
 }

 if (!VAR_11) {



  VAR_8 = FUNC_5(FUNC_1(VAR_9.s_addr));
  if ((~VAR_8 & VAR_9.s_addr) != 0)
   VAR_8 = VAR_0;
 } else {
  VAR_8 = (naddr)FUNC_8(VAR_11, &VAR_12, 0);
  if (*VAR_12 != '\0' || VAR_8 > 32)
   return 0;
  if (VAR_8 != 0)
   VAR_8 = VAR_0 << (32-VAR_8);
 }


 if (VAR_8 != 0 && VAR_9.s_addr == VAR_2)
  return 0;

 if ((~VAR_8 & VAR_9.s_addr) != 0)
  return 0;

 if ((VAR_8 & VAR_9.s_addr) == 0 && VAR_9.s_addr != VAR_2)
  return 0;
 if (VAR_9.s_addr>>24 == 0 && VAR_9.s_addr != VAR_2)
  return 0;
 if (VAR_9.s_addr>>24 == 0xff)
  return 0;

 *VAR_4 = VAR_9.s_addr;
 *VAR_5 = VAR_8;
 return 1;
}
