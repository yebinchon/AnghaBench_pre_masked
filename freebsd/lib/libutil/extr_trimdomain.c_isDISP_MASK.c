
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 size_t VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0, "0123456789");
 VAR_2 = 0;
 if (VAR_1 > 0) {
  if (VAR_0[VAR_1] == '\0')
   VAR_2 = 1;
  else if (VAR_0[VAR_1] == '.') {
   VAR_0 += VAR_1 + 1;
   VAR_1 = FUNC_0(VAR_0, "0123456789");
   if (VAR_1 > 0 && VAR_0[VAR_1] == '\0')
    VAR_2 = 1;
  }
 }
 return (VAR_2);
}
