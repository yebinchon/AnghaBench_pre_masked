
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int tmp ;
typedef scalar_t__ socklen_t ;


 int FUNC_0 (char*,int,char const*,int const,int const,int const,int const) ;
 int FUNC_1 (char*,char*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_2(const u_char *VAR_0, char *VAR_1, socklen_t VAR_2)
{
 static const char VAR_3[] = "%u.%u.%u.%u";
 char VAR_4[sizeof "255.255.255.255"];
 int VAR_5;

 VAR_5 = FUNC_0(VAR_4, sizeof(VAR_4), VAR_3, VAR_0[0], VAR_0[1], VAR_0[2], VAR_0[3]);
 if (VAR_5 <= 0 || (socklen_t) VAR_5 >= VAR_2) {
  return (((void*)0));
 }
 FUNC_1(VAR_1, VAR_4, VAR_2);
 return (VAR_1);
}
