
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_6__ {TYPE_2__* p_FmPcdPlcr; } ;
typedef TYPE_3__ t_FmPcd ;
struct TYPE_5__ {TYPE_1__* portsMapping; } ;
struct TYPE_4__ {scalar_t__ h_FmPort; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (size_t,int ) ;

void FUNC_2(t_Handle VAR_0, t_Handle VAR_1, uint8_t VAR_2)
{
    t_FmPcd *VAR_3 = (t_FmPcd*)VAR_0;
    uint16_t VAR_4 = 0;

    FUNC_0(VAR_0);
    FUNC_1(VAR_4, VAR_2);
    VAR_3->p_FmPcdPlcr->portsMapping[VAR_4].h_FmPort = VAR_1;
}
