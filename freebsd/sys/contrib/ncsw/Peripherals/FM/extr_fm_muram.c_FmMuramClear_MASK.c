
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int size; int baseAddr; } ;
typedef TYPE_1__ t_FmMuram ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(t_Handle VAR_1)
{
    t_FmMuram *VAR_2 = ( t_FmMuram *)VAR_1;

    FUNC_1(VAR_1, VAR_0);
    FUNC_0(FUNC_2(VAR_2->baseAddr), 0, VAR_2->size);
}
