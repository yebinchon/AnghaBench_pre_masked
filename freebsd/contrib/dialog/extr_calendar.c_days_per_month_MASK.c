
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int*,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0, int VAR_1)
{
    static const int VAR_2[] =
    {
 31, 28, 31, 30, 31, 30,
 31, 31, 30, 31, 30, 31
    };
    int VAR_3;

    FUNC_0(&VAR_0, &VAR_1);
    VAR_3 = VAR_2[VAR_1];
    if (VAR_1 == 1)
 VAR_3 += FUNC_1(VAR_0);
    return VAR_3;
}
