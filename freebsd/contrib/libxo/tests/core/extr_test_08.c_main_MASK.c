
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
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,char**) ;
 int FUNC_15 (int *,int ) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int *,int ) ;
 scalar_t__ FUNC_18 (char*,char*) ;

int
FUNC_19 (int VAR_8, char **VAR_9)
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

    VAR_8 = FUNC_14(VAR_8, VAR_9);
    if (VAR_8 < 0)
 return 1;

    for (VAR_8 = 1; VAR_9[VAR_8]; VAR_8++) {
 if (FUNC_18(VAR_9[VAR_8], "xml"))
     FUNC_17(((void*)0), VAR_7);
 else if (FUNC_18(VAR_9[VAR_8], "json"))
     FUNC_17(((void*)0), VAR_5);
 else if (FUNC_18(VAR_9[VAR_8], "text"))
     FUNC_17(((void*)0), VAR_6);
 else if (FUNC_18(VAR_9[VAR_8], "html"))
     FUNC_17(((void*)0), VAR_4);
 else if (FUNC_18(VAR_9[VAR_8], "pretty"))
     FUNC_15(((void*)0), VAR_2);
 else if (FUNC_18(VAR_9[VAR_8], "xpath"))
     FUNC_15(((void*)0), VAR_3);
 else if (FUNC_18(VAR_9[VAR_8], "info"))
     FUNC_15(((void*)0), VAR_0);
        else if (FUNC_18(VAR_9[VAR_8], "error")) {
            FUNC_0(-1);
            FUNC_7(1, "error detected");
        }
    }

    FUNC_15(((void*)0), VAR_1);
    FUNC_16("test");

    FUNC_10(((void*)0), "top");

    FUNC_9("data");
    FUNC_9("contents");
    FUNC_12("item");

    FUNC_6("{T:Item/%-10s}{T:Count/%12s}\n");

    for (VAR_11 = VAR_10; VAR_11->i_title; VAR_11++) {
 FUNC_11("item");

 FUNC_6("{k:name/%-10s/%s}{n:count/%12u/%u}\n",
  VAR_11->i_title, VAR_11->i_count);

 FUNC_3("item");
    }

    FUNC_4("item");
    FUNC_1("contents");
    FUNC_1("data");

    FUNC_6("\n\n");

    FUNC_9("data2");
    FUNC_9("contents");

    FUNC_6("{T:Item/%-10s}{T:Count/%12s}\n");

    for (VAR_11 = VAR_10; VAR_11->i_title; VAR_11++) {
 FUNC_11("item");

 FUNC_6("{k:name/%-10s/%s}{n:count/%12u/%u}\n",
  VAR_11->i_title, VAR_11->i_count);
    }

    FUNC_1("data2");

    FUNC_6("\n\n");

    FUNC_9("data3");
    FUNC_13("m1");
    FUNC_9("contents");

    FUNC_6("{T:Item/%-10s}{T:Count/%12s}\n");

    for (VAR_11 = VAR_10; VAR_11->i_title; VAR_11++) {
 FUNC_11("item");

 FUNC_6("{k:name/%-10s/%s}{n:count/%12u/%u}\n",
  VAR_11->i_title, VAR_11->i_count);
    }

    FUNC_1("data3");
    FUNC_6("{:test}", "one");

    FUNC_5("m1");
    FUNC_1("data3");

    FUNC_6("\n\n");

    FUNC_9("data4");
    FUNC_13("m1");
    FUNC_9("contents");

    FUNC_6("{T:Item/%-10s}{T:Count/%12s}\n");

    for (VAR_11 = VAR_10; VAR_11->i_title; VAR_11++) {
 FUNC_11("item");

 FUNC_6("{k:name/%-10s/%s}{n:count/%12u/%u}\n",
  VAR_11->i_title, VAR_11->i_count);

 FUNC_13("m2");
 for (VAR_12 = 0; VAR_12 < 3; VAR_12++) {
     FUNC_11("sub");
     FUNC_6("{Lwc:/Name}{:name/%d} + 1 = {:next/%d}\n", VAR_12, VAR_12 + 1);
     FUNC_1("data4");
 }
 FUNC_5("m2");
 FUNC_6("{Lwc:/Last}{:last/%d}\n", VAR_12);
    }

    FUNC_1("data4");
    FUNC_6("{:test}", "one");

    FUNC_6("\n\n");

    FUNC_2(((void*)0), "top");

    FUNC_8();

    return 0;
}
