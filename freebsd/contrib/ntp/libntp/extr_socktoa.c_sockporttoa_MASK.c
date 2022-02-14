
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sockaddr_u ;


 scalar_t__ FUNC_0 (int const*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int const*) ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,char*,char const*,int ) ;
 int FUNC_4 () ;
 char* FUNC_5 (int const*) ;

const char *
FUNC_6(
 const sockaddr_u *VAR_2
 )
{
 int VAR_3;
 const char * VAR_4;
 char * VAR_5;

 VAR_3 = FUNC_4();
 VAR_4 = FUNC_5(VAR_2);
 FUNC_1(VAR_5);
 FUNC_3(VAR_5, VAR_0,
   (FUNC_0(VAR_2))
       ? "[%s]:%hu"
       : "%s:%hu",
   VAR_4, FUNC_2(VAR_2));
 VAR_1 = VAR_3;

 return VAR_5;
}
