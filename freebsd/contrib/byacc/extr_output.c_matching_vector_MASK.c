
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__** VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 scalar_t__** VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static int
FUNC_0(int VAR_6)
{
    int VAR_7;
    int VAR_8;
    int VAR_9;
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;

    VAR_7 = VAR_2[VAR_6];
    if (VAR_7 >= 2 * VAR_1)
 return (-1);

    VAR_10 = VAR_3[VAR_7];
    VAR_11 = VAR_5[VAR_7];

    for (VAR_13 = VAR_6 - 1; VAR_13 >= 0; VAR_13--)
    {
 VAR_8 = VAR_2[VAR_13];
 if (VAR_5[VAR_8] != VAR_11 || VAR_3[VAR_8] != VAR_10)
     return (-1);

 VAR_12 = 1;
 for (VAR_9 = 0; VAR_12 && VAR_9 < VAR_10; VAR_9++)
 {
     if (VAR_4[VAR_8][VAR_9] != VAR_4[VAR_7][VAR_9] || VAR_0[VAR_8][VAR_9] != VAR_0[VAR_7][VAR_9])
  VAR_12 = 0;
 }

 if (VAR_12)
     return (VAR_8);
    }

    return (-1);
}
