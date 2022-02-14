
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,char const*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (char*,int ,int ) ;
 int FUNC_6 (int,char**) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (int,char*,char*,...) ;

int
FUNC_13 (int VAR_10, char **VAR_11)
{
    int VAR_12 = 1;
    int VAR_13 = 0;
    const char *VAR_14 = "EST";

    VAR_10 = FUNC_6(VAR_10, VAR_11);
    if (VAR_10 < 0)
 return 1;

    for (VAR_10 = 1; VAR_11[VAR_10]; VAR_10++) {
 if (FUNC_11(VAR_11[VAR_10], "full"))
     VAR_12 = 0;
 else if (FUNC_11(VAR_11[VAR_10], "fire"))
     VAR_13 = 1;
 else if (FUNC_11(VAR_11[VAR_10], "tz"))
     VAR_14 = VAR_11[++VAR_10];
    }

    FUNC_0("TZ", VAR_14, 1);
    FUNC_1();

    if (!VAR_13) {
 FUNC_8(VAR_8, VAR_9,
         VAR_7);
    }

    if (VAR_12) {
 FUNC_9(1);
 FUNC_5("test-program", VAR_6, 0);
    }

    FUNC_10("3.1.4");
    FUNC_7(42);

    FUNC_4(((void*)0), "top");

    FUNC_12(VAR_1 | VAR_2, "animal-status",
       "The {:animal} is {:state}", "snake", "loose");
    FUNC_12(VAR_1 | VAR_4, "animal-consumed",
       "My {:animal} ate your {:pet}", "snake", "hamster");
    FUNC_12(VAR_5 | VAR_0, "animal-talk",
       "{:count/%d} {:animal} said {:quote}", 1, "owl", "\"e=m\\c[2]\"");
    FUNC_7(32473);
    FUNC_12(VAR_3 | VAR_5, "ID47",
       "{e:iut/%u}An {:event-source} {:event-id/%u} log entry",
       3, "application", 1011);

    FUNC_2(((void*)0), "top");

    FUNC_3();

    return 0;
}
