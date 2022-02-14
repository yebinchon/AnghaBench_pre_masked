
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int t_Handle ;
struct TYPE_4__ {TYPE_1__* intrMng; } ;
typedef TYPE_2__ t_Fm ;
typedef int e_FmIntrType ;
typedef int e_FmEventModules ;
struct TYPE_3__ {int * h_SrcHandle; int f_Isr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_2(t_Handle VAR_2,
                        e_FmEventModules VAR_3,
                        uint8_t VAR_4,
                        e_FmIntrType VAR_5)
{
    t_Fm *VAR_6 = (t_Fm*)VAR_2;
    int VAR_7 = 0;

    FUNC_0(VAR_2);

    FUNC_1(VAR_3, VAR_4,VAR_5, VAR_7);
    FUNC_0(VAR_7 < VAR_1);

    VAR_6->intrMng[VAR_7].f_Isr = VAR_0;
    VAR_6->intrMng[VAR_7].h_SrcHandle = ((void*)0);
}
