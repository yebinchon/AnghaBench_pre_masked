
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ itype; int utype; } ;
struct TYPE_7__ {long length; scalar_t__* data; int member_3; int member_2; int * member_1; int member_0; } ;
typedef TYPE_1__ BUF_MEM ;
typedef int ASN1_VALUE ;
typedef int ASN1_TLC ;
typedef TYPE_2__ ASN1_ITEM ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,long) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (scalar_t__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 unsigned char VAR_18 ;
 int FUNC_3 (long*,int*,unsigned char*,char*,char*,unsigned char const**,long,int,int,char,int *) ;
 int FUNC_4 (TYPE_1__*,unsigned char const**,long,char,int,unsigned char,int ) ;
 int FUNC_5 (int **,unsigned char const*,long,int,char*,TYPE_2__ const*) ;
 int FUNC_6 (unsigned char const**,long,char) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(ASN1_VALUE **VAR_19,
                                 const unsigned char **VAR_20, long VAR_21,
                                 const ASN1_ITEM *VAR_22,
                                 int VAR_23, int VAR_24, char VAR_25, ASN1_TLC *VAR_26)
{
    int VAR_27 = 0, VAR_28;
    long VAR_29;
    char VAR_30, VAR_31, VAR_32 = 0;
    const unsigned char *VAR_33;
    BUF_MEM VAR_34 = { 0, ((void*)0), 0, 0 };
    const unsigned char *VAR_35 = ((void*)0);
    long VAR_36;
    if (!VAR_19) {
        FUNC_0(VAR_0, VAR_2);
        return 0;
    }

    if (VAR_22->itype == VAR_1) {
        VAR_28 = VAR_23;
        VAR_23 = -1;
    } else
        VAR_28 = VAR_22->utype;

    if (VAR_28 == VAR_9) {

        unsigned char VAR_37;
        if (VAR_23 >= 0) {
            FUNC_0(VAR_0, VAR_4);
            return 0;
        }
        if (VAR_25) {
            FUNC_0(VAR_0,
                    VAR_3);
            return 0;
        }
        VAR_33 = *VAR_20;
        VAR_27 = FUNC_3(((void*)0), &VAR_28, &VAR_37, ((void*)0), ((void*)0),
                              &VAR_33, VAR_21, -1, 0, 0, VAR_26);
        if (!VAR_27) {
            FUNC_0(VAR_0, VAR_8);
            return 0;
        }
        if (VAR_37 != VAR_18)
            VAR_28 = VAR_15;
    }
    if (VAR_23 == -1) {
        VAR_23 = VAR_28;
        VAR_24 = VAR_18;
    }
    VAR_33 = *VAR_20;

    VAR_27 = FUNC_3(&VAR_29, ((void*)0), ((void*)0), &VAR_31, &VAR_30,
                          &VAR_33, VAR_21, VAR_23, VAR_24, VAR_25, VAR_26);
    if (!VAR_27) {
        FUNC_0(VAR_0, VAR_8);
        return 0;
    } else if (VAR_27 == -1)
        return -1;
    VAR_27 = 0;

    if ((VAR_28 == VAR_16)
        || (VAR_28 == VAR_17) || (VAR_28 == VAR_15)) {




        if (VAR_28 == VAR_15) {
            FUNC_7(VAR_26);
        }

        else if (!VAR_30) {
            FUNC_0(VAR_0,
                    VAR_5);
            return 0;
        }

        VAR_35 = *VAR_20;

        if (VAR_31) {
            if (!FUNC_6(&VAR_33, VAR_29, VAR_31))
                goto err;
            VAR_36 = VAR_33 - VAR_35;
        } else {
            VAR_36 = VAR_33 - VAR_35 + VAR_29;
            VAR_33 += VAR_29;
        }
    } else if (VAR_30) {
        if (VAR_28 == VAR_13 || VAR_28 == VAR_10
            || VAR_28 == VAR_14 || VAR_28 == VAR_12
            || VAR_28 == VAR_11) {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        }


        VAR_32 = 1;






        if (!FUNC_4(&VAR_34, &VAR_33, VAR_29, VAR_31, -1, VAR_18, 0)) {
            goto err;
        }
        VAR_36 = VAR_34.length;

        if (!FUNC_1(&VAR_34, VAR_36 + 1)) {
            FUNC_0(VAR_0, VAR_7);
            goto err;
        }
        VAR_34.data[VAR_36] = 0;
        VAR_35 = (const unsigned char *)VAR_34.data;
    } else {
        VAR_35 = VAR_33;
        VAR_36 = VAR_29;
        VAR_33 += VAR_29;
    }



    if (!FUNC_5(VAR_19, VAR_35, VAR_36, VAR_28, &VAR_32, VAR_22))
        goto err;

    *VAR_20 = VAR_33;
    VAR_27 = 1;
 err:
    if (VAR_32)
        FUNC_2(VAR_34.data);
    return VAR_27;
}
