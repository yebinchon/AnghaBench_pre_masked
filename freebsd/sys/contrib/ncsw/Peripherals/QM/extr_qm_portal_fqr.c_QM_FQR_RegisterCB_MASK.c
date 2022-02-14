
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int t_QmReceivedFrameCallback ;
struct TYPE_7__ {int numOfFqids; TYPE_2__** p_Fqs; } ;
typedef TYPE_3__ t_QmFqr ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_5__ {int * dqrr; } ;
struct TYPE_6__ {scalar_t__ h_App; TYPE_1__ cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;

t_Error FUNC_1(t_Handle VAR_2, t_QmReceivedFrameCallback *VAR_3, t_Handle VAR_4)
{
    t_QmFqr *VAR_5 = (t_QmFqr *)VAR_2;
    int VAR_6;

    FUNC_0(VAR_5, VAR_0);

    for (VAR_6=0;VAR_6<VAR_5->numOfFqids;VAR_6++)
    {
        VAR_5->p_Fqs[VAR_6]->cb.dqrr = VAR_3;
        VAR_5->p_Fqs[VAR_6]->h_App = VAR_4;
    }

    return VAR_1;
}
