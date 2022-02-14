
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum header_status { ____Placeholder_header_status } header_status ;
typedef int BIO ;


 int FUNC_0 (int *,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,int ) ;
 int VAR_9 ;
 size_t VAR_10 ;
 char* VAR_11 ;
 int * FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,unsigned int,scalar_t__) ;
 char* FUNC_5 (scalar_t__,unsigned int) ;
 int FUNC_6 (char*,int,unsigned int) ;
 size_t FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char*,char*,size_t) ;
 char* VAR_12 ;

__attribute__((used)) static int FUNC_9(BIO *VAR_13, BIO **VAR_14, BIO **VAR_15, char *VAR_16,
                               unsigned int VAR_17)
{
    BIO *VAR_18 = *VAR_14;
    char *VAR_19, *VAR_20;
    int VAR_21, VAR_22, VAR_23 = 0, VAR_24 = 0;

    enum header_status VAR_25 = VAR_4;
    unsigned int VAR_26;
    size_t VAR_27;



    VAR_19 = FUNC_5(VAR_3 + 1, VAR_17);
    if (VAR_19 == ((void*)0)) {
        FUNC_2(VAR_6, VAR_1);
        return 0;
    }

    for (VAR_22 = 0; ; VAR_22++) {
        VAR_26 = ~0u;
        VAR_21 = FUNC_0(VAR_13, VAR_19, VAR_3);
        if (VAR_21 <= 0) {
            FUNC_2(VAR_6, VAR_8);
            goto err;
        }

        if (VAR_25 == VAR_4) {
            if (FUNC_3(VAR_19, ':', VAR_21) != ((void*)0))
                VAR_25 = VAR_2;
        }
        if (!FUNC_8(VAR_19, VAR_11, VAR_0) || VAR_25 == VAR_2)
            VAR_26 &= ~VAR_5;
        VAR_21 = FUNC_6(VAR_19, VAR_21, VAR_17 & VAR_26);


        if (VAR_19[0] == '\n') {
            if (VAR_25 == VAR_9) {

                FUNC_2(VAR_6, VAR_7);
                goto err;
            }
            VAR_25 = VAR_9;
            VAR_18 = *VAR_15;
            continue;
        }


        if (FUNC_8(VAR_19, VAR_11, VAR_0) == 0) {
            VAR_20 = VAR_19 + VAR_0;
            VAR_27 = FUNC_7(VAR_16);
            if (FUNC_8(VAR_20, VAR_16, VAR_27) != 0 ||
                FUNC_8(VAR_20 + VAR_27, VAR_12, VAR_10) != 0) {
                FUNC_2(VAR_6, VAR_7);
                goto err;
            }
            if (VAR_25 == VAR_4) {
                *VAR_14 = *VAR_15;
                *VAR_15 = VAR_18;
            }
            break;
        } else if (VAR_24) {

            FUNC_2(VAR_6, VAR_7);
            goto err;
        }




        if (FUNC_1(VAR_18, VAR_19) < 0)
            goto err;



        if (VAR_25 == VAR_9) {

            if (VAR_21 > 65)
                goto err;
            if (VAR_21 < 65)
                VAR_24 = 1;
        }
    }

    VAR_23 = 1;
err:
    FUNC_4(VAR_19, VAR_17, VAR_3 + 1);
    return VAR_23;
}
