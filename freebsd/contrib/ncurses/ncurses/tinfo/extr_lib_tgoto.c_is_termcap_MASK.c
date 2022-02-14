
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_0(const char *VAR_2)
{
    bool VAR_3 = VAR_1;

    if (VAR_2 == 0 || *VAR_2 == '\0') {
 VAR_3 = VAR_0;
    } else {
 while ((*VAR_2 != '\0') && VAR_3) {
     if (*VAR_2 == '%') {
  switch (*++VAR_2) {
  case 'p':
      VAR_3 = VAR_0;
      break;
  case '\0':
      VAR_2--;
      break;
  }
     } else if (VAR_2[0] == '$' && VAR_2[1] == '<') {
  VAR_3 = VAR_0;
     }
     VAR_2++;
 }
    }
    return VAR_3;
}
