
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sockaddr_u ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char const* FUNC_4 (int *) ;
 int VAR_1 ;
 int FUNC_5 (char*,int ,char*,char const*,int) ;
 char* FUNC_6 (int *) ;
 char const* FUNC_7 (int *) ;

const char *
FUNC_8(
 sockaddr_u *VAR_2
 )
{
 const char * VAR_3;
 char * VAR_4;

 if (!VAR_1 || FUNC_2(VAR_2))
  return FUNC_7(VAR_2);
 else if (FUNC_0(VAR_2))
  return FUNC_4(VAR_2);

 VAR_3 = FUNC_6(VAR_2);
 FUNC_1(VAR_4);
 FUNC_5(VAR_4, VAR_0, "%s:%u", VAR_3, FUNC_3(VAR_2));

 return VAR_4;
}
