
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;


 int FUNC_0 (char*,int,char*,int const) ;

__attribute__((used)) static const char *
FUNC_1(const uint8_t VAR_0)
{
 static char VAR_1[sizeof("255 (bogus)")];
 FUNC_0(VAR_1, sizeof(VAR_1), VAR_0 <= 7 ? "%u" : "%u (bogus)", VAR_0);
 return VAR_1;
}
