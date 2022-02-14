
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int p_BmPortalLow; int ** depletionPoolsTable; } ;
typedef TYPE_1__ t_BmPortal ;
struct TYPE_7__ {size_t bpid; scalar_t__ h_BmPortal; } ;
typedef TYPE_2__ t_BmPool ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(t_BmPool *VAR_0)
{
    t_BmPortal *VAR_1 = (t_BmPortal *)VAR_0->h_BmPortal;

    FUNC_0(VAR_1);
    VAR_1->depletionPoolsTable[VAR_0->bpid] = ((void*)0);
    FUNC_2(VAR_1->p_BmPortalLow, (uint8_t)VAR_0->bpid, 0);
    FUNC_1(VAR_1);
}
