
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * FUNC_1 (int *,char const*) ;
 int * FUNC_2 (char const*,char,int ) ;

CONF *FUNC_3(const char *VAR_1)
{
    BIO *VAR_2;
    CONF *VAR_3;

    VAR_2 = FUNC_2(VAR_1, 'r', VAR_0);
    if (VAR_2 == ((void*)0))
        return ((void*)0);

    VAR_3 = FUNC_1(VAR_2, VAR_1);
    FUNC_0(VAR_2);
    return VAR_3;
}
