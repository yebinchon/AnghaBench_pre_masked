
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* heim_general_string ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (size_t) ;
 unsigned char* FUNC_1 (unsigned char const*,int ,size_t) ;
 int FUNC_2 (char*,unsigned char const*,size_t) ;

int
FUNC_3 (const unsigned char *VAR_3, size_t VAR_4,
   heim_general_string *VAR_5, size_t *VAR_6)
{
    const unsigned char *VAR_7;
    char *VAR_8;

    VAR_7 = FUNC_1(VAR_3, 0, VAR_4);
    if (VAR_7 != ((void*)0)) {





 while ((size_t)(VAR_7 - VAR_3) < VAR_4 && *VAR_7 == '\0')
     VAR_7++;
       if ((size_t)(VAR_7 - VAR_3) != VAR_4)
     return VAR_0;
    }
    if (VAR_4 > VAR_4 + 1)
 return VAR_1;

    VAR_8 = FUNC_0 (VAR_4 + 1);
    if (VAR_8 == ((void*)0))
 return VAR_2;
    FUNC_2 (VAR_8, VAR_3, VAR_4);
    VAR_8[VAR_4] = '\0';
    *VAR_5 = VAR_8;
    if(VAR_6) *VAR_6 = VAR_4;
    return 0;
}
