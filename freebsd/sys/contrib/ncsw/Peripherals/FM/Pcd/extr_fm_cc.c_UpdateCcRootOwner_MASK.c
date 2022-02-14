
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* owners; } ;
typedef TYPE_1__ t_FmPcdCcTree ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(t_FmPcdCcTree *VAR_0, bool VAR_1)
{
    FUNC_0(VAR_0);



    if (VAR_1)
        VAR_0->owners++;
    else
    {
        FUNC_0(VAR_0->owners);
        VAR_0->owners--;
    }
}
