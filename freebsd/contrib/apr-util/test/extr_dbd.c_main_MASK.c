
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_dbd_t ;
typedef int apr_dbd_driver_t ;







 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *,char const*,int const**) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const*,int *,char const*,int **) ;
 int FUNC_5 () ;
 int FUNC_6 (int **,int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_9 (int ,char*,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (char*,char const*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_12(int VAR_11, char** VAR_12)
{
    const char *VAR_13;
    const char *VAR_14;
    apr_pool_t *VAR_15 = ((void*)0);
    apr_dbd_t *VAR_16 = ((void*)0);
    const apr_dbd_driver_t *VAR_17 = ((void*)0);
    int VAR_18;

    FUNC_5();
    FUNC_6(&VAR_15, ((void*)0));

    if (VAR_11 >= 2 && VAR_11 <= 3) {
        VAR_13 = VAR_12[1];
        VAR_14 = ( VAR_11 == 3 ) ? VAR_12[2] : "";
        FUNC_3(VAR_15);
        FUNC_11(VAR_7,((void*)0));
        VAR_18 = FUNC_2(VAR_15, VAR_13, &VAR_17);
        switch (VAR_18) {
        case 128:
           FUNC_10("Loaded %s driver OK.\n", VAR_13);
           break;
        case 132:
           FUNC_10("Failed to load driver file apr_dbd_%s.so\n", VAR_13);
           goto finish;
        case 129:
           FUNC_10("Failed to load driver apr_dbd_%s_driver.\n", VAR_13);
           goto finish;
        case 130:
           FUNC_10("No driver available for %s.\n", VAR_13);
           goto finish;
        default:
           FUNC_10("Internal error loading %s.\n", VAR_13);
           goto finish;
        }
        VAR_18 = FUNC_4(VAR_17, VAR_15, VAR_14, &VAR_16);
        switch (VAR_18) {
        case 128:
           FUNC_10("Opened %s[%s] OK\n", VAR_13, VAR_14);
           break;
        case 131:
           FUNC_10("Failed to open %s[%s]\n", VAR_13, VAR_14);
           goto finish;
        default:
           FUNC_10("Internal error opening %s[%s]\n", VAR_13, VAR_14);
           goto finish;
        }
        FUNC_0("create table", VAR_0);
        FUNC_0("insert rows", VAR_2);
        FUNC_0("invalid op", VAR_3);
        FUNC_0("select random", VAR_4);
        FUNC_0("select sequential", VAR_5);
        FUNC_0("transactions", VAR_10);
        FUNC_0("prepared select", VAR_9);
        FUNC_0("prepared query", VAR_8);
        FUNC_0("drop table", VAR_1);
        FUNC_1(VAR_17, VAR_16);
    }
    else {
        FUNC_9(VAR_6, "Usage: %s driver-name [params]\n", VAR_12[0]);
    }
finish:
    FUNC_7(VAR_15);
    FUNC_8();
    return 0;
}
