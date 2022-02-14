
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 char const VAR_0 ;

int
FUNC_1(const Char *VAR_1, const Char *VAR_2)
{
    for (; (*VAR_1 & VAR_0) == (*VAR_2 & VAR_0); VAR_2++, VAR_1++)
 if (*VAR_2 == '\0')
     return 0;
    if (*VAR_1) {
 if (*VAR_2) {
     if (VAR_1[1] && VAR_2[1] && (*VAR_1 & VAR_0) == (VAR_2[1] & VAR_0) &&
  (*VAR_2 & VAR_0) == (VAR_1[1] & VAR_0) && FUNC_0(VAR_1 + 2, VAR_2 + 2))
  return 1;
     if (FUNC_0(VAR_1 + 1, VAR_2 + 1))
  return 3;
 }
 if (FUNC_0(VAR_1 + 1, VAR_2))
     return 2;
    }
    if (*VAR_2 && FUNC_0(VAR_1, VAR_2 + 1))
 return 1;
    return 4;
}
