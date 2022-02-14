
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32 ;
typedef int sockaddr_u ;


 int FUNC_0 (char const*,char const*,int ) ;
 char* FUNC_1 (int ) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void
FUNC_4(
 const char *VAR_0,
 u_int32 VAR_1,
 sockaddr_u *VAR_2
 )
{
 const char *VAR_3;

 if (((void*)0) == VAR_2)
  VAR_3 = FUNC_1(VAR_1);
 else
  VAR_3 = FUNC_2(VAR_2);
 FUNC_0(VAR_0, VAR_3, FUNC_3(VAR_3));
}
