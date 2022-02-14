
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
typedef int t_FmPortRsrc ;
struct TYPE_3__ {int fifoBufs; int setSizeOfFifo; struct TYPE_3__* p_FmPortDriverParam; } ;
typedef TYPE_1__ t_FmPort ;
typedef int t_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,int *,int) ;

t_Error FUNC_2(t_Handle VAR_3, t_FmPortRsrc *VAR_4)
{
    t_FmPort *VAR_5 = (t_FmPort*)VAR_3;

    FUNC_0(VAR_5, VAR_0);
    FUNC_0(VAR_5->p_FmPortDriverParam, VAR_0);

    VAR_5->p_FmPortDriverParam->setSizeOfFifo = VAR_2;
    FUNC_1(&VAR_5->fifoBufs, VAR_4, sizeof(t_FmPortRsrc));

    return VAR_1;
}
