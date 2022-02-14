
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint16_t ;
struct TYPE_10__ {int guestId; TYPE_3__* p_FmPcdPlcr; } ;
typedef TYPE_4__ t_FmPcd ;
struct TYPE_9__ {TYPE_2__* profiles; } ;
struct TYPE_7__ {size_t allocated; int ownerId; } ;
struct TYPE_8__ {TYPE_1__ profilesMng; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ) ;

__attribute__((used)) static void FUNC_2(t_FmPcd *VAR_2, uint16_t VAR_3, uint16_t *VAR_4)
{
    uint16_t VAR_5;

    FUNC_1(VAR_2, VAR_0);

    FUNC_0(VAR_3);

    for (VAR_5=0; VAR_5 < VAR_3; VAR_5++)
    {
        FUNC_0(VAR_2->p_FmPcdPlcr->profiles[VAR_4[VAR_5]].profilesMng.allocated);
        VAR_2->p_FmPcdPlcr->profiles[VAR_4[VAR_5]].profilesMng.allocated = VAR_1;
        VAR_2->p_FmPcdPlcr->profiles[VAR_4[VAR_5]].profilesMng.ownerId = VAR_2->guestId;
    }
}
