
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * algorithm; } ;
typedef TYPE_1__ X509_ALGOR ;
typedef int EVP_PKEY ;
 int VAR_0 ;
 int FUNC_0 (void*,int *,int *,TYPE_1__**,TYPE_1__**) ;
 int FUNC_1 (int ,int ,void*,int *) ;
 int FUNC_2 (int ,void*,long,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int*,int,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*,int *,TYPE_1__**,TYPE_1__**) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_10 (void*) ;
 int FUNC_11 (void*) ;

__attribute__((used)) static int FUNC_12(EVP_PKEY *VAR_7, int VAR_8, long VAR_9, void *VAR_10)
{
    switch (VAR_8) {
    case 129:
        if (VAR_9 == 0) {
            int VAR_11, VAR_12;
            X509_ALGOR *VAR_13, *VAR_14;
            FUNC_8(VAR_10, ((void*)0), &VAR_13, &VAR_14);
            if (VAR_13 == ((void*)0) || VAR_13->algorithm == ((void*)0))
                return -1;
            VAR_12 = FUNC_7(VAR_13->algorithm);
            if (VAR_12 == VAR_4)
                return -1;
            if (!FUNC_5(&VAR_11, VAR_12, FUNC_4(VAR_7)))
                return -1;
            FUNC_9(VAR_14, FUNC_6(VAR_11), VAR_6, 0);
        }
        return 1;

    case 132:
        if (VAR_9 == 0) {
            int VAR_15, VAR_16;
            X509_ALGOR *VAR_17, *VAR_18;
            FUNC_0(VAR_10, ((void*)0), ((void*)0), &VAR_17, &VAR_18);
            if (VAR_17 == ((void*)0) || VAR_17->algorithm == ((void*)0))
                return -1;
            VAR_16 = FUNC_7(VAR_17->algorithm);
            if (VAR_16 == VAR_4)
                return -1;
            if (!FUNC_5(&VAR_15, VAR_16, FUNC_4(VAR_7)))
                return -1;
            FUNC_9(VAR_18, FUNC_6(VAR_15), VAR_6, 0);
        }
        return 1;

    case 134:
        if (VAR_9 == 1)
            return FUNC_10(VAR_10);
        else if (VAR_9 == 0)
            return FUNC_11(VAR_10);
        return -2;

    case 133:
        *(int *)VAR_10 = VAR_0;
        return 1;


    case 131:
        if (FUNC_4(VAR_7) == VAR_1) {

            *(int *)VAR_10 = VAR_3;
        } else {
            *(int *)VAR_10 = VAR_2;
        }
        return 1;

    case 128:
        return FUNC_2(FUNC_3(VAR_7), VAR_10, VAR_9, ((void*)0));

    case 130:
        return FUNC_1(FUNC_3(VAR_7),
                              VAR_5, VAR_10, ((void*)0));

    default:
        return -2;

    }

}
