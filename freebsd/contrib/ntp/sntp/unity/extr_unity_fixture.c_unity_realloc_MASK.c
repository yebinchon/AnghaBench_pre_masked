
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t size; } ;
typedef TYPE_1__ Guard ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*,void*,size_t) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (size_t) ;

void* FUNC_6(void * VAR_0, size_t VAR_1)
{
    Guard* VAR_2 = (Guard*)VAR_0;

    void* VAR_3;

    if (VAR_0 == 0)
        return FUNC_5(VAR_1);

    VAR_2--;
    if (FUNC_1(VAR_0))
    {
        FUNC_3(VAR_0);
        FUNC_0("Buffer overrun detected during realloc()");
    }

    if (VAR_1 == 0)
    {
        FUNC_3(VAR_0);
        return 0;
    }

    if (VAR_2->size >= VAR_1)
        return VAR_0;

    VAR_3 = FUNC_5(VAR_1);
    FUNC_2(VAR_3, VAR_0, VAR_2->size);
    FUNC_4(VAR_0);
    return VAR_3;
}
