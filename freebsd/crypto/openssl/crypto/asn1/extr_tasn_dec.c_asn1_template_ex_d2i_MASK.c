
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int tag; } ;
typedef int ASN1_VALUE ;
typedef int ASN1_TLC ;
typedef TYPE_1__ ASN1_TEMPLATE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (unsigned char const**,long) ;
 int FUNC_2 (long*,int *,int *,char*,char*,unsigned char const**,long,int ,int,char,int *) ;
 int FUNC_3 (int **,unsigned char const**,long,TYPE_1__ const*,char,int *,int) ;

__attribute__((used)) static int FUNC_4(ASN1_VALUE **VAR_7,
                                const unsigned char **VAR_8, long VAR_9,
                                const ASN1_TEMPLATE *VAR_10, char VAR_11,
                                ASN1_TLC *VAR_12, int VAR_13)
{
    int VAR_14, VAR_15;
    int VAR_16;
    long VAR_17;
    const unsigned char *VAR_18, *VAR_19;
    char VAR_20;
    if (!VAR_7)
        return 0;
    VAR_14 = VAR_10->flags;
    VAR_15 = VAR_14 & VAR_5;

    VAR_18 = *VAR_8;


    if (VAR_14 & VAR_4) {
        char VAR_21;




        VAR_16 = FUNC_2(&VAR_17, ((void*)0), ((void*)0), &VAR_20, &VAR_21,
                              &VAR_18, VAR_9, VAR_10->tag, VAR_15, VAR_11, VAR_12);
        VAR_19 = VAR_18;
        if (!VAR_16) {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        } else if (VAR_16 == -1)
            return -1;
        if (!VAR_21) {
            FUNC_0(VAR_0,
                    VAR_2);
            return 0;
        }

        VAR_16 = FUNC_3(VAR_7, &VAR_18, VAR_17, VAR_10, 0, VAR_12, VAR_13);
        if (!VAR_16) {
            FUNC_0(VAR_0, VAR_6);
            return 0;
        }

        VAR_17 -= VAR_18 - VAR_19;
        if (VAR_20) {

            if (!FUNC_1(&VAR_18, VAR_17)) {
                FUNC_0(VAR_0, VAR_3);
                goto err;
            }
        } else {



            if (VAR_17) {
                FUNC_0(VAR_0,
                        VAR_1);
                goto err;
            }
        }
    } else
        return FUNC_3(VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);

    *VAR_8 = VAR_18;
    return 1;

 err:
    return 0;
}
