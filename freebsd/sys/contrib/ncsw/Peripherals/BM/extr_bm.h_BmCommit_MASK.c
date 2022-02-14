
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int p_BmPortalLow; TYPE_1__* cbs; } ;
typedef TYPE_2__ t_BmPortal ;
typedef size_t bmRingType_t ;
struct TYPE_4__ {int (* f_BmCommitCb ) (int ,int ) ;} ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static __inline__ void FUNC_1(t_BmPortal *VAR_0, bmRingType_t VAR_1, uint8_t VAR_2)
{
    VAR_0->cbs[VAR_1].f_BmCommitCb(VAR_0->p_BmPortalLow, VAR_2);
}
