
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_3__* pCompile; } ;
struct TYPE_15__ {char* name; } ;
struct TYPE_14__ {TYPE_4__* dp; } ;
struct TYPE_13__ {int code; } ;
typedef TYPE_1__ FICL_WORD ;
typedef TYPE_2__ FICL_SYSTEM ;
typedef TYPE_3__ FICL_HASH ;
typedef TYPE_4__ FICL_DICT ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*,char*,int ,int ) ;
 TYPE_3__* FUNC_3 (TYPE_4__*,int) ;
 int VAR_2 ;
 TYPE_1__* FUNC_4 (TYPE_2__*,char*) ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_5(FICL_SYSTEM *VAR_6)
{
    FICL_DICT *VAR_7 = VAR_6->dp;
    FICL_HASH *VAR_8;
    FICL_HASH *VAR_9 = VAR_7->pCompile;
    VAR_8 = FUNC_3(VAR_7, 1);
    VAR_8->name = VAR_3;
    FUNC_2(VAR_7, VAR_3, VAR_1, VAR_0);
    FUNC_1(VAR_7, FUNC_0(VAR_8));




    FUNC_2(VAR_7, "__tempbase", VAR_2, VAR_0);





    VAR_7->pCompile = VAR_8;
    FUNC_2(VAR_7, "0x", VAR_4, VAR_0);
    FUNC_2(VAR_7, "0d", VAR_5, VAR_0);







    VAR_7->pCompile = VAR_9;

    return;
}
