
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int i; } ;
struct TYPE_5__ {TYPE_2__ sourceID; } ;
typedef TYPE_1__ FICL_VM ;
typedef TYPE_2__ CELL ;


 int FUNC_0 (TYPE_1__*,char*,int) ;

int FUNC_1(FICL_VM *VAR_0, char *VAR_1)
{
    int VAR_2;
    CELL VAR_3 = VAR_0->sourceID;
    VAR_0->sourceID.i = -1;
    VAR_2 = FUNC_0(VAR_0, VAR_1, -1);
    VAR_0->sourceID = VAR_3;
    return VAR_2;
}
