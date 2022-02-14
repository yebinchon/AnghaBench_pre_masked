
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_3__ {uintptr_t baseAddr; } ;
typedef TYPE_1__ t_Fm ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

uintptr_t FUNC_2(t_Handle VAR_4)
{
    t_Fm *VAR_5 = (t_Fm*)VAR_4;

    FUNC_1(VAR_5, VAR_0, 0);

    if (!VAR_5->baseAddr)
    {
        FUNC_0(VAR_3, VAR_1,
                     ("No base-addr; probably Guest with IPC!"));
        return 0;
    }

    return (VAR_5->baseAddr + VAR_2);
}
