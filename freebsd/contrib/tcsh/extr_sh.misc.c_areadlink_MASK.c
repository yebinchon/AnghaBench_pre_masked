
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char*,size_t) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 char* FUNC_3 (char*,int) ;

char *
FUNC_4(const char *VAR_2)
{
    char *VAR_3;
    size_t VAR_4;
    ssize_t VAR_5;

    VAR_4 = VAR_0 + 1;
    VAR_3 = FUNC_2(VAR_4);
    while ((size_t)(VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4)) == VAR_4) {
 VAR_4 *= 2;
 VAR_3 = FUNC_3(VAR_3, VAR_4);
    }
    if (VAR_5 == -1) {
 int VAR_6;

 VAR_6 = VAR_1;
 FUNC_1(VAR_3);
 VAR_1 = VAR_6;
 return ((void*)0);
    }
    VAR_3[VAR_5] = '\0';
    return FUNC_3(VAR_3, VAR_5 + 1);
}
