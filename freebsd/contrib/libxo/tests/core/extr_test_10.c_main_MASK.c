
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; char* member_1; char* member_2; } ;
typedef TYPE_1__ xo_info_t ;
typedef int info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int,char**) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,TYPE_1__*,int) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char*,char*) ;

int
FUNC_19 (int VAR_9, char **VAR_10)
{
    static char VAR_11[] = "GRO";
    static char VAR_12[] = "HRD";
    struct item {
 const char *i_title;
 int i_sold;
 int i_instock;
 int i_onorder;
 const char *i_sku_base;
 int i_sku_num;
    };
    struct item VAR_13[] = {
 { "gum", 1412, 54, 10, VAR_11, 415 },
 { "rope", 85, 4, 2, VAR_12, 212 },
 { "ladder", 0, 2, 1, VAR_12, 517 },
 { "bolt", 4123, 144, 42, VAR_12, 632 },
 { "water", 17, 14, 2, VAR_11, 2331 },
 { ((void*)0), 0, 0, 0, ((void*)0), 0 }
    };
    struct item VAR_14[] = {
 { "fish", 1321, 45, 1, VAR_11, 533 },
 { ((void*)0), 0, 0, 0, ((void*)0), 0 }
    };
    struct item *VAR_15;
    xo_info_t VAR_16[] = {
 { "in-stock", "number", "Number of items in stock" },
 { "name", "string", "Name of the item" },
 { "on-order", "number", "Number of items on order" },
 { "sku", "string", "Stock Keeping Unit" },
 { "sold", "number", "Number of items sold" },
 { ((void*)0), ((void*)0), ((void*)0) },
    };
    int VAR_17 = (sizeof(VAR_16) / sizeof(VAR_16[0])) - 1;

    VAR_9 = FUNC_13(VAR_9, VAR_10);
    if (VAR_9 < 0)
 return 1;

    for (VAR_9 = 1; VAR_10[VAR_9]; VAR_9++) {
 if (FUNC_18(VAR_10[VAR_9], "xml"))
     FUNC_16(((void*)0), VAR_8);
 else if (FUNC_18(VAR_10[VAR_9], "json"))
     FUNC_16(((void*)0), VAR_6);
 else if (FUNC_18(VAR_10[VAR_9], "text"))
     FUNC_16(((void*)0), VAR_7);
 else if (FUNC_18(VAR_10[VAR_9], "html"))
     FUNC_16(((void*)0), VAR_5);
 else if (FUNC_18(VAR_10[VAR_9], "pretty"))
     FUNC_14(((void*)0), VAR_3);
 else if (FUNC_18(VAR_10[VAR_9], "xpath"))
     FUNC_14(((void*)0), VAR_4);
 else if (FUNC_18(VAR_10[VAR_9], "info"))
     FUNC_14(((void*)0), VAR_1);
        else if (FUNC_18(VAR_10[VAR_9], "error")) {
            FUNC_0(-1);
            FUNC_7(1, "error detected");
        }
    }

    FUNC_15(((void*)0), VAR_16, VAR_17);
    FUNC_14(((void*)0), VAR_2);


    FUNC_14(((void*)0), VAR_0);

    FUNC_17("3.1.4");

    FUNC_10(((void*)0), "top");

    FUNC_1("test", "value");
    FUNC_9("data");
    FUNC_12("item");
    FUNC_1("test2", "value2");

    static const char *VAR_18[] =
 { "blue", "green", "red", "yellow", "default", ((void*)0) };

    int VAR_19;
    for (VAR_19 = 0; VAR_18[VAR_19]; VAR_19++) {
 if (VAR_19 > 0)
     FUNC_6("{C:/bg-%s}", VAR_18[VAR_19-1]);
 FUNC_6("{C:/fg-%s}{T:/%s}", VAR_18[VAR_19], VAR_18[VAR_19]);
    }
    FUNC_6("{C:reset}\n");

    FUNC_6("{C:bold}{:data} {C:underline}{:data} {C:inverse}{:data} "
     "{C:no-bold}{:data} {C:no-inverse}{:data} "
     "{C:no-underline}{:data}\n",
     "bold", "bold-ul", "triple", "inv-ul", "underline", "plain");

    FUNC_6("{T:Item/%-10s}{C:bold,underline}{T:Total Sold/%12s}{C:no-bold}"
     "{T:In Stock/%12s}{C:/%s}"
     "{T:On Order/%12s}{C:normal}{T:SKU/%5s}\n", "inverse");






    for (VAR_15 = VAR_13; VAR_15->i_title; VAR_15++) {
 FUNC_11("item");
 FUNC_1("test3", "value3");

 FUNC_6("{keq:sku/%s-%u/%s-000-%u}"
  "{k:name/%-10s/%s}{n:sold/%12u/%u}"
  "{C:/%s}{:in-stock/%12u/%u}{C:normal}"
  "{C:/fg-%s}{:on-order/%12u/%u}{C:/fg-default}"
  "{qkd:sku/%5s-000-%u/%s-000-%u}\n",
  VAR_15->i_sku_base, VAR_15->i_sku_num,
  VAR_15->i_title, VAR_15->i_sold,
  (VAR_15->i_instock < 5) ? "inverse" : "normal", VAR_15->i_instock,
  (VAR_15->i_onorder > 5) ? "yellow" : "default", VAR_15->i_onorder,
  VAR_15->i_sku_base, VAR_15->i_sku_num);

 FUNC_4("item");
    }

    FUNC_5("item");
    FUNC_2("data");

    FUNC_6("\n\n");

    FUNC_9("data");
    FUNC_12("item");

    for (VAR_15 = VAR_13; VAR_15->i_title; VAR_15++) {
 FUNC_11("item");

 FUNC_6("{keq:sku/%s-%u/%s-000-%u}", VAR_15->i_sku_base, VAR_15->i_sku_num);
 FUNC_6("{L:Item} '{k:name/%s}':\n", VAR_15->i_title);
 FUNC_6("{P:   }{L:Total sold}: {n:sold/%u%s}\n",
  VAR_15->i_sold, VAR_15->i_sold ? ".0" : "");
 FUNC_6("{P:   }{Lcw:In stock}{C:inverse}{:in-stock/%u}{C:}\n",
  VAR_15->i_instock);
 FUNC_6("{P:   }{Lcw:On order}{:on-order/%u}\n", VAR_15->i_onorder);
 FUNC_6("{P:   }{L:SKU}: {qkd:sku/%s-000-%u}\n",
  VAR_15->i_sku_base, VAR_15->i_sku_num);

 FUNC_4("item");
    }

    FUNC_5("item");
    FUNC_2("data");

    FUNC_9("data");
    FUNC_12("item");

    for (VAR_15 = VAR_14; VAR_15->i_title; VAR_15++) {
 FUNC_11("item");

 FUNC_6("{keq:sku/%s-%u/%s-000-%u}", VAR_15->i_sku_base, VAR_15->i_sku_num);
 FUNC_6("{L:Item} '{k:name/%s}':\n", VAR_15->i_title);
 FUNC_6("{P:   }{C:bg-blue   , fg-white, bold   }{L:Total sold}: "
  "{n:sold/%u%s}{C:}\n",
  VAR_15->i_sold, VAR_15->i_sold ? ".0" : "");
 FUNC_6("{P:   }{Lcw:In stock}{:in-stock/%u}\n", VAR_15->i_instock);
 FUNC_6("{P:   }{Lcw:On order}{:on-order/%u}\n", VAR_15->i_onorder);
 FUNC_6("{P:   }{L:SKU}: {qkd:sku/%s-000-%u}\n",
  VAR_15->i_sku_base, VAR_15->i_sku_num);

 FUNC_4("item");
    }

    FUNC_5("item");
    FUNC_2("data");

    FUNC_9("data");
    FUNC_12("item");

    for (VAR_15 = VAR_13; VAR_15->i_title; VAR_15++) {
 FUNC_1("test4", "value4");
 FUNC_6("{Lwc:Item}{l:item}\n", VAR_15->i_title);
    }

    FUNC_5("item");
    FUNC_2("data");

    FUNC_6("X{P:}X", "epic fail");
    FUNC_6("X{T:}X", "epic fail");
    FUNC_6("X{N:}X", "epic fail");
    FUNC_6("X{L:}X\n", "epic fail");

    FUNC_6("X{P:        }X{Lwc:Cost}{:cost/%u}\n", 425);
    FUNC_6("X{P:/%30s}X{Lwc:Cost}{:cost/%u}\n", "", 455);

    FUNC_3(((void*)0), "top");

    FUNC_8();

    return 0;
}
