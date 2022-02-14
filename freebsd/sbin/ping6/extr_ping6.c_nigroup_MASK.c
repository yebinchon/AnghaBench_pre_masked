
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char u_int8_t ;
struct in6_addr {int * s6_addr; } ;
typedef int hbuf ;
typedef int ctxt ;
typedef int c ;
typedef int MD5_CTX ;


 int VAR_0 ;
 int FUNC_0 (unsigned char*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,size_t) ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*,int *,int) ;
 int * FUNC_4 (int ,struct in6_addr*,char*,int) ;
 int FUNC_5 (int ,char*,struct in6_addr*) ;
 scalar_t__ FUNC_6 (unsigned char) ;
 int FUNC_7 (int *,int ,int) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,size_t) ;
 char FUNC_12 (unsigned char) ;

__attribute__((used)) static char *
FUNC_13(char *VAR_2, int VAR_3)
{
 char *VAR_4;
 char *VAR_5;
 MD5_CTX VAR_6;
 u_int8_t VAR_7[16];
 u_int8_t VAR_8;
 size_t VAR_9;
 char VAR_10[VAR_1];
 struct in6_addr VAR_11;
 int VAR_12;

 VAR_4 = FUNC_8(VAR_2, '.');
 if (!VAR_4)
  VAR_4 = VAR_2 + FUNC_10(VAR_2);
 VAR_9 = VAR_4 - VAR_2;
 if (VAR_9 > 63 || VAR_9 > sizeof(VAR_10) - 1)
  return ((void*)0);
 FUNC_11(VAR_10, VAR_2, VAR_9);
 VAR_10[(int)VAR_9] = '\0';

 for (VAR_5 = VAR_2; *VAR_5; VAR_5++) {
  if (FUNC_6(*(unsigned char *)VAR_5))
   *VAR_5 = FUNC_12(*(unsigned char *)VAR_5);
 }


 FUNC_7(&VAR_6, 0, sizeof(VAR_6));
 FUNC_1(&VAR_6);
 VAR_8 = VAR_9 & 0xff;
 FUNC_2(&VAR_6, &VAR_8, sizeof(VAR_8));
 FUNC_2(&VAR_6, (unsigned char *)VAR_2, VAR_9);
 FUNC_0(VAR_7, &VAR_6);

 if (VAR_3) {

  VAR_12 = FUNC_5(VAR_0, "ff02::2:0000:0000", &VAR_11);
 } else {

  VAR_12 = FUNC_5(VAR_0, "ff02::2:ff00:0000", &VAR_11);
 }
 if (VAR_12 != 1)
  return ((void*)0);

 if (VAR_3) {

  FUNC_3(VAR_7, &VAR_11[12], 4);
 } else {

  FUNC_3(VAR_7, &VAR_11[13], 3);
 }

 if (FUNC_4(VAR_0, &VAR_11, VAR_10, sizeof(VAR_10)) == ((void*)0))
  return ((void*)0);

 return FUNC_9(VAR_10);
}
