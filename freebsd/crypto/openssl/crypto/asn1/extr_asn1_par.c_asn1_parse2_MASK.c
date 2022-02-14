
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; int length; unsigned char const* data; } ;
struct TYPE_11__ {scalar_t__ type; int length; unsigned char const* data; } ;
struct TYPE_10__ {int length; unsigned char* data; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_OCTET_STRING ;
typedef int ASN1_OBJECT ;
typedef TYPE_2__ ASN1_INTEGER ;
typedef TYPE_3__ ASN1_ENUMERATED ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_4 (unsigned char const**,long*,int*,int*,long) ;
 scalar_t__ FUNC_5 (int *,char const*,long,int) ;
 scalar_t__ FUNC_6 (int *,char*,unsigned char const,...) ;
 scalar_t__ FUNC_7 (int *,char*) ;
 scalar_t__ FUNC_8 (int *,char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_9 (int *,int,int,int,int) ;
 TYPE_3__* FUNC_10 (int *,unsigned char const**,long) ;
 TYPE_2__* FUNC_11 (int *,unsigned char const**,long) ;
 int * FUNC_12 (int **,unsigned char const**,long) ;
 TYPE_1__* FUNC_13 (int *,unsigned char const**,long) ;
 int FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(BIO *VAR_19, const unsigned char **VAR_20, long VAR_21,
                       int VAR_22, int VAR_23, int VAR_24, int VAR_25)
{
    const unsigned char *VAR_26, *VAR_27, *VAR_28, *VAR_29, *VAR_30;
    long VAR_31;
    int VAR_32, VAR_33, VAR_34 = 0;
    int VAR_35, VAR_36, VAR_37, VAR_38;
    ASN1_OBJECT *VAR_39 = ((void*)0);
    ASN1_OCTET_STRING *VAR_40 = ((void*)0);

    int VAR_41, VAR_42 = 0;

    if (VAR_23 > VAR_0) {
        FUNC_7(VAR_19, "BAD RECURSION DEPTH\n");
        return 0;
    }

    VAR_41 = 6;
    VAR_26 = *VAR_20;
    VAR_28 = VAR_26 + VAR_21;
    while (VAR_21 > 0) {
        VAR_29 = VAR_26;
        VAR_37 = FUNC_4(&VAR_26, &VAR_31, &VAR_32, &VAR_33, VAR_21);
        if (VAR_37 & 0x80) {
            if (FUNC_8(VAR_19, "Error in encoding\n", 18) <= 0)
                goto end;
            VAR_34 = 0;
            goto end;
        }
        VAR_36 = (VAR_26 - VAR_29);
        VAR_21 -= VAR_36;



        if (FUNC_6(VAR_19, "%5ld:", (long)VAR_22 + (long)(VAR_29 - *VAR_20))
            <= 0)
            goto end;

        if (VAR_37 != (VAR_3 | 1)) {
            if (FUNC_6(VAR_19, "d=%-2d hl=%ld l=%4ld ",
                           VAR_23, (long)VAR_36, VAR_31) <= 0)
                goto end;
        } else {
            if (FUNC_6(VAR_19, "d=%-2d hl=%ld l=inf  ", VAR_23, (long)VAR_36) <= 0)
                goto end;
        }
        if (!FUNC_9(VAR_19, VAR_32, VAR_33, VAR_37, (VAR_24) ? VAR_23 : 0))
            goto end;
        if (VAR_37 & VAR_3) {
            const unsigned char *VAR_43 = VAR_26;

            VAR_27 = VAR_26 + VAR_31;
            if (FUNC_8(VAR_19, "\n", 1) <= 0)
                goto end;
            if (VAR_31 > VAR_21) {
                FUNC_6(VAR_19, "length is greater than %ld\n", VAR_21);
                VAR_34 = 0;
                goto end;
            }
            if ((VAR_37 == 0x21) && (VAR_31 == 0)) {
                for (;;) {
                    VAR_38 = FUNC_15(VAR_19, &VAR_26, (long)(VAR_28 - VAR_26),
                                    VAR_22 + (VAR_26 - *VAR_20), VAR_23 + 1,
                                    VAR_24, VAR_25);
                    if (VAR_38 == 0) {
                        VAR_34 = 0;
                        goto end;
                    }
                    if ((VAR_38 == 2) || (VAR_26 >= VAR_28)) {
                        VAR_31 = VAR_26 - VAR_43;
                        break;
                    }
                }
            } else {
                long VAR_44 = VAR_31;

                while (VAR_26 < VAR_27) {
                    VAR_43 = VAR_26;
                    VAR_38 = FUNC_15(VAR_19, &VAR_26, VAR_44,
                                    VAR_22 + (VAR_26 - *VAR_20), VAR_23 + 1,
                                    VAR_24, VAR_25);
                    if (VAR_38 == 0) {
                        VAR_34 = 0;
                        goto end;
                    }
                    VAR_44 -= VAR_26 - VAR_43;
                }
            }
        } else if (VAR_33 != 0) {
            VAR_26 += VAR_31;
            if (FUNC_8(VAR_19, "\n", 1) <= 0)
                goto end;
        } else {
            VAR_35 = 0;
            if ((VAR_32 == VAR_14) ||
                (VAR_32 == VAR_15) ||
                (VAR_32 == VAR_7) ||
                (VAR_32 == VAR_18) ||
                (VAR_32 == VAR_11) ||
                (VAR_32 == VAR_17) ||
                (VAR_32 == VAR_16) || (VAR_32 == VAR_6)) {
                if (FUNC_8(VAR_19, ":", 1) <= 0)
                    goto end;
                if ((VAR_31 > 0) && FUNC_8(VAR_19, (const char *)VAR_26, (int)VAR_31)
                    != (int)VAR_31)
                    goto end;
            } else if (VAR_32 == VAR_12) {
                VAR_30 = VAR_29;
                if (FUNC_12(&VAR_39, &VAR_30, VAR_31 + VAR_36) != ((void*)0)) {
                    if (FUNC_8(VAR_19, ":", 1) <= 0)
                        goto end;
                    FUNC_14(VAR_19, VAR_39);
                } else {
                    if (FUNC_7(VAR_19, ":BAD OBJECT") <= 0)
                        goto end;
                    VAR_42 = 1;
                }
            } else if (VAR_32 == VAR_2) {
                if (VAR_31 != 1) {
                    if (FUNC_7(VAR_19, ":BAD BOOLEAN") <= 0)
                        goto end;
                    VAR_42 = 1;
                }
                if (VAR_31 > 0)
                    FUNC_6(VAR_19, ":%u", VAR_26[0]);
            } else if (VAR_32 == VAR_1) {

            } else if (VAR_32 == VAR_13) {
                int VAR_45, VAR_46 = 1;

                VAR_30 = VAR_29;
                VAR_40 = FUNC_13(((void*)0), &VAR_30, VAR_31 + VAR_36);
                if (VAR_40 != ((void*)0) && VAR_40->length > 0) {
                    VAR_30 = VAR_40->data;



                    for (VAR_45 = 0; VAR_45 < VAR_40->length; VAR_45++) {
                        if (((VAR_30[VAR_45] < ' ') &&
                             (VAR_30[VAR_45] != '\n') &&
                             (VAR_30[VAR_45] != '\r') &&
                             (VAR_30[VAR_45] != '\t')) || (VAR_30[VAR_45] > '~')) {
                            VAR_46 = 0;
                            break;
                        }
                    }
                    if (VAR_46)

                    {
                        if (FUNC_8(VAR_19, ":", 1) <= 0)
                            goto end;
                        if (FUNC_8(VAR_19, (const char *)VAR_30, VAR_40->length) <= 0)
                            goto end;
                    } else if (!VAR_25)



                    {
                        if (FUNC_8(VAR_19, "[HEX DUMP]:", 11) <= 0)
                            goto end;
                        for (VAR_45 = 0; VAR_45 < VAR_40->length; VAR_45++) {
                            if (FUNC_6(VAR_19, "%02X", VAR_30[VAR_45]) <= 0)
                                goto end;
                        }
                    } else

                    {
                        if (!VAR_35) {
                            if (FUNC_8(VAR_19, "\n", 1) <= 0)
                                goto end;
                        }
                        if (FUNC_5(VAR_19,
                                            (const char *)VAR_30,
                                            ((VAR_25 == -1 || VAR_25 >
                                              VAR_40->
                                              length) ? VAR_40->length : VAR_25),
                                            VAR_41) <= 0)
                            goto end;
                        VAR_35 = 1;
                    }
                }
                FUNC_3(VAR_40);
                VAR_40 = ((void*)0);
            } else if (VAR_32 == VAR_8) {
                ASN1_INTEGER *VAR_47;
                int VAR_48;

                VAR_30 = VAR_29;
                VAR_47 = FUNC_11(((void*)0), &VAR_30, VAR_31 + VAR_36);
                if (VAR_47 != ((void*)0)) {
                    if (FUNC_8(VAR_19, ":", 1) <= 0)
                        goto end;
                    if (VAR_47->type == VAR_10)
                        if (FUNC_8(VAR_19, "-", 1) <= 0)
                            goto end;
                    for (VAR_48 = 0; VAR_48 < VAR_47->length; VAR_48++) {
                        if (FUNC_6(VAR_19, "%02X", VAR_47->data[VAR_48]) <= 0)
                            goto end;
                    }
                    if (VAR_47->length == 0) {
                        if (FUNC_8(VAR_19, "00", 2) <= 0)
                            goto end;
                    }
                } else {
                    if (FUNC_7(VAR_19, ":BAD INTEGER") <= 0)
                        goto end;
                    VAR_42 = 1;
                }
                FUNC_1(VAR_47);
            } else if (VAR_32 == VAR_4) {
                ASN1_ENUMERATED *VAR_49;
                int VAR_50;

                VAR_30 = VAR_29;
                VAR_49 = FUNC_10(((void*)0), &VAR_30, VAR_31 + VAR_36);
                if (VAR_49 != ((void*)0)) {
                    if (FUNC_8(VAR_19, ":", 1) <= 0)
                        goto end;
                    if (VAR_49->type == VAR_9)
                        if (FUNC_8(VAR_19, "-", 1) <= 0)
                            goto end;
                    for (VAR_50 = 0; VAR_50 < VAR_49->length; VAR_50++) {
                        if (FUNC_6(VAR_19, "%02X", VAR_49->data[VAR_50]) <= 0)
                            goto end;
                    }
                    if (VAR_49->length == 0) {
                        if (FUNC_8(VAR_19, "00", 2) <= 0)
                            goto end;
                    }
                } else {
                    if (FUNC_7(VAR_19, ":BAD ENUMERATED") <= 0)
                        goto end;
                    VAR_42 = 1;
                }
                FUNC_0(VAR_49);
            } else if (VAR_31 > 0 && VAR_25) {
                if (!VAR_35) {
                    if (FUNC_8(VAR_19, "\n", 1) <= 0)
                        goto end;
                }
                if (FUNC_5(VAR_19, (const char *)VAR_26,
                                    ((VAR_25 == -1 || VAR_25 > VAR_31) ? VAR_31 : VAR_25),
                                    VAR_41) <= 0)
                    goto end;
                VAR_35 = 1;
            }
            if (VAR_42) {
                int VAR_51;
                const unsigned char *VAR_52 = VAR_29 + VAR_36;
                if (FUNC_7(VAR_19, ":[") <= 0)
                    goto end;
                for (VAR_51 = 0; VAR_51 < VAR_31; VAR_51++) {
                    if (FUNC_6(VAR_19, "%02X", VAR_52[VAR_51]) <= 0)
                        goto end;
                }
                if (FUNC_7(VAR_19, "]") <= 0)
                    goto end;
            }

            if (!VAR_35) {
                if (FUNC_8(VAR_19, "\n", 1) <= 0)
                    goto end;
            }
            VAR_26 += VAR_31;
            if ((VAR_32 == VAR_5) && (VAR_33 == 0)) {
                VAR_34 = 2;
                goto end;
            }
        }
        VAR_21 -= VAR_31;
    }
    VAR_34 = 1;
 end:
    FUNC_2(VAR_39);
    FUNC_3(VAR_40);
    *VAR_20 = VAR_26;
    return VAR_34;
}
