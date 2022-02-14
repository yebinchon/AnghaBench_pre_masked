
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int i; } ;
struct TYPE_7__ {TYPE_2__ sourceID; } ;
typedef TYPE_1__ FICL_VM ;
typedef int FICL_UNS ;
typedef TYPE_2__ CELL ;


 int FUNC_0 (int ) ;
 char* FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_6(FICL_VM *VAR_1)
{
    FICL_UNS VAR_2;
    char *VAR_3;
    CELL VAR_4;
    int VAR_5;




    VAR_2 = FUNC_2();
    VAR_3 = FUNC_1();

    FUNC_0(VAR_2);
    VAR_4 = VAR_1->sourceID;
    VAR_1->sourceID.i = -1;
    VAR_5 = FUNC_3(VAR_1, VAR_3, VAR_2);
    VAR_1->sourceID = VAR_4;
    if (VAR_5 != VAR_0)
        FUNC_5(VAR_1, VAR_5);

    return;
}
