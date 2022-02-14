
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int i; } ;
struct TYPE_6__ {scalar_t__ fRestart; TYPE_1__ sourceID; } ;
typedef TYPE_2__ FICL_VM ;
typedef scalar_t__ FICL_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_2(FICL_VM *VAR_3)
{
    FICL_INT VAR_4 = (VAR_3->sourceID.i == -1) ? VAR_0 : VAR_1;
    if (VAR_4 && (VAR_3->fRestart == 0))
        FUNC_1(VAR_3, VAR_2);

    FUNC_0(VAR_4);
    return;
}
