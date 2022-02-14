
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char const*,char const*,char const*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0,
        const char *VAR_1,
        const char *VAR_2,
        const char *VAR_3)
{
 const char *VAR_4 = VAR_2;
 bool VAR_5 = 1;
 bool VAR_6;

 while (VAR_2 < VAR_3 - 1) {

  if (*VAR_2++ != '\\' || *VAR_2++ != '-')
   continue;
  VAR_6 = FUNC_0(VAR_0,
        VAR_1,
        VAR_4,
        VAR_2 - 2);
  if (VAR_5)
   VAR_6 = !VAR_6;
  if (VAR_6)
   return 0;
  VAR_5 = 0;
  VAR_4 = VAR_2;
 }
 VAR_6 = FUNC_0(VAR_0, VAR_1,
       VAR_4, VAR_3);
 return VAR_5 ? VAR_6 : !VAR_6;
}
