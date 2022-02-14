
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pid_t ;


 int FUNC_0 (scalar_t__*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__,int ) ;
 int VAR_1 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(int VAR_2, pid_t *VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
        if (VAR_3[VAR_4] != 0)
            (void)FUNC_2(VAR_3[VAR_4], VAR_0);
    FUNC_0(VAR_3);
    FUNC_3(1);
    FUNC_1(VAR_2);
}
