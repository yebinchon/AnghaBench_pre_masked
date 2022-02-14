
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {int numOfRxSc; int sciInsertionMode; int isPointToPoint; struct TYPE_3__* p_FmMacsecSecYDriverParam; } ;
typedef TYPE_1__ t_FmMacsecSecY ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_3 ;
 int VAR_4 ;

t_Error FUNC_1(t_Handle VAR_5)
{
    t_FmMacsecSecY *VAR_6 = (t_FmMacsecSecY *)VAR_5;

    FUNC_0(VAR_6, VAR_0);
    FUNC_0(VAR_6->p_FmMacsecSecYDriverParam, VAR_1);

    VAR_6->numOfRxSc = 1;
    VAR_6->isPointToPoint = VAR_3;
    VAR_6->sciInsertionMode = VAR_4;

    return VAR_2;
}
