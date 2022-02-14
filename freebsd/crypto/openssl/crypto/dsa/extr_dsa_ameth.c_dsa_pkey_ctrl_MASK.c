
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
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int*,int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (void*,int *,TYPE_1__**,TYPE_1__**) ;
 int VAR_3 ;
 int FUNC_6 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(EVP_PKEY *VAR_4, int VAR_5, long VAR_6, void *VAR_7)
{
    switch (VAR_5) {
    case 128:
        if (VAR_6 == 0) {
            int VAR_8, VAR_9;
            X509_ALGOR *VAR_10, *VAR_11;
            FUNC_5(VAR_7, ((void*)0), &VAR_10, &VAR_11);
            if (VAR_10 == ((void*)0) || VAR_10->algorithm == ((void*)0))
                return -1;
            VAR_9 = FUNC_4(VAR_10->algorithm);
            if (VAR_9 == VAR_2)
                return -1;
            if (!FUNC_2(&VAR_8, VAR_9, FUNC_1(VAR_4)))
                return -1;
            FUNC_6(VAR_11, FUNC_3(VAR_8), VAR_3, 0);
        }
        return 1;

    case 130:
        if (VAR_6 == 0) {
            int VAR_12, VAR_13;
            X509_ALGOR *VAR_14, *VAR_15;
            FUNC_0(VAR_7, ((void*)0), ((void*)0), &VAR_14, &VAR_15);
            if (VAR_14 == ((void*)0) || VAR_14->algorithm == ((void*)0))
                return -1;
            VAR_13 = FUNC_4(VAR_14->algorithm);
            if (VAR_13 == VAR_2)
                return -1;
            if (!FUNC_2(&VAR_12, VAR_13, FUNC_1(VAR_4)))
                return -1;
            FUNC_6(VAR_15, FUNC_3(VAR_12), VAR_3, 0);
        }
        return 1;

    case 131:
        *(int *)VAR_7 = VAR_0;
        return 1;


    case 129:
        *(int *)VAR_7 = VAR_1;
        return 1;

    default:
        return -2;

    }

}
