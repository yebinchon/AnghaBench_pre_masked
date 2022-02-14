
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BN_GENCB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(int VAR_0, int VAR_1, BN_GENCB *VAR_2)
{
    char VAR_3 = '*';

    if (VAR_0 == 0)
        VAR_3 = '.';
    if (VAR_0 == 1)
        VAR_3 = '+';
    if (VAR_0 == 2)
        VAR_3 = '*';
    if (VAR_0 == 3)
        VAR_3 = '\n';
    FUNC_1(FUNC_2(VAR_2), &VAR_3, 1);
    (void)FUNC_0(FUNC_2(VAR_2));
    return 1;
}
