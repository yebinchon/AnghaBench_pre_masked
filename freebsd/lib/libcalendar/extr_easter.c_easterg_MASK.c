
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m; int d; int y; } ;
typedef TYPE_1__ date ;



date *
FUNC_0(int VAR_0, date *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

 VAR_7 = VAR_0 % 19;
 VAR_2 = VAR_0 / 100;
 VAR_5 = (VAR_2 - 17) / 25;
 VAR_3 = (VAR_2 - VAR_2/4 -(VAR_2-VAR_5)/3 + 19 * VAR_7 + 15) % 30;
 VAR_3 = VAR_3 -(VAR_3/28) * (1 - (VAR_3/28) * (29/(VAR_3 + 1)) * ((21 - VAR_7)/11));
 VAR_4 = (VAR_0 + VAR_0/4 + VAR_3 + 2 - VAR_2 + VAR_2/4) % 7;
 VAR_6 = VAR_3 - VAR_4;
 VAR_1->m = 3 + (VAR_6 + 40) / 44;
 VAR_1->d = VAR_6 + 28 - 31*(VAR_1->m / 4);
 VAR_1->y = VAR_0;
 return (VAR_1);
}
