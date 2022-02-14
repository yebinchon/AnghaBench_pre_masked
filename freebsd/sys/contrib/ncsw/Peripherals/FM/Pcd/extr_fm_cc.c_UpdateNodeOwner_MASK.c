
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int h_Spinlock; struct TYPE_4__* owners; } ;
typedef TYPE_1__ t_FmPcdCcNode ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(t_FmPcdCcNode *VAR_0, bool VAR_1)
{
    uint32_t VAR_2;

    FUNC_0(VAR_0);

    VAR_2 = FUNC_1(VAR_0->h_Spinlock);

    if (VAR_1)
        VAR_0->owners++;
    else
    {
        FUNC_0(VAR_0->owners);
        VAR_0->owners--;
    }

    FUNC_2(VAR_0->h_Spinlock, VAR_2);
}
