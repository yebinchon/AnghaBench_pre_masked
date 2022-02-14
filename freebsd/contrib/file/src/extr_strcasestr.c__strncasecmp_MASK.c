
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char const) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 if (VAR_2 != 0) {
  const unsigned char *VAR_3 = (const unsigned char *)VAR_0,
    *VAR_4 = (const unsigned char *)VAR_1;

  do {
   if (FUNC_0(*VAR_3) != FUNC_0(*VAR_4++))
    return FUNC_0(*VAR_3) - FUNC_0(*--VAR_4);
   if (*VAR_3++ == '\0')
    break;
  } while (--VAR_2 != 0);
 }
 return 0;
}
