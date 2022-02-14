
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*) ;
 int FUNC_2 (char const) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_0)
{
 char *VAR_1, *VAR_2;
 const char *VAR_3;

 VAR_1 = (char *)FUNC_0(FUNC_1(VAR_0) + 1);
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 for (VAR_3 = VAR_0, VAR_2 = VAR_1; *VAR_3 != '\0'; ) {
  if (VAR_3[0] == '%' && VAR_3[1] != '\0' && VAR_3[2] != '\0') {

   int VAR_4 = FUNC_2(VAR_3[1]);
   int VAR_5 = FUNC_2(VAR_3[2]);
   if (VAR_4 >= 0 && VAR_5 >= 0) {

    VAR_3 += 3;

    *VAR_2++ = ((VAR_4 << 4) | VAR_5);
    continue;
   }

  }
  *VAR_2++ = *VAR_3++;
 }
 *VAR_2 = '\0';
 return (VAR_1);
}
