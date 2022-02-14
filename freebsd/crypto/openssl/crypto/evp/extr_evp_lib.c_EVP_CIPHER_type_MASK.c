
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EVP_CIPHER ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int * FUNC_3 (int) ;

int FUNC_4(const EVP_CIPHER *VAR_1)
{
    int VAR_2;
    ASN1_OBJECT *VAR_3;
    VAR_2 = FUNC_1(VAR_1);

    switch (VAR_2) {

    case 130:
    case 131:
    case 132:

        return 130;

    case 129:
    case 128:

        return 129;

    case 146:
    case 145:
    case 147:

        return 146;

    case 143:
    case 142:
    case 144:

        return 143;

    case 140:
    case 139:
    case 141:

        return 140;

    case 137:
    case 136:
    case 138:

        return 137;

    case 134:
    case 133:
    case 135:

        return 137;

    default:

        VAR_3 = FUNC_3(VAR_2);
        if (FUNC_2(VAR_3) == ((void*)0))
            VAR_2 = VAR_0;
        FUNC_0(VAR_3);
        return VAR_2;
    }
}
