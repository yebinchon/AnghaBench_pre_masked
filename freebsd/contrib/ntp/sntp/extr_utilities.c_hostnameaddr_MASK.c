
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sockaddr_u ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,...) ;
 char* FUNC_2 (int const*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

const char *
FUNC_4(
 const char * VAR_1,
 const sockaddr_u * VAR_2
 )
{
 const char * VAR_3;
 char * VAR_4;
 int VAR_5;

 VAR_3 = FUNC_2(VAR_2);
 FUNC_0(VAR_4);
 if (FUNC_3(VAR_1, VAR_3))
  VAR_5 = FUNC_1(VAR_4, VAR_0, "%s %s",
          VAR_1, VAR_3);
 else
  VAR_5 = FUNC_1(VAR_4, VAR_0, "%s", VAR_3);
 if (VAR_5 >= VAR_0)
  FUNC_1(VAR_4, VAR_0,
    "hostnameaddr ERROR have %d (%d needed)",
    VAR_0, VAR_5 + 1);

 return VAR_4;
}
