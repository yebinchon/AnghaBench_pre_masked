
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int tmp ;
typedef scalar_t__ socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,char const*,int const,int const,int const,int const) ;
 int FUNC_1 (char*,char*,scalar_t__) ;

__attribute__((used)) static const char *
FUNC_2(const u_char *VAR_2, char *VAR_3, socklen_t VAR_4)
{
 static const char VAR_5[] = "%u.%u.%u.%u";
 char VAR_6[sizeof "255.255.255.255"];
 int VAR_7;

 VAR_7 = FUNC_0(VAR_6, sizeof(VAR_6), VAR_5, VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3]);
 if (VAR_7 <= 0 || (socklen_t) VAR_7 >= VAR_4) {
  VAR_1 = VAR_0;
  return (((void*)0));
 }
 FUNC_1(VAR_3, VAR_6, VAR_4);
 return (VAR_3);
}
