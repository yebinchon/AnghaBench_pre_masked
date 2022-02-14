
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xo_emit_flags_t ;


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
 int FUNC_0 (char*) ;
 int VAR_10 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,char const*,char*,char*,char*,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int,char**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int ) ;
 scalar_t__ FUNC_12 (char*,char*) ;

int
FUNC_13 (int VAR_11, char **VAR_12)
{
    int VAR_13, VAR_14 = 10;
    int VAR_15 = 0;
    xo_emit_flags_t VAR_16 = VAR_0;
    int VAR_17 = 1;

    VAR_11 = FUNC_8(VAR_11, VAR_12);
    if (VAR_11 < 0)
 return 1;

    for (VAR_11 = 1; VAR_12[VAR_11]; VAR_11++) {
 if (FUNC_12(VAR_12[VAR_11], "xml"))
     FUNC_11(((void*)0), VAR_9);
 else if (FUNC_12(VAR_12[VAR_11], "json"))
     FUNC_11(((void*)0), VAR_7);
 else if (FUNC_12(VAR_12[VAR_11], "text"))
     FUNC_11(((void*)0), VAR_8);
 else if (FUNC_12(VAR_12[VAR_11], "html"))
     FUNC_11(((void*)0), VAR_6);
 else if (FUNC_12(VAR_12[VAR_11], "no-color"))
     VAR_17 = 0;
 else if (FUNC_12(VAR_12[VAR_11], "pretty"))
     FUNC_10(((void*)0), VAR_3);
 else if (FUNC_12(VAR_12[VAR_11], "xpath"))
     FUNC_10(((void*)0), VAR_5);
 else if (FUNC_12(VAR_12[VAR_11], "info"))
     FUNC_10(((void*)0), VAR_2);
 else if (FUNC_12(VAR_12[VAR_11], "no-retain"))
     VAR_16 &= ~VAR_0;
 else if (FUNC_12(VAR_12[VAR_11], "big")) {
     if (VAR_12[VAR_11 + 1])
  VAR_14 = FUNC_0(VAR_12[++VAR_11]);
 }
    }

    FUNC_10(((void*)0), VAR_4);
    if (VAR_17)
 FUNC_10(((void*)0), VAR_1);
    FUNC_9(VAR_10);

    FUNC_6("top");
    FUNC_6("data");

    FUNC_3("{C:fg-red,bg-green}Merry XMas!!{C:}\n");

    FUNC_3("One {C:fg-yellow,bg-blue}{:animal}{C:}, "
     "Two {C:fg-green,bg-yellow}{:animal}{C:}\n",
          "fish", "fish");

    const char *VAR_18 = "The {C:fg-red}{k:name}{C:reset} is "
 "{C:/fg-%s}{:color}{C:reset} til {:time/%02d:%02d}\n";
    const char *VAR_19 = "My {C:fg-red}{:hand}{C:reset} hand is "
 "{C:/fg-%s}{:color}{C:reset} til {:time/%02d:%02d}\n";

    for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {
 FUNC_7("thing");
 FUNC_4(VAR_16, VAR_18, "thing", "green", "green", 2, 15);
 FUNC_4(VAR_16, VAR_19, "left", "blue", "blue", 3, 45);
    }

    FUNC_6("2by4");
    FUNC_3("There is {:4x4} in {:2morrow}\n", "truck", "tomorrow");
    FUNC_1("2by4");


    FUNC_1("data");
    FUNC_2(((void*)0), "top");

    FUNC_5();

    return 0;
}
