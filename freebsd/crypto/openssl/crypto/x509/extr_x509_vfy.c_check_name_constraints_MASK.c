
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int error; TYPE_1__* param; int chain; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509_NAME_ENTRY ;
typedef int X509_NAME ;
struct TYPE_15__ {int ex_flags; int * nc; } ;
typedef TYPE_3__ X509 ;
struct TYPE_13__ {int hostflags; } ;
typedef int NAME_CONSTRAINTS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*,int *) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int * FUNC_7 (int *,int) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;

 int VAR_8 ;

 int * FUNC_12 (TYPE_3__*) ;
 int * FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (TYPE_3__*,int ) ;
 int FUNC_16 (int ) ;
 TYPE_3__* FUNC_17 (int ,int) ;
 int FUNC_18 (TYPE_2__*,TYPE_3__*,int,int) ;

__attribute__((used)) static int FUNC_19(X509_STORE_CTX *VAR_9)
{
    int VAR_10;


    for (VAR_10 = FUNC_16(VAR_9->chain) - 1; VAR_10 >= 0; VAR_10--) {
        X509 *VAR_11 = FUNC_17(VAR_9->chain, VAR_10);
        int VAR_12;


        if (VAR_10 && (VAR_11->ex_flags & VAR_2))
            continue;







        if (VAR_11->ex_flags & VAR_1) {
            X509_NAME *VAR_13 = FUNC_13(VAR_11);
            X509_NAME *VAR_14 = FUNC_12(VAR_11);
            X509_NAME_ENTRY *VAR_15 = ((void*)0);
            int VAR_16 = 0;
            int VAR_17 = 128;
            int VAR_18 = FUNC_9(VAR_13) - 1;


            if (VAR_18 < 1) {
                VAR_17 = VAR_8;
                goto proxy_name_done;
            }





            if (FUNC_9(VAR_13)
                != FUNC_9(VAR_14) + 1) {
                VAR_17 = VAR_8;
                goto proxy_name_done;
            }





            if (FUNC_5(FUNC_11(VAR_13,
                                                        VAR_18))
                == FUNC_5(FUNC_11(VAR_13,
                                                           VAR_18 - 1))) {
                VAR_17 = VAR_8;
                goto proxy_name_done;
            }





            VAR_13 = FUNC_8(VAR_13);
            if (VAR_13 == ((void*)0)) {
                FUNC_14(VAR_7, VAR_0);
                VAR_9->error = 129;
                return 0;
            }

            VAR_15 =
                FUNC_7(VAR_13, VAR_18);
            VAR_16 =
                FUNC_2(FUNC_4(VAR_15));

            if (VAR_16 != VAR_4
                || FUNC_6(VAR_13, VAR_14) != 0) {
                VAR_17 = VAR_8;
            }

            FUNC_3(VAR_15);
            FUNC_10(VAR_13);

         proxy_name_done:
            if (VAR_17 != 128
                && !FUNC_18(VAR_9, VAR_11, VAR_10, VAR_17))
                return 0;
        }







        for (VAR_12 = FUNC_16(VAR_9->chain) - 1; VAR_12 > VAR_10; VAR_12--) {
            NAME_CONSTRAINTS *VAR_19 = FUNC_17(VAR_9->chain, VAR_12)->nc;

            if (VAR_19) {
                int VAR_20 = FUNC_0(VAR_11, VAR_19);


                if (VAR_20 == 128 && VAR_10 == 0
                    && (VAR_9->param->hostflags
                        & VAR_6) == 0
                    && ((VAR_9->param->hostflags
                         & VAR_5) != 0
                        || !FUNC_15(VAR_11, VAR_3)))
                    VAR_20 = FUNC_1(VAR_11, VAR_19);

                switch (VAR_20) {
                case 128:
                    break;
                case 129:
                    return 0;
                default:
                    if (!FUNC_18(VAR_9, VAR_11, VAR_10, VAR_20))
                        return 0;
                    break;
                }
            }
        }
    }
    return 1;
}
