
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_size_t ;
typedef int apr_bucket_brigade ;
typedef int apr_bucket_alloc_t ;
typedef int apr_bucket ;
typedef int abts_case ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,char const*,int) ;
 int VAR_0 ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int *,char*,int ) ;
 int * FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int,int ,int *) ;
 int FUNC_13 (char*,int,int *) ;
 int FUNC_14 (int ,int,int ,int *) ;
 int FUNC_15 (int *,char const**,int*,int ) ;
 scalar_t__ FUNC_16 (int *,int) ;
 int FUNC_17 (char*,int,int *) ;
 int FUNC_18 (int ,char*) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *,char*,int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_21 (char*) ;

__attribute__((used)) static void FUNC_22(abts_case *VAR_4, void *VAR_5)
{
    apr_bucket_alloc_t *VAR_6 = FUNC_9(VAR_3);
    apr_bucket_brigade *VAR_7;
    apr_bucket *VAR_8;
    char *VAR_9 = "alphabeta";
    int VAR_10;

    VAR_7 = FUNC_7(VAR_3, VAR_6);

    FUNC_3(VAR_7,
                            FUNC_13(VAR_9, 9, VAR_6));
    FUNC_3(VAR_7,
                            FUNC_17(VAR_9, 9, VAR_6));
    FUNC_3(VAR_7,
                            FUNC_12(FUNC_21(VAR_9), 9, VAR_2, VAR_6));
    FUNC_3(VAR_7,
                            FUNC_14(FUNC_18(VAR_3, VAR_9), 9, VAR_3,
                                                   VAR_6));

    FUNC_0(VAR_4, "four buckets inserted", FUNC_19(VAR_7) == 4);


    for (VAR_10 = 0, VAR_8 = FUNC_2(VAR_7); VAR_10 < 4; VAR_10++) {
        FUNC_0(VAR_4, "reached end of brigade",
                    VAR_8 != FUNC_4(VAR_7));
        FUNC_0(VAR_4, "split bucket OK",
                    FUNC_16(VAR_8, 5) == VAR_1);
        VAR_8 = FUNC_5(VAR_8);
        FUNC_0(VAR_4, "split OK", VAR_8 != FUNC_4(VAR_7));
        VAR_8 = FUNC_5(VAR_8);
    }

    FUNC_0(VAR_4, "four buckets split into eight",
                FUNC_19(VAR_7) == 8);

    for (VAR_10 = 0, VAR_8 = FUNC_2(VAR_7); VAR_10 < 4; VAR_10++) {
        const char *VAR_11;
        apr_size_t VAR_12;

        FUNC_6(VAR_4, "read alpha from bucket",
                           FUNC_15(VAR_8, &VAR_11, &VAR_12, VAR_0));
        FUNC_0(VAR_4, "read 5 bytes", VAR_12 == 5);
        FUNC_1(VAR_4, "alpha", VAR_11, 5);

        VAR_8 = FUNC_5(VAR_8);

        FUNC_6(VAR_4, "read beta from bucket",
                           FUNC_15(VAR_8, &VAR_11, &VAR_12, VAR_0));
        FUNC_0(VAR_4, "read 4 bytes", VAR_12 == 4);
        FUNC_1(VAR_4, "beta", VAR_11, 5);

        VAR_8 = FUNC_5(VAR_8);
    }


    for (VAR_10 = 0, VAR_8 = FUNC_2(VAR_7); VAR_10 < 4; VAR_10++) {
        apr_bucket *VAR_13;

        FUNC_0(VAR_4, "reached end of brigade",
                    VAR_8 != FUNC_4(VAR_7));
        VAR_13 = FUNC_5(VAR_8);
        FUNC_11(VAR_8);
        VAR_8 = FUNC_5(VAR_13);
    }

    FUNC_0(VAR_4, "eight buckets reduced to four",
                FUNC_19(VAR_7) == 4);

    FUNC_20(VAR_4, "flatten beta brigade", VAR_7,
                  "beta" "beta" "beta" "beta");

    FUNC_8(VAR_7);
    FUNC_10(VAR_6);
}
