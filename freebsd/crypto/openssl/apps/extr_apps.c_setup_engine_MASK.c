
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (char const*) ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,char*,int ,int ,int ,int) ;
 int FUNC_4 (int *) ;
 char const* FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int * FUNC_10 (char const*) ;
 int VAR_3 ;

ENGINE *FUNC_11(const char *VAR_4, int VAR_5)
{
    ENGINE *VAR_6 = ((void*)0);


    if (VAR_4 != ((void*)0)) {
        if (FUNC_9(VAR_4, "auto") == 0) {
            FUNC_0(VAR_2, "enabling auto ENGINE support\n");
            FUNC_6();
            return ((void*)0);
        }
        if ((VAR_6 = FUNC_1(VAR_4)) == ((void*)0)
            && (VAR_6 = FUNC_10(VAR_4)) == ((void*)0)) {
            FUNC_0(VAR_2, "invalid engine \"%s\"\n", VAR_4);
            FUNC_8(VAR_2);
            return ((void*)0);
        }
        if (VAR_5) {
            FUNC_2(VAR_6, VAR_0, 0, VAR_2, 0);
        }
        FUNC_3(VAR_6, "SET_USER_INTERFACE", 0, VAR_3, 0, 1);
        if (!FUNC_7(VAR_6, VAR_1)) {
            FUNC_0(VAR_2, "can't use that engine\n");
            FUNC_8(VAR_2);
            FUNC_4(VAR_6);
            return ((void*)0);
        }

        FUNC_0(VAR_2, "engine \"%s\" set.\n", FUNC_5(VAR_6));
    }

    return VAR_6;
}
