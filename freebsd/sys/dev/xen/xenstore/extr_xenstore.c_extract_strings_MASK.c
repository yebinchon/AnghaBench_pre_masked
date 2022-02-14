
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;


 scalar_t__ FUNC_0 (char const*) ;

__attribute__((used)) static u_int
FUNC_1(const char *VAR_0, const char **VAR_1, u_int VAR_2)
{
 u_int VAR_3;
 const char *VAR_4;

 for (VAR_4 = VAR_0, VAR_3 = 0; VAR_4 < VAR_0 + VAR_2; VAR_4 += FUNC_0(VAR_4) + 1) {
  if (VAR_1 != ((void*)0))
   *VAR_1++ = VAR_4;
  VAR_3++;
 }

 return (VAR_3);
}
