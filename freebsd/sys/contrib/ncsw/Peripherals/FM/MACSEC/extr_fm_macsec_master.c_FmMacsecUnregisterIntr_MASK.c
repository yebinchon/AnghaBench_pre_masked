
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef scalar_t__ t_Handle ;
struct TYPE_5__ {TYPE_1__* intrMng; } ;
typedef TYPE_2__ t_FmMacsec ;
typedef int e_FmMacsecEventModules ;
typedef int e_FmIntrType ;
struct TYPE_4__ {int * h_SrcHandle; int * f_Isr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,size_t,int ,size_t) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 size_t VAR_1 ;

void FUNC_3(t_Handle VAR_2,
                            e_FmMacsecEventModules VAR_3,
                            uint8_t VAR_4,
                            e_FmIntrType VAR_5)
{
    t_FmMacsec *VAR_6 = (t_FmMacsec*)VAR_2;
    uint8_t VAR_7= 0;

    FUNC_2(VAR_6, VAR_0);

    FUNC_1(VAR_3, VAR_4,VAR_5, VAR_7);

    FUNC_0(VAR_7 != VAR_1);
    VAR_6->intrMng[VAR_7].f_Isr = ((void*)0);
    VAR_6->intrMng[VAR_7].h_SrcHandle = ((void*)0);
}
