
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * dp; } ;
typedef int FICL_WORD ;
typedef TYPE_1__ FICL_SYSTEM ;
typedef int FICL_PARSE_STEP ;
typedef int FICL_DICT ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *,char*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int VAR_1 ;

void FUNC_4(FICL_SYSTEM *VAR_2, char *VAR_3, FICL_PARSE_STEP VAR_4)
{
    FICL_DICT *VAR_5 = VAR_2->dp;
    FICL_WORD *VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_1, VAR_0);
    FUNC_1(VAR_5, FUNC_0(VAR_4));
    FUNC_3(VAR_2, VAR_6);
}
