
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,unsigned char const*,unsigned char const*) ;

__attribute__((used)) static int
FUNC_1(const unsigned char **VAR_0, const unsigned char *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 const unsigned char *VAR_4 = *VAR_0;

 FUNC_0("Parse const: ", VAR_4, *VAR_0);
 for (VAR_3--; VAR_4 < VAR_1 && --VAR_3;) {
  if (*VAR_4++ == *++VAR_2)
   continue;
 }
 if (VAR_3)
  FUNC_0("Bad const: ", VAR_4, *VAR_0);
 *VAR_0 = VAR_4;
 return VAR_3 == 0;
}
