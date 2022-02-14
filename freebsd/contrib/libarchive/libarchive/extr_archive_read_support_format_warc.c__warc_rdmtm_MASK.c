
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int _key ;


 char* FUNC_0 (char const*,int) ;
 char* FUNC_1 (char const*,size_t,char const*,int) ;
 int FUNC_2 (char const*,char**) ;

__attribute__((used)) static time_t
FUNC_3(const char *VAR_0, size_t VAR_1)
{
 static const char VAR_2[] = "\r\nLast-Modified:";
 const char *VAR_3, *VAR_4;
 char *VAR_5 = ((void*)0);
 time_t VAR_6;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2, sizeof(VAR_2) - 1U)) == ((void*)0)) {

  return (time_t)-1;
 }
 VAR_3 += sizeof(VAR_2) - 1U;
 if ((VAR_4 = FUNC_0(VAR_3, VAR_0 + VAR_1 - VAR_3)) == ((void*)0) ) {

  return -1;
 }


 VAR_6 = FUNC_2(VAR_3, &VAR_5);
 if (VAR_5 != VAR_4) {

  return -1;
 }
 return VAR_6;
}
