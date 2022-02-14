
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char*,size_t,char*,char const*) ;
 scalar_t__ FUNC_3 (char*,size_t,char const*,int ) ;

__attribute__((used)) static int FUNC_4(char *VAR_2, size_t VAR_3, const char *VAR_4,
        const char *VAR_5, va_list VAR_6, const char *VAR_7)
{
 int VAR_8 = 0;




 if (VAR_1 < 0) {
  if (FUNC_0(1) || FUNC_1())
   VAR_1 = 1;
  else
   VAR_1 = 0;
 }

 if (VAR_1 && *VAR_4)
  VAR_8 += FUNC_2(VAR_2, VAR_3, "%s", VAR_4);
 VAR_8 += FUNC_3(VAR_2 + VAR_8, VAR_3 - VAR_8, VAR_5, VAR_6);
 if (VAR_1 && *VAR_4)
  VAR_8 += FUNC_2(VAR_2 + VAR_8, VAR_3 - VAR_8, "%s", VAR_0);
 if (VAR_7)
  VAR_8 += FUNC_2(VAR_2 + VAR_8, VAR_3 - VAR_8, "%s", VAR_7);
 return VAR_8;
}
