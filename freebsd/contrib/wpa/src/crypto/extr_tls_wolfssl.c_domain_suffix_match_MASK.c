
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_1, size_t VAR_2, const char *VAR_3,
          size_t VAR_4, int VAR_5)
{
 size_t VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
  if (VAR_1[VAR_6] == '\0') {
   FUNC_1(VAR_0,
       "TLS: Embedded null in a string - reject");
   return 0;
  }
 }

 if (VAR_4 > VAR_2 || (VAR_5 && VAR_4 != VAR_2))
  return 0;

 if (FUNC_0(VAR_1 + VAR_2 - VAR_4, VAR_3, VAR_4) != 0)
  return 0;

 if (VAR_4 == VAR_2)
  return 1;

 if (VAR_1[VAR_2 - VAR_4 - 1] == '.')
  return 1;

 FUNC_1(VAR_0, "TLS: Reject due to incomplete label match");
 return 0;
}
