
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ctrl; } ;
typedef TYPE_1__ ENGINE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int,long,void*,int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_12 ;
 int FUNC_3 () ;
 long FUNC_4 (char const*,char**,int) ;

int FUNC_5(ENGINE *VAR_13, const char *VAR_14, const char *VAR_15,
                           int VAR_16)
{
    int VAR_17, VAR_18;
    long VAR_19;
    char *VAR_20;

    if (VAR_13 == ((void*)0) || VAR_14 == ((void*)0)) {
        FUNC_2(VAR_5, VAR_12);
        return 0;
    }
    if (VAR_13->ctrl == ((void*)0)
        || (VAR_17 = FUNC_1(VAR_13, VAR_4,
                              0, (void *)VAR_14, ((void*)0))) <= 0) {
        if (VAR_16) {
            FUNC_3();
            return 1;
        }
        FUNC_2(VAR_5, VAR_11);
        return 0;
    }
    if (!FUNC_0(VAR_13, VAR_17)) {
        FUNC_2(VAR_5,
                  VAR_7);
        return 0;
    }

    VAR_18 = FUNC_1(VAR_13, VAR_3, VAR_17, ((void*)0), ((void*)0));
    if (VAR_18 < 0) {




        FUNC_2(VAR_5,
                  VAR_10);
        return 0;
    }



    if (VAR_18 & VAR_0) {
        if (VAR_15 != ((void*)0)) {
            FUNC_2(VAR_5,
                      VAR_9);
            return 0;
        }






        if (FUNC_1(VAR_13, VAR_17, 0, (void *)VAR_15, ((void*)0)) > 0)
            return 1;
        return 0;
    }

    if (VAR_15 == ((void*)0)) {
        FUNC_2(VAR_5,
                  VAR_8);
        return 0;
    }

    if (VAR_18 & VAR_2) {

        if (FUNC_1(VAR_13, VAR_17, 0, (void *)VAR_15, ((void*)0)) > 0)
            return 1;
        return 0;
    }






    if (!(VAR_18 & VAR_1)) {
        FUNC_2(VAR_5,
                  VAR_10);
        return 0;
    }
    VAR_19 = FUNC_4(VAR_15, &VAR_20, 10);
    if ((VAR_15 == VAR_20) || (*VAR_20 != '\0')) {
        FUNC_2(VAR_5,
                  VAR_6);
        return 0;
    }




    if (FUNC_1(VAR_13, VAR_17, VAR_19, ((void*)0), ((void*)0)) > 0)
        return 1;
    return 0;
}
