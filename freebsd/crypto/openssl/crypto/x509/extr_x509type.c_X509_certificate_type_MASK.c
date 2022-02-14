
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int EVP_PKEY ;
 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int,int *,int*) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;

int FUNC_4(const X509 *VAR_10, const EVP_PKEY *VAR_11)
{
    const EVP_PKEY *VAR_12;
    int VAR_13 = 0, VAR_14;

    if (VAR_10 == ((void*)0))
        return 0;

    if (VAR_11 == ((void*)0))
        VAR_12 = FUNC_2(VAR_10);
    else
        VAR_12 = VAR_11;

    if (VAR_12 == ((void*)0))
        return 0;

    switch (FUNC_0(VAR_12)) {
    case 137:
        VAR_13 = VAR_9 | VAR_5;

        VAR_13 |= VAR_3;
        break;
    case 136:
        VAR_13 = VAR_9 | VAR_5;
        break;
    case 141:
        VAR_13 = VAR_7 | VAR_5;
        break;
    case 140:
        VAR_13 = VAR_8 | VAR_5 | VAR_4;
        break;
    case 138:
    case 139:
        VAR_13 = VAR_5;
        break;
    case 142:
        VAR_13 = VAR_6 | VAR_4;
        break;
    case 132:
    case 131:
    case 130:
        VAR_13 = VAR_4 | VAR_5;
        break;
    default:
        break;
    }

    VAR_14 = FUNC_3(VAR_10);
    if (VAR_14 && FUNC_1(VAR_14, ((void*)0), &VAR_14)) {

        switch (VAR_14) {
        case 128:
        case 129:
            VAR_13 |= VAR_2;
            break;
        case 134:
        case 133:
            VAR_13 |= VAR_0;
            break;
        case 135:
            VAR_13 |= VAR_1;
            break;
        default:
            break;
        }
    }

    return VAR_13;
}
