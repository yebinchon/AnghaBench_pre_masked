
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
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char**) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (int *,int ) ;
 scalar_t__ FUNC_13 (char*,char*) ;

int
FUNC_14 (int VAR_8, char **VAR_9)
{
    struct item {
 const char *i_title;
 int i_count;
    };
    struct item VAR_10[] = {
 { "gum", 1412 },
 { "rope", 85 },
 { "ladder", 0 },
 { "bolt", 4123 },
 { "water", 17 },
 { ((void*)0), 0 }
    };
    struct item *VAR_11;
    int VAR_12;

    VAR_8 = FUNC_9(VAR_8, VAR_9);
    if (VAR_8 < 0)
 return 1;

    for (VAR_8 = 1; VAR_9[VAR_8]; VAR_8++) {
 if (FUNC_13(VAR_9[VAR_8], "xml"))
     FUNC_12(((void*)0), VAR_7);
 else if (FUNC_13(VAR_9[VAR_8], "json"))
     FUNC_12(((void*)0), VAR_5);
 else if (FUNC_13(VAR_9[VAR_8], "text"))
     FUNC_12(((void*)0), VAR_6);
 else if (FUNC_13(VAR_9[VAR_8], "html"))
     FUNC_12(((void*)0), VAR_4);
 else if (FUNC_13(VAR_9[VAR_8], "pretty"))
     FUNC_10(((void*)0), VAR_2);
 else if (FUNC_13(VAR_9[VAR_8], "xpath"))
     FUNC_10(((void*)0), VAR_3);
 else if (FUNC_13(VAR_9[VAR_8], "info"))
     FUNC_10(((void*)0), VAR_0);
        else if (FUNC_13(VAR_9[VAR_8], "error")) {
            FUNC_0(-1);
            FUNC_4(1, "error detected");
        }
    }

    FUNC_10(((void*)0), VAR_1);
    FUNC_11("test");

    FUNC_7(((void*)0), "top");

    FUNC_6("data");
    FUNC_6("contents");

    FUNC_3("{T:Item/%-10s}{T:Count/%12s}\n");

    for (VAR_11 = VAR_10; VAR_11->i_title; VAR_11++) {
 FUNC_3("Name: {l:name/%-10s/%s}\n", VAR_11->i_title);
    }

    FUNC_1("contents");

    FUNC_3("\n\n");
    FUNC_6("contents");

    FUNC_3("{T:Item/%-10s}{T:Count/%12s}\n");

    for (VAR_11 = VAR_10; VAR_11->i_title; VAR_11++) {
 FUNC_3("Name: {l:item/%-10s/%s}\n", VAR_11->i_title);
    }

    FUNC_1("contents");

    FUNC_3("\n\n");

    FUNC_6("contents");
    FUNC_3("{T:Test/%-10s}{T:Three/%12s}\n");

    FUNC_8("item");
    for (VAR_11 = VAR_10; VAR_11->i_title; VAR_11++) {
 FUNC_3("Name: {l:item/%-10s/%s}\n", VAR_11->i_title);
    }
    FUNC_3("{Lwc:/Total:}{:total}\n", "six");

    FUNC_3("{:one}", "one");
    FUNC_3("{l:two}", "two");
    FUNC_3("{:three}", "three");


    FUNC_1("contents");

    FUNC_3("\n\n");

    FUNC_2(((void*)0), "top");

    FUNC_5();

    return 0;
}
