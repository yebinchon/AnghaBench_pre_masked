
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
typedef int X509V3_CTX ;
struct TYPE_9__ {int * ia5; int * ip; int * rid; } ;
struct TYPE_10__ {int type; TYPE_1__ d; } ;
typedef TYPE_2__ GENERAL_NAME ;
typedef int ASN1_OBJECT ;


 int * FUNC_0 () ;
 int FUNC_1 (int *,unsigned char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int,char*,char const*) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;







 int * FUNC_5 (char const*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (char const*) ;
 int * FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_2__*,char const*,int *) ;
 int FUNC_10 (TYPE_2__*,char const*,int *) ;
 int FUNC_11 (char const*) ;

GENERAL_NAME *FUNC_12(GENERAL_NAME *VAR_8,
                               const X509V3_EXT_METHOD *VAR_9,
                               X509V3_CTX *VAR_10, int VAR_11, const char *VAR_12,
                               int VAR_13)
{
    char VAR_14 = 0;
    GENERAL_NAME *VAR_15 = ((void*)0);

    if (!VAR_12) {
        FUNC_6(VAR_1, VAR_5);
        return ((void*)0);
    }

    if (VAR_8)
        VAR_15 = VAR_8;
    else {
        VAR_15 = FUNC_4();
        if (VAR_15 == ((void*)0)) {
            FUNC_6(VAR_1, VAR_0);
            return ((void*)0);
        }
    }

    switch (VAR_11) {
    case 128:
    case 132:
    case 133:
        VAR_14 = 1;
        break;

    case 129:
        {
            ASN1_OBJECT *VAR_16;
            if ((VAR_16 = FUNC_5(VAR_12, 0)) == ((void*)0)) {
                FUNC_6(VAR_1, VAR_3);
                FUNC_2(2, "value=", VAR_12);
                goto err;
            }
            VAR_15->d.rid = VAR_16;
        }
        break;

    case 131:
        if (VAR_13)
            VAR_15->d.ip = FUNC_8(VAR_12);
        else
            VAR_15->d.ip = FUNC_7(VAR_12);
        if (VAR_15->d.ip == ((void*)0)) {
            FUNC_6(VAR_1, VAR_2);
            FUNC_2(2, "value=", VAR_12);
            goto err;
        }
        break;

    case 134:
        if (!FUNC_9(VAR_15, VAR_12, VAR_10)) {
            FUNC_6(VAR_1, VAR_4);
            goto err;
        }
        break;

    case 130:
        if (!FUNC_10(VAR_15, VAR_12, VAR_10)) {
            FUNC_6(VAR_1, VAR_6);
            goto err;
        }
        break;
    default:
        FUNC_6(VAR_1, VAR_7);
        goto err;
    }

    if (VAR_14) {
        if ((VAR_15->d.ia5 = FUNC_0()) == ((void*)0) ||
            !FUNC_1(VAR_15->d.ia5, (unsigned char *)VAR_12,
                             FUNC_11(VAR_12))) {
            FUNC_6(VAR_1, VAR_0);
            goto err;
        }
    }

    VAR_15->type = VAR_11;

    return VAR_15;

 err:
    if (!VAR_8)
        FUNC_3(VAR_15);
    return ((void*)0);
}
