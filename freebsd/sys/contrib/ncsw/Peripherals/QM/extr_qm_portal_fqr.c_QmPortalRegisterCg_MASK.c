
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {scalar_t__* cgsHandles; TYPE_2__* cgrs; } ;
typedef TYPE_3__ t_QmPortal ;
typedef scalar_t__ t_Handle ;
typedef int t_Error ;
struct TYPE_4__ {int* __state; } ;
struct TYPE_5__ {TYPE_1__ q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static t_Error FUNC_1(t_Handle VAR_3, t_Handle VAR_4, uint8_t VAR_5)
{
    t_QmPortal *VAR_6 = (t_QmPortal *)VAR_3;


    if(VAR_6->cgrs[0].q.__state[VAR_5/32] & (0x80000000 >> (VAR_5 % 32)))
        FUNC_0(VAR_2, VAR_0, ("CG already used"));

    VAR_6->cgrs[0].q.__state[VAR_5/32] |= 0x80000000 >> (VAR_5 % 32);
    VAR_6->cgsHandles[VAR_5] = VAR_4;

    return VAR_1;
}
