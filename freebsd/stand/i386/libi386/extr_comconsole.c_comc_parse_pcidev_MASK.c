
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (char const*,char**,int ) ;

__attribute__((used)) static uint32_t
FUNC_2(const char *VAR_0)
{




 char *VAR_1, *VAR_2;
 uint8_t VAR_3, VAR_4, VAR_5, VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_0, &VAR_1, 0);
 if (VAR_1 == VAR_0 || *VAR_1 != ':' || VAR_8 < 0 )
  return (0);
 VAR_3 = VAR_8;
 VAR_2 = ++VAR_1;

 VAR_8 = FUNC_1(VAR_2, &VAR_1, 0);
 if (VAR_1 == VAR_0 || *VAR_1 != ':' || VAR_8 < 0 )
  return (0);
 VAR_4 = VAR_8;
 VAR_2 = ++VAR_1;

 VAR_8 = FUNC_1(VAR_2, &VAR_1, 0);
 if (VAR_1 == VAR_0 || (*VAR_1 != ':' && *VAR_1 != '\0') || VAR_8 < 0 )
  return (0);
 VAR_5 = VAR_8;

 if (*VAR_1 == ':') {
  VAR_2 = ++VAR_1;
  VAR_8 = FUNC_1(VAR_2, &VAR_1, 0);
  if (VAR_1 == VAR_0 || *VAR_1 != '\0' || VAR_8 <= 0 )
   return (0);
  VAR_6 = VAR_8;
 } else
  VAR_6 = 0x10;

 VAR_7 = (VAR_6 << 16) | FUNC_0(VAR_3, VAR_4, VAR_5);
 return (VAR_7);

}
