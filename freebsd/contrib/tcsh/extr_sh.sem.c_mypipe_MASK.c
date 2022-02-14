
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void
FUNC_5(int *VAR_1)
{

    if (FUNC_2(VAR_1) < 0)
 goto oops;
    (void)FUNC_0(VAR_1[0] = FUNC_1(VAR_1[0], -1), 1);
    (void)FUNC_0(VAR_1[1] = FUNC_1(VAR_1[1], -1), 1);
    if (VAR_1[0] >= 0 && VAR_1[1] >= 0)
 return;
    if (VAR_1[0] >= 0)
 FUNC_4(VAR_1[0]);
    if (VAR_1[1] >= 0)
 FUNC_4(VAR_1[1]);
oops:
    FUNC_3(VAR_0);
}
