
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 size_t* VAR_3 ;

__attribute__((used)) static int
FUNC_0(int VAR_4)
{
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;
    int VAR_9;

    VAR_6 = VAR_0[VAR_4];
    VAR_7 = VAR_0[VAR_4 + 1];

    if (VAR_6 == VAR_7)
 return (0);

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
 VAR_2[VAR_5] = 0;

    for (VAR_5 = VAR_6; VAR_5 < VAR_7; VAR_5++)
 VAR_2[VAR_3[VAR_5]]++;

    VAR_9 = 0;
    VAR_8 = 0;
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    {
 if (VAR_2[VAR_5] > VAR_9)
 {
     VAR_9 = VAR_2[VAR_5];
     VAR_8 = VAR_5;
 }
    }

    return (VAR_8);
}
