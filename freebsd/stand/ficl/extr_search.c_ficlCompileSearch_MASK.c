
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dp; } ;
typedef TYPE_1__ FICL_SYSTEM ;
typedef int FICL_DICT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

void FUNC_3(FICL_SYSTEM *VAR_16)
{
    FICL_DICT *VAR_17 = VAR_16->dp;
    FUNC_0 (VAR_17);




    FUNC_1(VAR_17, ">search", VAR_9, VAR_2);
    FUNC_1(VAR_17, "search>", VAR_8, VAR_2);
    FUNC_1(VAR_17, "definitions",
                                    VAR_3, VAR_2);
    FUNC_1(VAR_17, "forth-wordlist",
                                    VAR_5, VAR_2);
    FUNC_1(VAR_17, "get-current",
                                    VAR_6, VAR_2);
    FUNC_1(VAR_17, "get-order", VAR_7, VAR_2);
    FUNC_1(VAR_17, "search-wordlist",
                                    VAR_10, VAR_2);
    FUNC_1(VAR_17, "set-current",
                                    VAR_11, VAR_2);
    FUNC_1(VAR_17, "set-order", VAR_12, VAR_2);
    FUNC_1(VAR_17, "ficl-wordlist",
                                    VAR_4, VAR_2);




    FUNC_2(VAR_16, "search-order", VAR_1);
    FUNC_2(VAR_16, "search-order-ext", VAR_1);
    FUNC_2(VAR_16, "wordlists", VAR_0);

    FUNC_1(VAR_17, "wid-get-name", VAR_14, VAR_2);
    FUNC_1(VAR_17, "wid-set-name", VAR_15, VAR_2);
    FUNC_1(VAR_17, "wid-set-super",
                                    VAR_13, VAR_2);
    return;
}
