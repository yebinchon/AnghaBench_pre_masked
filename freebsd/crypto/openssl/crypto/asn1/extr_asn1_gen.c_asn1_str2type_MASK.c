
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int type; unsigned char* data; long length; int flags; } ;
struct TYPE_11__ {TYPE_6__* asn1_string; int bit_string; int * object; int * integer; int boolean; } ;
struct TYPE_13__ {int type; TYPE_1__ value; } ;
struct TYPE_12__ {char* value; int * section; int * name; } ;
typedef TYPE_2__ CONF_VALUE ;
typedef TYPE_3__ ASN1_TYPE ;


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
 void* FUNC_0 () ;
 int FUNC_1 (TYPE_6__*,char const*,int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_6__**,unsigned char*,int,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (char const*,char,int,int ,int ) ;
 int VAR_20 ;
 int FUNC_9 (int,char*,char const*) ;
 int VAR_21 ;
 int VAR_22 ;
 int * FUNC_10 (char const*,int ) ;
 unsigned char* FUNC_11 (char const*,long*) ;
 int FUNC_12 (TYPE_2__*,int *) ;
 int VAR_23 ;
 int * FUNC_13 (int *,char const*) ;

__attribute__((used)) static ASN1_TYPE *FUNC_14(const char *VAR_24, int VAR_25, int VAR_26)
{
    ASN1_TYPE *VAR_27 = ((void*)0);
    CONF_VALUE VAR_28;
    unsigned char *VAR_29;
    long VAR_30;
    int VAR_31 = 1;

    if ((VAR_27 = FUNC_4()) == ((void*)0)) {
        FUNC_7(VAR_0, VAR_20);
        return ((void*)0);
    }

    if (!VAR_24)
        VAR_24 = "";

    switch (VAR_26) {

    case 137:
        if (VAR_24 && *VAR_24) {
            FUNC_7(VAR_0, VAR_10);
            goto bad_form;
        }
        break;

    case 143:
        if (VAR_25 != VAR_1) {
            FUNC_7(VAR_0, VAR_15);
            goto bad_form;
        }
        VAR_28.name = ((void*)0);
        VAR_28.section = ((void*)0);
        VAR_28.value = (char *)VAR_24;
        if (!FUNC_12(&VAR_28, &VAR_27->value.boolean)) {
            FUNC_7(VAR_0, VAR_6);
            goto bad_str;
        }
        break;

    case 138:
    case 142:
        if (VAR_25 != VAR_1) {
            FUNC_7(VAR_0, VAR_13);
            goto bad_form;
        }
        if ((VAR_27->value.integer
                    = FUNC_13(((void*)0), VAR_24)) == ((void*)0)) {
            FUNC_7(VAR_0, VAR_9);
            goto bad_str;
        }
        break;

    case 135:
        if (VAR_25 != VAR_1) {
            FUNC_7(VAR_0, VAR_16);
            goto bad_form;
        }
        if ((VAR_27->value.object = FUNC_10(VAR_24, 0)) == ((void*)0)) {
            FUNC_7(VAR_0, VAR_11);
            goto bad_str;
        }
        break;

    case 130:
    case 141:
        if (VAR_25 != VAR_1) {
            FUNC_7(VAR_0, VAR_17);
            goto bad_form;
        }
        if ((VAR_27->value.asn1_string = FUNC_0()) == ((void*)0)) {
            FUNC_7(VAR_0, VAR_20);
            goto bad_str;
        }
        if (!FUNC_1(VAR_27->value.asn1_string, VAR_24, -1)) {
            FUNC_7(VAR_0, VAR_20);
            goto bad_str;
        }
        VAR_27->value.asn1_string->type = VAR_26;
        if (!FUNC_2(VAR_27->value.asn1_string)) {
            FUNC_7(VAR_0, VAR_12);
            goto bad_str;
        }

        break;

    case 144:
    case 133:
    case 139:
    case 132:
    case 129:
    case 128:
    case 131:
    case 140:
    case 136:
        if (VAR_25 == VAR_1)
            VAR_25 = VAR_21;
        else if (VAR_25 == VAR_4)
            VAR_25 = VAR_22;
        else {
            FUNC_7(VAR_0, VAR_7);
            goto bad_form;
        }

        if (FUNC_5(&VAR_27->value.asn1_string, (unsigned char *)VAR_24,
                               -1, VAR_25, FUNC_6(VAR_26)) <= 0) {
            FUNC_7(VAR_0, VAR_20);
            goto bad_str;
        }

        break;

    case 145:
    case 134:
        if ((VAR_27->value.asn1_string = FUNC_0()) == ((void*)0)) {
            FUNC_7(VAR_0, VAR_20);
            goto bad_form;
        }

        if (VAR_25 == VAR_3) {
            if ((VAR_29 = FUNC_11(VAR_24, &VAR_30)) == ((void*)0)) {
                FUNC_7(VAR_0, VAR_8);
                goto bad_str;
            }
            VAR_27->value.asn1_string->data = VAR_29;
            VAR_27->value.asn1_string->length = VAR_30;
            VAR_27->value.asn1_string->type = VAR_26;
        } else if (VAR_25 == VAR_1)
            FUNC_1(VAR_27->value.asn1_string, VAR_24, -1);
        else if ((VAR_25 == VAR_2)
                 && (VAR_26 == 145)) {
            if (!FUNC_8
                (VAR_24, ',', 1, VAR_23, VAR_27->value.bit_string)) {
                FUNC_7(VAR_0, VAR_14);
                goto bad_str;
            }
            VAR_31 = 0;

        } else {
            FUNC_7(VAR_0, VAR_5);
            goto bad_form;
        }

        if ((VAR_26 == 145) && VAR_31) {
            VAR_27->value.asn1_string->flags
                &= ~(VAR_19 | 0x07);
            VAR_27->value.asn1_string->flags |= VAR_19;
        }

        break;

    default:
        FUNC_7(VAR_0, VAR_18);
        goto bad_str;
    }

    VAR_27->type = VAR_26;
    return VAR_27;

 bad_str:
    FUNC_9(2, "string=", VAR_24);
 bad_form:

    FUNC_3(VAR_27);
    return ((void*)0);

}
