
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int) ;

__attribute__((used)) static const char *
FUNC_1(uint32_t VAR_0)
{
 static char VAR_1[20];

 if (VAR_0 == (uint32_t)~0UL)
  return "infinity";
 else {
  FUNC_0(VAR_1, sizeof(VAR_1), "%us", VAR_0);
  return VAR_1;
 }
}
