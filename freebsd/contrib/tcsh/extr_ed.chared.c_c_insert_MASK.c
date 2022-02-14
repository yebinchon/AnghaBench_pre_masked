
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_0(int VAR_4)
{
    Char *VAR_5;

    if (VAR_2 + VAR_4 >= VAR_1)
 return;

    if (VAR_0 < VAR_2) {
 for (VAR_5 = VAR_2; VAR_5 >= VAR_0; VAR_5--)
     VAR_5[VAR_4] = *VAR_5;
 if (VAR_3 && VAR_3 > VAR_0)
  VAR_3 += VAR_4;
    }
    VAR_2 += VAR_4;
}
