
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int * t_Handle ;
struct TYPE_5__ {int p_SourceTd; TYPE_2__* h_FmPcd; } ;
typedef TYPE_1__ t_FmPcdFrmReplicGroup ;
struct TYPE_6__ {scalar_t__ physicalMuramBase; } ;
typedef TYPE_2__ t_FmPcd ;
struct TYPE_7__ {int fqid; } ;
typedef TYPE_3__ t_AdOfTypeResult ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(t_Handle VAR_1,
                            void *VAR_2,
                            t_Handle *VAR_3)
{
    t_FmPcdFrmReplicGroup *VAR_4 = (t_FmPcdFrmReplicGroup *)VAR_1;
    t_AdOfTypeResult *VAR_5 = (t_AdOfTypeResult*)VAR_2;
    t_FmPcd *VAR_6;

    FUNC_0(VAR_4);
    VAR_6 = VAR_4->h_FmPcd;


    FUNC_1(VAR_5->fqid, VAR_0 |
        (uint32_t)((FUNC_2(VAR_4->p_SourceTd)) - VAR_6->physicalMuramBase));

    *VAR_3 = ((void*)0);
}
