
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,size_t,unsigned int,int ,char**) ;
 scalar_t__ FUNC_1 (char const*,char,size_t) ;
 size_t FUNC_2 (char const*) ;

int FUNC_3(X509 *VAR_1, const char *VAR_2, size_t VAR_3,
                    unsigned int VAR_4, char **VAR_5)
{
    if (VAR_2 == ((void*)0))
        return -2;





    if (VAR_3 == 0)
        VAR_3 = FUNC_2(VAR_2);
    else if (FUNC_1(VAR_2, '\0', VAR_3 > 1 ? VAR_3 - 1 : VAR_3))
        return -2;
    if (VAR_3 > 1 && VAR_2[VAR_3 - 1] == '\0')
        --VAR_3;
    return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_0, VAR_5);
}
