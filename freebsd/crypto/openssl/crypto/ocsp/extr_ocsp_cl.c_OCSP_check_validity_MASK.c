
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int ASN1_GENERALIZEDTIME ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int *,scalar_t__*) ;
 int FUNC_4 (scalar_t__*) ;

int FUNC_5(ASN1_GENERALIZEDTIME *VAR_7,
                        ASN1_GENERALIZEDTIME *VAR_8, long VAR_9, long VAR_10)
{
    int VAR_11 = 1;
    time_t VAR_12, VAR_13;
    FUNC_4(&VAR_12);

    if (!FUNC_0(VAR_7)) {
        FUNC_2(VAR_0, VAR_2);
        VAR_11 = 0;
    } else {
        VAR_13 = VAR_12 + VAR_9;
        if (FUNC_3(VAR_7, &VAR_13) > 0) {
            FUNC_2(VAR_0, VAR_5);
            VAR_11 = 0;
        }





        if (VAR_10 >= 0) {
            VAR_13 = VAR_12 - VAR_10;
            if (FUNC_3(VAR_7, &VAR_13) < 0) {
                FUNC_2(VAR_0, VAR_6);
                VAR_11 = 0;
            }
        }
    }

    if (!VAR_8)
        return VAR_11;


    if (!FUNC_0(VAR_8)) {
        FUNC_2(VAR_0, VAR_1);
        VAR_11 = 0;
    } else {
        VAR_13 = VAR_12 - VAR_9;
        if (FUNC_3(VAR_8, &VAR_13) < 0) {
            FUNC_2(VAR_0, VAR_4);
            VAR_11 = 0;
        }
    }


    if (FUNC_1(VAR_8, VAR_7) < 0) {
        FUNC_2(VAR_0,
                VAR_3);
        VAR_11 = 0;
    }

    return VAR_11;
}
