
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int ttdsaXchg_t ;
typedef int tdsaDeviceData_t ;
typedef int bit8 ;
typedef size_t bit32 ;
struct TYPE_4__ {size_t Idx; TYPE_1__* Data; } ;
struct TYPE_3__ {int * oneDeviceData; int * ttdsaXchg; int Time; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int *,int *,int) ;

void FUNC_2(ttdsaXchg_t *VAR_2, tdsaDeviceData_t *VAR_3)
{
    static bit32 VAR_4 = 0;

    VAR_1.Idx = VAR_4;



    FUNC_1((bit8 *)&(VAR_1.Data[VAR_4].ttdsaXchg), (bit8 *)VAR_2, sizeof(ttdsaXchg_t));
    FUNC_1((bit8 *)&(VAR_1.Data[VAR_4].oneDeviceData), (bit8 *)VAR_3, sizeof(tdsaDeviceData_t));





    VAR_4++;
    if (VAR_4 >= VAR_0)
    {
        VAR_4 = 0;
    }

    return;
}
