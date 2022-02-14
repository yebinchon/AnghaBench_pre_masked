
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int length; unsigned char* data; int type; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_INTEGER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_4 ;
 unsigned char* FUNC_2 (unsigned char*,int,int) ;
 int FUNC_3 (unsigned char*) ;
 int FUNC_4 (unsigned char) ;
 int VAR_5 ;
 int FUNC_5 (char) ;

int FUNC_6(BIO *VAR_6, ASN1_INTEGER *VAR_7, char *VAR_8, int VAR_9)
{
    int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    unsigned char *VAR_17 = ((void*)0), *VAR_18;
    unsigned char *VAR_19;
    int VAR_20 = 0, VAR_21 = 0, VAR_22 = 1;

    VAR_7->type = VAR_5;

    VAR_16 = FUNC_1(VAR_6, VAR_8, VAR_9);
    for (;;) {
        if (VAR_16 < 1)
            goto err;
        VAR_10 = VAR_16;
        if (VAR_8[VAR_10 - 1] == '\n')
            VAR_8[--VAR_10] = '\0';
        if (VAR_10 == 0)
            goto err;
        if (VAR_8[VAR_10 - 1] == '\r')
            VAR_8[--VAR_10] = '\0';
        if (VAR_10 == 0)
            goto err;
        VAR_15 = (VAR_8[VAR_10 - 1] == '\\');

        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
            if (!FUNC_5(VAR_8[VAR_11]))
            {
                VAR_10 = VAR_11;
                break;
            }
        }
        VAR_8[VAR_10] = '\0';



        if (VAR_10 < 2)
            goto err;

        VAR_19 = (unsigned char *)VAR_8;
        if (VAR_22) {
            VAR_22 = 0;
            if ((VAR_19[0] == '0') && (VAR_19[1] == '0')) {
                VAR_19 += 2;
                VAR_10 -= 2;
            }
        }
        VAR_12 = 0;
        VAR_10 -= VAR_15;
        if (VAR_10 % 2 != 0) {
            FUNC_0(VAR_0, VAR_2);
            FUNC_3(VAR_17);
            return 0;
        }
        VAR_10 /= 2;
        if (VAR_20 + VAR_10 > VAR_21) {
            VAR_18 = FUNC_2(VAR_17, VAR_21, VAR_20 + VAR_10 * 2);
            if (VAR_18 == ((void*)0)) {
                FUNC_0(VAR_0, VAR_4);
                FUNC_3(VAR_17);
                return 0;
            }
            VAR_17 = VAR_18;
            VAR_21 = VAR_20 + VAR_10 * 2;
        }
        for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++, VAR_12 += 2) {
            for (VAR_14 = 0; VAR_14 < 2; VAR_14++) {
                VAR_13 = FUNC_4(VAR_19[VAR_12 + VAR_14]);
                if (VAR_13 < 0) {
                    FUNC_0(VAR_0,
                            VAR_1);
                    goto err;
                }
                VAR_17[VAR_20 + VAR_11] <<= 4;
                VAR_17[VAR_20 + VAR_11] |= VAR_13;
            }
        }
        VAR_20 += VAR_10;
        if (VAR_15)
            VAR_16 = FUNC_1(VAR_6, VAR_8, VAR_9);
        else
            break;
    }
    VAR_7->length = VAR_20;
    VAR_7->data = VAR_17;
    return 1;
 err:
    FUNC_0(VAR_0, VAR_3);
    FUNC_3(VAR_17);
    return 0;
}
