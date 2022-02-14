
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int buf ;


 int const VAR_0 ;
 int FUNC_0 (char*,int,char const*,int const) ;

__attribute__((used)) static const char *
FUNC_1(const uint16_t VAR_1)
{
 static char VAR_2[sizeof("65535 (bogus)")];
 const char *VAR_3;

 if (VAR_1 == VAR_0)
  return "NONE";
 VAR_3 = (VAR_1 > 0 && VAR_1 < 0x0fff) ? "%u" : "%u (bogus)";
 FUNC_0(VAR_2, sizeof(VAR_2), VAR_3, VAR_1);
 return VAR_2;
}
