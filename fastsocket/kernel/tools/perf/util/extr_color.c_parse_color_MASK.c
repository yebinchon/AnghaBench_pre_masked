
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const* const*) ;
 int FUNC_1 (char const*,char const*,int) ;
 int FUNC_2 (char const*,char**,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_0, int VAR_1)
{
 static const char * const VAR_2[] = {
  "normal", "black", "red", "green", "yellow",
  "blue", "magenta", "cyan", "white"
 };
 char *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < (int)FUNC_0(VAR_2); VAR_4++) {
  const char *VAR_5 = VAR_2[VAR_4];
  if (!FUNC_1(VAR_0, VAR_5, VAR_1) && !VAR_5[VAR_1])
   return VAR_4 - 1;
 }
 VAR_4 = FUNC_2(VAR_0, &VAR_3, 10);
 if (VAR_3 - VAR_0 == VAR_1 && VAR_4 >= -1 && VAR_4 <= 255)
  return VAR_4;
 return -2;
}
