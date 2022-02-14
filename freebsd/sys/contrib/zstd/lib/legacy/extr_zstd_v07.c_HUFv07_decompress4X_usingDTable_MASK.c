
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tableType; } ;
typedef int HUFv07_DTable ;
typedef TYPE_1__ DTableDesc ;


 size_t FUNC_0 (void*,size_t,void const*,size_t,int const*) ;
 size_t FUNC_1 (void*,size_t,void const*,size_t,int const*) ;
 TYPE_1__ FUNC_2 (int const*) ;

size_t FUNC_3(void* VAR_0, size_t VAR_1,
                                    const void* VAR_2, size_t VAR_3,
                                    const HUFv07_DTable* VAR_4)
{
    DTableDesc const VAR_5 = FUNC_2(VAR_4);
    return VAR_5.tableType ? FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4) :
                           FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
