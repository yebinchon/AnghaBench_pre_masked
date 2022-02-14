
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int,int) ;

__attribute__((used)) static int *
FUNC_2(int VAR_1, int VAR_2)
{
    static int VAR_3[10];
    int VAR_4 = 0;
    int VAR_5;
    int VAR_6 = FUNC_0(VAR_1, VAR_2);

    for (VAR_5 = 1; VAR_5 <= VAR_6; VAR_5 += VAR_0)
 VAR_3[VAR_4++] = FUNC_1(VAR_1, VAR_2, VAR_5);






    VAR_3[VAR_4] = FUNC_1(VAR_1, VAR_2, VAR_6);
    return VAR_3;
}
