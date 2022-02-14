
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ VAR_3 ;

int
FUNC_2(Char **VAR_4)
{
    int VAR_5;
    const Char *VAR_6;

    VAR_5 = 0;
    while ((VAR_6 = *VAR_4++) != ((void*)0)) {
 if (*VAR_6 == '~' || *VAR_6 == '=')
     VAR_5 |= VAR_0;
 else if (*VAR_6 == '{' &&
   (VAR_6[1] == '\0' || (VAR_6[1] == '}' && VAR_6[2] == '\0')))
     continue;
 while (*VAR_6 != '\0') {
     if (*VAR_6 == '`') {
  VAR_5 |= VAR_0;
     }
     else if (*VAR_6 == '{')
  VAR_5 |= VAR_0;
     else if (FUNC_1(*VAR_6))
  VAR_5 |= VAR_1;
     else if (VAR_3 == VAR_2 &&
  VAR_6[1] && FUNC_0(VAR_6) && (VAR_6 == *(VAR_4-1) || *(VAR_6-1) == '/') )
      VAR_5 |= VAR_0;
     VAR_6++;
 }
    }
    return VAR_5;
}
