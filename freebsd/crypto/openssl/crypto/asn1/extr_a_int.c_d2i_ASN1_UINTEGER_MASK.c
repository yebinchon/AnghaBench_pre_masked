
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int type; unsigned char* data; int length; } ;
typedef TYPE_1__ ASN1_INTEGER ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned char const**,long*,int*,int*,long) ;
 int FUNC_3 (int ,int) ;
 int VAR_3 ;
 int FUNC_4 (unsigned char*) ;
 unsigned char* FUNC_5 (int) ;
 int VAR_4 ;
 int FUNC_6 (unsigned char*,unsigned char const*,int) ;

ASN1_INTEGER *FUNC_7(ASN1_INTEGER **VAR_5, const unsigned char **VAR_6,
                                long VAR_7)
{
    ASN1_INTEGER *VAR_8 = ((void*)0);
    const unsigned char *VAR_9;
    unsigned char *VAR_10;
    long VAR_11;
    int VAR_12, VAR_13, VAR_14;
    int VAR_15;

    if ((VAR_5 == ((void*)0)) || ((*VAR_5) == ((void*)0))) {
        if ((VAR_8 = FUNC_1()) == ((void*)0))
            return ((void*)0);
        VAR_8->type = VAR_4;
    } else
        VAR_8 = (*VAR_5);

    VAR_9 = *VAR_6;
    VAR_12 = FUNC_2(&VAR_9, &VAR_11, &VAR_13, &VAR_14, VAR_7);
    if (VAR_12 & 0x80) {
        VAR_15 = VAR_1;
        goto err;
    }

    if (VAR_13 != VAR_4) {
        VAR_15 = VAR_2;
        goto err;
    }





    VAR_10 = FUNC_5((int)VAR_11 + 1);
    if (VAR_10 == ((void*)0)) {
        VAR_15 = VAR_3;
        goto err;
    }
    VAR_8->type = VAR_4;
    if (VAR_11) {
        if ((*VAR_9 == 0) && (VAR_11 != 1)) {
            VAR_9++;
            VAR_11--;
        }
        FUNC_6(VAR_10, VAR_9, (int)VAR_11);
        VAR_9 += VAR_11;
    }

    FUNC_4(VAR_8->data);
    VAR_8->data = VAR_10;
    VAR_8->length = (int)VAR_11;
    if (VAR_5 != ((void*)0))
        (*VAR_5) = VAR_8;
    *VAR_6 = VAR_9;
    return VAR_8;
 err:
    FUNC_3(VAR_0, VAR_15);
    if ((VAR_5 == ((void*)0)) || (*VAR_5 != VAR_8))
        FUNC_0(VAR_8);
    return ((void*)0);
}
