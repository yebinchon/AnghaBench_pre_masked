
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int locale_t ;


 int const VAR_0 ;
 char* FUNC_0 (char*,char*,char const* const) ;
 char* FUNC_1 (int,char*,char*,char const* const,int ) ;

__attribute__((used)) static char *
FUNC_2(const int VAR_1, const int VAR_2, const int VAR_3, const int VAR_4,
    char *VAR_5, const char * const VAR_6, locale_t VAR_7)
{
 register int VAR_8;
 register int VAR_9;


 VAR_9 = VAR_1 % 100 + VAR_2 % 100;
 VAR_8 = VAR_1 / 100 + VAR_2 / 100 + VAR_9 / 100;
 VAR_9 %= 100;
 if (VAR_9 < 0 && VAR_8 > 0) {
  VAR_9 += 100;
  --VAR_8;
 } else if (VAR_8 < 0 && VAR_9 > 0) {
  VAR_9 -= 100;
  ++VAR_8;
 }
 if (VAR_3) {
  if (VAR_8 == 0 && VAR_9 < 0)
   VAR_5 = FUNC_0("-0", VAR_5, VAR_6);
  else VAR_5 = FUNC_1(VAR_8, "%02d", VAR_5, VAR_6, VAR_7);
 }
 if (VAR_4)
  VAR_5 = FUNC_1(((VAR_9 < 0) ? -VAR_9 : VAR_9), "%02d", VAR_5,
       VAR_6, VAR_7);
 return (VAR_5);
}
