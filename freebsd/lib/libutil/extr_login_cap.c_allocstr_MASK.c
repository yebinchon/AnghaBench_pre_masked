
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 size_t VAR_1 ;
 char* FUNC_0 (char*,size_t) ;
 char* FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static char *
FUNC_3(const char *VAR_2)
{
    char *VAR_3;

    size_t VAR_4 = FUNC_2(VAR_2) + 1;
    if (VAR_4 <= VAR_1)
 VAR_3 = FUNC_1(VAR_0, VAR_2);
    else if ((VAR_3 = FUNC_0(VAR_0, VAR_4)) != ((void*)0)) {
 VAR_1 = VAR_4;
 VAR_0 = FUNC_1(VAR_3, VAR_2);
    }
    return VAR_3;
}
