
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ t_Handle ;
struct TYPE_2__ {int * h_Pcd; } ;
typedef TYPE_1__ t_Fm ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

void FUNC_1(t_Handle VAR_2)
{
    t_Fm *VAR_3 = (t_Fm*)VAR_2;

    if (!VAR_3->h_Pcd)
        FUNC_0(VAR_1, VAR_0, ("PCD handle!"));

    VAR_3->h_Pcd = ((void*)0);
}
