
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,char const*) ;

BIO *FUNC_4(const char *VAR_0)
{
    BIO *VAR_1;

    VAR_1 = FUNC_1(FUNC_2());
    if (VAR_1 == ((void*)0))
        return ((void*)0);
    if (FUNC_3(VAR_1, VAR_0))
        return VAR_1;
    FUNC_0(VAR_1);
    return ((void*)0);
}
