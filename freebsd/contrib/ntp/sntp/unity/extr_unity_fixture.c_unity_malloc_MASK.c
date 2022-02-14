
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; } ;
typedef TYPE_1__ Guard ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;

void * FUNC_3(size_t VAR_4)
{
    char* VAR_5;
    Guard* VAR_6;

    if (VAR_3 != VAR_0)
    {
        if (VAR_3 == 0)
            return 0;
        VAR_3--;
    }

    VAR_2++;

    VAR_6 = (Guard*)FUNC_0(VAR_4 + sizeof(Guard) + 4);
    VAR_6->size = VAR_4;
    VAR_5 = (char*)&(VAR_6[1]);
    FUNC_1(&VAR_5[VAR_4], VAR_1, FUNC_2(VAR_1) + 1);

    return (void*)VAR_5;
}
