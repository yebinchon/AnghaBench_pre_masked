
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int EVP_PKEY ;


 int FUNC_0 (int const*,int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_1 (int const*) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(const X509 *VAR_4, const EVP_PKEY *VAR_5)
{
    const EVP_PKEY *VAR_6;
    int VAR_7;

    VAR_6 = FUNC_1(VAR_4);

    if (VAR_6)
        VAR_7 = FUNC_0(VAR_6, VAR_5);
    else
        VAR_7 = -2;

    switch (VAR_7) {
    case 1:
        break;
    case 0:
        FUNC_2(VAR_0, VAR_2);
        break;
    case -1:
        FUNC_2(VAR_0, VAR_1);
        break;
    case -2:
        FUNC_2(VAR_0, VAR_3);
    }
    if (VAR_7 > 0)
        return 1;
    return 0;
}
