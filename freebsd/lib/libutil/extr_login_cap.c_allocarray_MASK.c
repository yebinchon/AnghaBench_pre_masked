
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char const** VAR_0 ;
 size_t VAR_1 ;
 char** FUNC_0 (char const**,size_t,int) ;

__attribute__((used)) static const char **
FUNC_1(size_t VAR_2)
{
    static const char **VAR_3;

    if (VAR_2 <= VAR_1)
 VAR_3 = VAR_0;
    else if ((VAR_3 = FUNC_0(VAR_0, VAR_2, sizeof(char*))) != ((void*)0)) {
 VAR_1 = VAR_2;
 VAR_0 = VAR_3;
    }
    return VAR_3;
}
