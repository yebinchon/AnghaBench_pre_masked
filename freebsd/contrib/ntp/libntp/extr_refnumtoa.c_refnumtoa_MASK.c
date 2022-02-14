
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef scalar_t__ u_int32 ;
typedef int sockaddr_u ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int ,char*,...) ;
 char const* FUNC_5 (int *) ;

const char *
FUNC_6(
 sockaddr_u *VAR_1
 )
{
 u_int32 VAR_2;
 char *VAR_3;
 const char *VAR_4;

 if (!FUNC_0(VAR_1))
  return FUNC_5(VAR_1);

 FUNC_1(VAR_3);
 VAR_2 = FUNC_2(VAR_1);
 VAR_4 = FUNC_3((int)((u_long)VAR_2 >> 8) & 0xff);

 if (VAR_4 != ((void*)0))
  FUNC_4(VAR_3, VAR_0, "%s(%lu)",
    VAR_4, (u_long)VAR_2 & 0xff);
 else
  FUNC_4(VAR_3, VAR_0, "REFCLK(%lu,%lu)",
    ((u_long)VAR_2 >> 8) & 0xff,
    (u_long)VAR_2 & 0xff);

 return VAR_3;
}
