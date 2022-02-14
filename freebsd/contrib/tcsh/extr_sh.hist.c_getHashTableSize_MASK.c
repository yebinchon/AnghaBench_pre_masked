
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static unsigned
FUNC_1(int VAR_0)
{
    unsigned VAR_1 = VAR_0 * 2;
    unsigned VAR_2 = 5;
    unsigned VAR_3;
    while ((VAR_3 = 1<<VAR_2) < VAR_1)
 VAR_2++;




    FUNC_0((VAR_3 & (VAR_3-1)) == 0);
    return VAR_3;

}
