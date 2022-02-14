
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
typedef int ossl_intmax_t ;
typedef enum range { ____Placeholder_range } range ;
typedef int X509_VERIFY_PARAM ;
typedef int X509_PURPOSE ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int * FUNC_6 (int ) ;
 int FUNC_7 (int *,int const*) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ,int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *,int) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int ) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int VAR_20 ;
 int FUNC_18 () ;
 int FUNC_19 (int ,int *) ;
 int VAR_21 ;

int FUNC_20(int VAR_22, X509_VERIFY_PARAM *VAR_23)
{
    int VAR_24;
    ossl_intmax_t VAR_25 = 0;
    ASN1_OBJECT *VAR_26;
    X509_PURPOSE *VAR_27;
    const X509_VERIFY_PARAM *VAR_28;

    FUNC_16(VAR_23 != ((void*)0));
    FUNC_16(VAR_22 > 129);
    FUNC_16(VAR_22 < 128);

    switch ((enum range)VAR_22) {
    case 129:
    case 128:
        return 0;
    case 145:
        VAR_26 = FUNC_1(FUNC_18(), 0);
        if (VAR_26 == ((void*)0)) {
            FUNC_0(VAR_20, "%s: Invalid Policy %s\n", VAR_21, FUNC_18());
            return 0;
        }
        FUNC_5(VAR_23, VAR_26);
        break;
    case 142:

        VAR_24 = FUNC_3(FUNC_18());
        if (VAR_24 < 0) {
            FUNC_0(VAR_20, "%s: Invalid purpose %s\n", VAR_21, FUNC_18());
            return 0;
        }


        VAR_27 = FUNC_2(VAR_24);


        VAR_24 = FUNC_4(VAR_27);

        if (!FUNC_14(VAR_23, VAR_24)) {
            FUNC_0(VAR_20,
                       "%s: Internal error setting purpose %s\n",
                       VAR_21, FUNC_18());
            return 0;
        }
        break;
    case 131:
        VAR_28 = FUNC_6(FUNC_18());
        if (VAR_28 == ((void*)0)) {
            FUNC_0(VAR_20, "%s: Invalid verify name %s\n",
                       VAR_21, FUNC_18());
            return 0;
        }
        FUNC_7(VAR_23, VAR_28);
        break;
    case 135:
        VAR_24 = FUNC_17(FUNC_18());
        if (VAR_24 >= 0)
            FUNC_12(VAR_23, VAR_24);
        break;
    case 136:
        VAR_24 = FUNC_17(FUNC_18());
        if (VAR_24 >= 0)
            FUNC_11(VAR_23, VAR_24);
        break;
    case 158:
        if (!FUNC_19(FUNC_18(), &VAR_25))
            return 0;
        if (VAR_25 != (time_t)VAR_25) {
            FUNC_0(VAR_20, "%s: epoch time out of range %s\n",
                       VAR_21, FUNC_18());
            return 0;
        }
        FUNC_15(VAR_23, (time_t)VAR_25);
        break;
    case 133:
        if (!FUNC_9(VAR_23, FUNC_18(), 0))
            return 0;
        break;
    case 134:
        if (!FUNC_8(VAR_23, FUNC_18(), 0))
            return 0;
        break;
    case 132:
        if (!FUNC_10(VAR_23, FUNC_18()))
            return 0;
        break;
    case 152:
        FUNC_13(VAR_23, VAR_6);
        break;
    case 149:

        break;
    case 156:
        FUNC_13(VAR_23, VAR_2);
        break;
    case 155:
        FUNC_13(VAR_23,
                                    VAR_2 |
                                    VAR_3);
        break;
    case 144:
        FUNC_13(VAR_23, VAR_13);
        break;
    case 154:
        FUNC_13(VAR_23, VAR_4);
        break;
    case 151:
        FUNC_13(VAR_23, VAR_7);
        break;
    case 150:
        FUNC_13(VAR_23, VAR_8);
        break;
    case 130:
        FUNC_13(VAR_23, VAR_19);
        break;
    case 153:
        FUNC_13(VAR_23, VAR_5);
        break;
    case 137:
        FUNC_13(VAR_23, VAR_18);
        break;
    case 143:
        FUNC_13(VAR_23, VAR_9);
        break;
    case 157:
        FUNC_13(VAR_23, VAR_1);
        break;
    case 138:
        FUNC_13(VAR_23, VAR_17);
        break;
    case 140:
        FUNC_13(VAR_23, VAR_15);
        break;
    case 141:
        FUNC_13(VAR_23, VAR_14);
        break;
    case 139:
        FUNC_13(VAR_23, VAR_16);
        break;
    case 146:
        FUNC_13(VAR_23, VAR_12);
        break;
    case 148:
        FUNC_13(VAR_23, VAR_10);
        break;
    case 147:
        FUNC_13(VAR_23, VAR_11);
        break;
    case 159:
        FUNC_13(VAR_23, VAR_0);
        break;
    }
    return 1;

}
