
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_21__ {int type; } ;
struct TYPE_20__ {scalar_t__ utype; TYPE_4__* funcs; } ;
struct TYPE_19__ {int (* prim_c2i ) (int **,unsigned char const*,int,int,char*,TYPE_5__ const*) ;} ;
struct TYPE_18__ {int type; unsigned char* data; int length; } ;
struct TYPE_16__ {int * ptr; int * asn1_value; } ;
struct TYPE_17__ {int type; TYPE_1__ value; } ;
typedef int ASN1_VALUE ;
typedef TYPE_2__ ASN1_TYPE ;
typedef TYPE_3__ ASN1_STRING ;
typedef TYPE_4__ ASN1_PRIMITIVE_FUNCS ;
typedef int ASN1_OBJECT ;
typedef TYPE_5__ ASN1_ITEM ;
typedef TYPE_6__ ASN1_INTEGER ;
typedef unsigned char ASN1_BOOLEAN ;
typedef int ASN1_BIT_STRING ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,unsigned char const*,int) ;
 TYPE_3__* FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__* FUNC_4 () ;
 int FUNC_5 (TYPE_2__*,int,int *) ;
 int FUNC_6 (int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (unsigned char*) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int **,unsigned char const**,int) ;
 int FUNC_9 (TYPE_6__**,unsigned char const**,int) ;
 int FUNC_10 (int **,unsigned char const**,int) ;
 int FUNC_11 (int **,unsigned char const*,int,int,char*,TYPE_5__ const*) ;

__attribute__((used)) static int FUNC_12(ASN1_VALUE **VAR_8, const unsigned char *VAR_9, int VAR_10,
                       int VAR_11, char *VAR_12, const ASN1_ITEM *VAR_13)
{
    ASN1_VALUE **VAR_14 = ((void*)0);
    ASN1_STRING *VAR_15;
    ASN1_TYPE *VAR_16 = ((void*)0);
    int VAR_17 = 0;
    const ASN1_PRIMITIVE_FUNCS *VAR_18;
    ASN1_INTEGER **VAR_19;
    VAR_18 = VAR_13->funcs;

    if (VAR_18 && VAR_18->prim_c2i)
        return VAR_18->prim_c2i(VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

    if (VAR_13->utype == VAR_6) {
        if (!*VAR_8) {
            VAR_16 = FUNC_4();
            if (VAR_16 == ((void*)0))
                goto err;
            *VAR_8 = (ASN1_VALUE *)VAR_16;
        } else
            VAR_16 = (ASN1_TYPE *)*VAR_8;

        if (VAR_11 != VAR_16->type)
            FUNC_5(VAR_16, VAR_11, ((void*)0));
        VAR_14 = VAR_8;
        VAR_8 = &VAR_16->value.asn1_value;
    }
    switch (VAR_11) {
    case 139:
        if (!FUNC_10((ASN1_OBJECT **)VAR_8, &VAR_9, VAR_10))
            goto err;
        break;

    case 141:
        if (VAR_10) {
            FUNC_6(VAR_0, VAR_3);
            goto err;
        }
        *VAR_8 = (ASN1_VALUE *)1;
        break;

    case 148:
        if (VAR_10 != 1) {
            FUNC_6(VAR_0, VAR_2);
            goto err;
        } else {
            ASN1_BOOLEAN *VAR_20;
            VAR_20 = (ASN1_BOOLEAN *)VAR_8;
            *VAR_20 = *VAR_9;
        }
        break;

    case 150:
        if (!FUNC_8((ASN1_BIT_STRING **)VAR_8, &VAR_9, VAR_10))
            goto err;
        break;

    case 142:
    case 147:
        VAR_19 = (ASN1_INTEGER **)VAR_8;
        if (!FUNC_9(VAR_19, &VAR_9, VAR_10))
            goto err;

        (*VAR_19)->type = VAR_11 | ((*VAR_19)->type & VAR_7);
        break;

    case 138:
    case 140:
    case 136:
    case 133:
    case 129:
    case 143:
    case 131:
    case 146:
    case 144:
    case 128:
    case 145:
    case 132:
    case 149:
    case 130:
    case 137:
    case 134:
    case 135:
    default:
        if (VAR_11 == 149 && (VAR_10 & 1)) {
            FUNC_6(VAR_0, VAR_1);
            goto err;
        }
        if (VAR_11 == 132 && (VAR_10 & 3)) {
            FUNC_6(VAR_0,
                    VAR_4);
            goto err;
        }

        if (!*VAR_8) {
            VAR_15 = FUNC_2(VAR_11);
            if (VAR_15 == ((void*)0)) {
                FUNC_6(VAR_0, VAR_5);
                goto err;
            }
            *VAR_8 = (ASN1_VALUE *)VAR_15;
        } else {
            VAR_15 = (ASN1_STRING *)*VAR_8;
            VAR_15->type = VAR_11;
        }

        if (*VAR_12) {
            FUNC_7(VAR_15->data);
            VAR_15->data = (unsigned char *)VAR_9;
            VAR_15->length = VAR_10;
            *VAR_12 = 0;
        } else {
            if (!FUNC_1(VAR_15, VAR_9, VAR_10)) {
                FUNC_6(VAR_0, VAR_5);
                FUNC_0(VAR_15);
                *VAR_8 = ((void*)0);
                goto err;
            }
        }
        break;
    }

    if (VAR_16 && (VAR_11 == 141))
        VAR_16->value.ptr = ((void*)0);

    VAR_17 = 1;
 err:
    if (!VAR_17) {
        FUNC_3(VAR_16);
        if (VAR_14)
            *VAR_14 = ((void*)0);
    }
    return VAR_17;
}
