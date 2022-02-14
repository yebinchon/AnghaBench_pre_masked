
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (int *,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_12 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_13 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (char*,int ,int ) ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int VAR_11 ;
 char* FUNC_18 (scalar_t__) ;

void FUNC_19()
{
    ENGINE *VAR_12 = ((void*)0);

    if ((VAR_2 = FUNC_15("/dev/crypto", VAR_1, 0)) < 0) {

        if (VAR_10 != VAR_0)

            FUNC_14(VAR_11, "Could not open /dev/crypto: %s\n", FUNC_18(VAR_10));
        return;
    }

    if ((VAR_12 = FUNC_2()) == ((void*)0)
        || !FUNC_8(VAR_12, VAR_9)) {
        FUNC_1(VAR_12);





        FUNC_13(VAR_2);
        return;
    }

    FUNC_16();




    if (!FUNC_10(VAR_12, "devcrypto")
        || !FUNC_11(VAR_12, "/dev/crypto engine")
        || !FUNC_7(VAR_12, VAR_3)



        ) {
        FUNC_1(VAR_12);
        return;
    }

    FUNC_0(VAR_12);
    FUNC_1(VAR_12);
    FUNC_12();
}
