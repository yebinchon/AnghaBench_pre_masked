
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int length; scalar_t__ data; } ;
typedef int REVINFO_TYPE ;
typedef TYPE_1__ ASN1_UTCTIME ;
typedef int ASN1_OBJECT ;


 int FUNC_0 (int *,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char*,char const*) ;
 int * FUNC_4 (char const*,int ) ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,char*,int) ;






 TYPE_1__* FUNC_7 (int *,int ) ;
 char* FUNC_8 (int,char*) ;
 int VAR_0 ;
 char** VAR_1 ;
 int FUNC_9 (char const*,char*) ;
 scalar_t__ FUNC_10 (char const*) ;

__attribute__((used)) static char *FUNC_11(REVINFO_TYPE VAR_2, const char *VAR_3)
{
    char *VAR_4;
    const char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
    ASN1_OBJECT *VAR_7;
    ASN1_UTCTIME *VAR_8 = ((void*)0);
    int VAR_9;

    switch (VAR_2) {
    case 129:
    case 128:
        break;

    case 132:
        for (VAR_9 = 0; VAR_9 < 8; VAR_9++) {
            if (FUNC_9(VAR_3, VAR_1[VAR_9]) == 0) {
                VAR_5 = VAR_1[VAR_9];
                break;
            }
        }
        if (VAR_5 == ((void*)0)) {
            FUNC_3(VAR_0, "Unknown CRL reason %s\n", VAR_3);
            return ((void*)0);
        }
        break;

    case 131:

        VAR_7 = FUNC_4(VAR_3, 0);
        FUNC_1(VAR_7);

        if (VAR_7 == ((void*)0)) {
            FUNC_3(VAR_0, "Invalid object identifier %s\n", VAR_3);
            return ((void*)0);
        }

        VAR_5 = "holdInstruction";
        VAR_6 = VAR_3;
        break;

    case 130:
    case 133:

        if (!FUNC_0(((void*)0), VAR_3)) {
            FUNC_3(VAR_0,
                       "Invalid time format %s. Need YYYYMMDDHHMMSSZ\n",
                       VAR_3);
            return ((void*)0);
        }
        VAR_6 = VAR_3;
        if (VAR_2 == 130)
            VAR_5 = "keyTime";
        else
            VAR_5 = "CAkeyTime";

        break;
    }

    VAR_8 = FUNC_7(((void*)0), 0);

    if (!VAR_8)
        return ((void*)0);

    VAR_9 = VAR_8->length + 1;

    if (VAR_5)
        VAR_9 += FUNC_10(VAR_5) + 1;
    if (VAR_6)
        VAR_9 += FUNC_10(VAR_6) + 1;

    VAR_4 = FUNC_8(VAR_9, "revocation reason");
    FUNC_6(VAR_4, (char *)VAR_8->data, VAR_9);
    if (VAR_5) {
        FUNC_5(VAR_4, ",", VAR_9);
        FUNC_5(VAR_4, VAR_5, VAR_9);
    }
    if (VAR_6) {
        FUNC_5(VAR_4, ",", VAR_9);
        FUNC_5(VAR_4, VAR_6, VAR_9);
    }
    FUNC_2(VAR_8);
    return VAR_4;
}
