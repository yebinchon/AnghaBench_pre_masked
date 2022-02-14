
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_2__ {scalar_t__ h_Pcd; } ;
typedef TYPE_1__ t_Fm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

void FUNC_1(t_Handle VAR_2, t_Handle VAR_3)
{
    t_Fm *VAR_4 = (t_Fm*)VAR_2;

    if (VAR_4->h_Pcd)
        FUNC_0(VAR_1, VAR_0, ("PCD already set"));

    VAR_4->h_Pcd = VAR_3;
}
