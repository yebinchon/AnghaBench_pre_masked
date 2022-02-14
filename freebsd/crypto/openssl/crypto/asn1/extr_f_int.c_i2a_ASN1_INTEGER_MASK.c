
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int length; scalar_t__* data; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_INTEGER ;


 int FUNC_0 (int *,char*,int) ;
 int VAR_0 ;

int FUNC_1(BIO *VAR_1, const ASN1_INTEGER *VAR_2)
{
    int VAR_3, VAR_4 = 0;
    static const char *VAR_5 = "0123456789ABCDEF";
    char VAR_6[2];

    if (VAR_2 == ((void*)0))
        return 0;

    if (VAR_2->type & VAR_0) {
        if (FUNC_0(VAR_1, "-", 1) != 1)
            goto err;
        VAR_4 = 1;
    }

    if (VAR_2->length == 0) {
        if (FUNC_0(VAR_1, "00", 2) != 2)
            goto err;
        VAR_4 += 2;
    } else {
        for (VAR_3 = 0; VAR_3 < VAR_2->length; VAR_3++) {
            if ((VAR_3 != 0) && (VAR_3 % 35 == 0)) {
                if (FUNC_0(VAR_1, "\\\n", 2) != 2)
                    goto err;
                VAR_4 += 2;
            }
            VAR_6[0] = VAR_5[((unsigned char)VAR_2->data[VAR_3] >> 4) & 0x0f];
            VAR_6[1] = VAR_5[((unsigned char)VAR_2->data[VAR_3]) & 0x0f];
            if (FUNC_0(VAR_1, VAR_6, 2) != 2)
                goto err;
            VAR_4 += 2;
        }
    }
    return VAR_4;
 err:
    return -1;
}
