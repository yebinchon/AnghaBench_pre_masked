
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int VICMD ;
struct TYPE_2__ {int keyw; } ;
typedef int SCR ;
typedef int EXCMD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,scalar_t__) ;
 int FUNC_3 (int *,int *,int ,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int *,int *) ;

int
FUNC_5(SCR *VAR_2, VICMD *VAR_3)
{
 EXCMD VAR_4;

 FUNC_3(VAR_2, &VAR_4, VAR_0, 0, VAR_1, 0, 0);
 FUNC_2(VAR_2, &VAR_4, FUNC_1(VAR_2)->keyw, FUNC_0(FUNC_1(VAR_2)->keyw) + 1);
 return (FUNC_4(VAR_2, VAR_3, &VAR_4));
}
