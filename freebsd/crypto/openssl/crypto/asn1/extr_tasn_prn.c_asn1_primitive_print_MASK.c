
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_22__ {scalar_t__ itype; long utype; int size; TYPE_4__* funcs; } ;
struct TYPE_21__ {int flags; int str_flags; } ;
struct TYPE_20__ {int (* prim_print ) (int *,int **,TYPE_6__ const*,int,TYPE_5__ const*) ;} ;
struct TYPE_19__ {long type; int length; int data; } ;
struct TYPE_17__ {int * asn1_value; } ;
struct TYPE_18__ {long type; TYPE_1__ value; } ;
typedef int BIO ;
typedef int ASN1_VALUE ;
typedef TYPE_2__ ASN1_TYPE ;
typedef TYPE_3__ ASN1_STRING ;
typedef TYPE_4__ ASN1_PRIMITIVE_FUNCS ;
typedef TYPE_5__ ASN1_PCTX ;
typedef int ASN1_OBJECT ;
typedef TYPE_6__ ASN1_ITEM ;


 int FUNC_0 (int *,TYPE_3__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*,int ) ;
 int FUNC_2 (int *,TYPE_3__*) ;
 int FUNC_3 (int *,int ,int ,int,int ) ;
 char* FUNC_4 (long) ;
 scalar_t__ FUNC_5 (int *,char const*) ;
 long VAR_3 ;





 long VAR_4 ;
 long VAR_5 ;






 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,char const*,char const*,TYPE_5__ const*) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *,TYPE_3__*,int) ;
 int FUNC_10 (int *,int const*) ;
 int FUNC_11 (int *,int **,TYPE_6__ const*,int,TYPE_5__ const*) ;

__attribute__((used)) static int FUNC_12(BIO *VAR_6, ASN1_VALUE **VAR_7,
                                const ASN1_ITEM *VAR_8, int VAR_9,
                                const char *VAR_10, const char *VAR_11,
                                const ASN1_PCTX *VAR_12)
{
    long VAR_13;
    ASN1_STRING *VAR_14;
    int VAR_15 = 1, VAR_16 = 1;
    const char *VAR_17;
    const ASN1_PRIMITIVE_FUNCS *VAR_18;
    VAR_18 = VAR_8->funcs;
    if (!FUNC_7(VAR_6, VAR_9, VAR_10, VAR_11, VAR_12))
        return 0;
    if (VAR_18 && VAR_18->prim_print)
        return VAR_18->prim_print(VAR_6, VAR_7, VAR_8, VAR_9, VAR_12);
    if (VAR_8->itype == VAR_0) {
        VAR_14 = (ASN1_STRING *)*VAR_7;
        VAR_13 = VAR_14->type & ~VAR_4;
    } else {
        VAR_13 = VAR_8->utype;
        if (VAR_13 == 137)
            VAR_14 = ((void*)0);
        else
            VAR_14 = (ASN1_STRING *)*VAR_7;
    }
    if (VAR_13 == VAR_3) {
        ASN1_TYPE *VAR_19 = (ASN1_TYPE *)*VAR_7;
        VAR_13 = VAR_19->type;
        VAR_7 = &VAR_19->value.asn1_value;
        VAR_14 = (ASN1_STRING *)*VAR_7;
        if (VAR_12->flags & VAR_1)
            VAR_17 = ((void*)0);
        else
            VAR_17 = FUNC_4(VAR_13);
    } else {
        if (VAR_12->flags & VAR_2)
            VAR_17 = FUNC_4(VAR_13);
        else
            VAR_17 = ((void*)0);
    }

    if (VAR_13 == VAR_5) {
        if (FUNC_5(VAR_6, "NULL\n") <= 0)
            return 0;
        return 1;
    }

    if (VAR_17) {
        if (FUNC_5(VAR_6, VAR_17) <= 0)
            return 0;
        if (FUNC_5(VAR_6, ":") <= 0)
            return 0;
    }

    switch (VAR_13) {
    case 137:
        {
            int VAR_20 = *(int *)VAR_7;
            if (VAR_20 == -1)
                VAR_20 = VAR_8->size;
            VAR_15 = FUNC_6(VAR_6, VAR_20);
        }
        break;

    case 134:
    case 136:
        VAR_15 = FUNC_8(VAR_6, VAR_14);
        break;

    case 128:
        VAR_15 = FUNC_2(VAR_6, VAR_14);
        break;

    case 135:
        VAR_15 = FUNC_0(VAR_6, VAR_14);
        break;

    case 133:
        VAR_15 = FUNC_10(VAR_6, (const ASN1_OBJECT *)*VAR_7);
        break;

    case 132:
    case 138:
        VAR_15 = FUNC_9(VAR_6, VAR_14, VAR_9);
        VAR_16 = 0;
        break;

    case 130:
    case 129:
    case 131:
        if (FUNC_5(VAR_6, "\n") <= 0)
            return 0;
        if (FUNC_3(VAR_6, VAR_14->data, VAR_14->length, VAR_9, 0) <= 0)
            VAR_15 = 0;
        VAR_16 = 0;
        break;

    default:
        VAR_15 = FUNC_1(VAR_6, VAR_14, VAR_12->str_flags);

    }
    if (!VAR_15)
        return 0;
    if (VAR_16 && FUNC_5(VAR_6, "\n") <= 0)
        return 0;
    return 1;
}
