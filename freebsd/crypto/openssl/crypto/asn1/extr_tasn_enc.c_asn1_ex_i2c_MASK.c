
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ itype; scalar_t__ utype; int size; TYPE_4__* funcs; } ;
struct TYPE_13__ {unsigned char* data; int length; } ;
struct TYPE_12__ {int (* prim_i2c ) (int **,unsigned char*,int*,TYPE_6__ const*) ;} ;
struct TYPE_11__ {int type; int flags; unsigned char* data; int length; } ;
struct TYPE_9__ {int * asn1_value; } ;
struct TYPE_10__ {int type; TYPE_1__ value; } ;
typedef int ASN1_VALUE ;
typedef TYPE_2__ ASN1_TYPE ;
typedef TYPE_3__ ASN1_STRING ;
typedef TYPE_4__ ASN1_PRIMITIVE_FUNCS ;
typedef TYPE_5__ ASN1_OBJECT ;
typedef TYPE_6__ ASN1_ITEM ;
typedef int ASN1_INTEGER ;
typedef int ASN1_BOOLEAN ;
typedef int ASN1_BIT_STRING ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,unsigned char**) ;
 int FUNC_1 (int *,unsigned char**) ;
 int FUNC_2 (unsigned char*,unsigned char const*,int) ;
 int FUNC_3 (int **,unsigned char*,int*,TYPE_6__ const*) ;

__attribute__((used)) static int FUNC_4(ASN1_VALUE **VAR_5, unsigned char *VAR_6, int *VAR_7,
                       const ASN1_ITEM *VAR_8)
{
    ASN1_BOOLEAN *VAR_9 = ((void*)0);
    ASN1_STRING *VAR_10;
    ASN1_OBJECT *VAR_11;
    int VAR_12;
    const unsigned char *VAR_13;
    unsigned char VAR_14;
    int VAR_15;
    const ASN1_PRIMITIVE_FUNCS *VAR_16;
    VAR_16 = VAR_8->funcs;
    if (VAR_16 && VAR_16->prim_i2c)
        return VAR_16->prim_i2c(VAR_5, VAR_6, VAR_7, VAR_8);


    if ((VAR_8->itype != VAR_1)
        || (VAR_8->utype != 147)) {
        if (!*VAR_5)
            return -1;
    }

    if (VAR_8->itype == VAR_0) {

        VAR_10 = (ASN1_STRING *)*VAR_5;
        VAR_12 = VAR_10->type;
        *VAR_7 = VAR_12;
    } else if (VAR_8->utype == VAR_4) {

        ASN1_TYPE *VAR_17;
        VAR_17 = (ASN1_TYPE *)*VAR_5;
        VAR_12 = VAR_17->type;
        *VAR_7 = VAR_12;
        VAR_5 = &VAR_17->value.asn1_value;
    } else
        VAR_12 = *VAR_7;

    switch (VAR_12) {
    case 138:
        VAR_11 = (ASN1_OBJECT *)*VAR_5;
        VAR_13 = VAR_11->data;
        VAR_15 = VAR_11->length;
        if (VAR_13 == ((void*)0) || VAR_15 == 0)
            return -1;
        break;

    case 140:
        VAR_13 = ((void*)0);
        VAR_15 = 0;
        break;

    case 147:
        VAR_9 = (ASN1_BOOLEAN *)VAR_5;
        if (*VAR_9 == -1)
            return -1;
        if (VAR_8->utype != VAR_4) {



            if (*VAR_9 && (VAR_8->size > 0))
                return -1;
            if (!*VAR_9 && !VAR_8->size)
                return -1;
        }
        VAR_14 = (unsigned char)*VAR_9;
        VAR_13 = &VAR_14;
        VAR_15 = 1;
        break;

    case 149:
        return FUNC_0((ASN1_BIT_STRING *)*VAR_5,
                                   VAR_6 ? &VAR_6 : ((void*)0));

    case 141:
    case 146:



        return FUNC_1((ASN1_INTEGER *)*VAR_5, VAR_6 ? &VAR_6 : ((void*)0));

    case 137:
    case 139:
    case 136:
    case 133:
    case 129:
    case 142:
    case 131:
    case 145:
    case 143:
    case 128:
    case 144:
    case 132:
    case 148:
    case 130:
    case 135:
    case 134:
    default:

        VAR_10 = (ASN1_STRING *)*VAR_5;

        if ((VAR_8->size == VAR_3)
            && (VAR_10->flags & VAR_2)) {
            if (VAR_6) {
                VAR_10->data = VAR_6;
                VAR_10->length = 0;
            }

            return -2;
        }
        VAR_13 = VAR_10->data;
        VAR_15 = VAR_10->length;

        break;

    }
    if (VAR_6 && VAR_15)
        FUNC_2(VAR_6, VAR_13, VAR_15);
    return VAR_15;
}
