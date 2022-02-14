
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int,char*,char const*,char const*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;
 int FUNC_4 (char const*) ;

int FUNC_5(const char *VAR_5, const char *VAR_6,
                  const char *VAR_7)
{
    char VAR_8[2][VAR_0];
    int VAR_9, VAR_10;

    VAR_9 = FUNC_4(VAR_5) + FUNC_4(VAR_7);
    VAR_10 = FUNC_4(VAR_5) + FUNC_4(VAR_6);
    if (VAR_9 > VAR_10)
        VAR_10 = VAR_9;
    if (VAR_10 + 1 >= VAR_0) {
        FUNC_0(VAR_3, "file name too long\n");
        goto err;
    }

    VAR_10 = FUNC_1(VAR_8[0], sizeof(VAR_8[0]), "%s.%s", VAR_5, VAR_6);
    VAR_10 = FUNC_1(VAR_8[1], sizeof(VAR_8[1]), "%s.%s", VAR_5, VAR_7);




    if (FUNC_3(VAR_5, VAR_8[1]) < 0 && VAR_4 != VAR_1



        ) {
        FUNC_0(VAR_3,
                   "unable to rename %s to %s\n", VAR_5, VAR_8[1]);
        FUNC_2("reason");
        goto err;
    }
    if (FUNC_3(VAR_8[0], VAR_5) < 0) {
        FUNC_0(VAR_3,
                   "unable to rename %s to %s\n", VAR_8[0], VAR_5);
        FUNC_2("reason");
        FUNC_3(VAR_8[1], VAR_5);
        goto err;
    }
    return 1;
 err:
    return 0;
}
