
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int _key ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 char* FUNC_0 (char const*,int) ;
 scalar_t__ FUNC_1 (char const*,char*,unsigned int) ;
 char* FUNC_2 (char const*,size_t,char const*,int) ;

__attribute__((used)) static unsigned int
FUNC_3(const char *VAR_3, size_t VAR_4)
{
 static const char VAR_5[] = "\r\nWARC-Type:";
 const char *VAR_6, *VAR_7;

 if ((VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5, sizeof(VAR_5) - 1U)) == ((void*)0)) {

  return VAR_0;
 }
 VAR_6 += sizeof(VAR_5) - 1U;
 if ((VAR_7 = FUNC_0(VAR_6, VAR_3 + VAR_4 - VAR_6)) == ((void*)0)) {

  return VAR_0;
 }


 while (VAR_6 < VAR_7 && (*VAR_6 == ' ' || *VAR_6 == '\t'))
  ++VAR_6;

 if (VAR_6 + 8U == VAR_7) {
  if (FUNC_1(VAR_6, "resource", 8U) == 0)
   return VAR_2;
  else if (FUNC_1(VAR_6, "response", 8U) == 0)
   return VAR_1;
 }
 return VAR_0;
}
