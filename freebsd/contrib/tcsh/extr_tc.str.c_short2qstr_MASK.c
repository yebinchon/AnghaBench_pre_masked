
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ptrdiff_t ;
typedef int Char ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int const VAR_2 ;
 int FUNC_0 (char*,int const) ;
 char* FUNC_1 (size_t) ;
 char* FUNC_2 (char*,size_t) ;

char *
FUNC_3(const Char *VAR_3)
{
    static char *VAR_4 = ((void*)0);
    static size_t VAR_5 = 0;
    char *VAR_6, *VAR_7;

    if (VAR_3 == ((void*)0))
 return (((void*)0));

    if (VAR_4 == ((void*)0)) {
 VAR_5 = VAR_0;
 VAR_4 = FUNC_1((VAR_5 + VAR_1) * sizeof(char));
    }
    VAR_6 = VAR_4;
    VAR_7 = &VAR_6[VAR_5];
    while (*VAR_3) {
 if (*VAR_3 & VAR_2) {
     *VAR_6++ = '\\';
     if (VAR_6 == VAR_7) {
  VAR_5 += VAR_0;
  VAR_4 = FUNC_2(VAR_4,
    (VAR_5 + VAR_1) * sizeof(char));
  VAR_7 = &VAR_4[VAR_5];
  VAR_6 = &VAR_7[-VAR_0];
     }
 }
 VAR_6 += FUNC_0(VAR_6, *VAR_3);
 VAR_3++;
 if (VAR_6 >= VAR_7) {
     ptrdiff_t VAR_8 = VAR_6 - VAR_7;
     VAR_5 += VAR_0;
     VAR_4 = FUNC_2(VAR_4, (VAR_5 + VAR_1) * sizeof(char));
     VAR_7 = &VAR_4[VAR_5];
     VAR_6 = &VAR_7[-VAR_0 + VAR_8];
 }
    }
    *VAR_6 = 0;
    return (VAR_4);
}
