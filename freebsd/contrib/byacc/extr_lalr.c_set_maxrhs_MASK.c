
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ Value_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;

__attribute__((used)) static void
FUNC_0(void)
{
    Value_t *VAR_3;
    Value_t *VAR_4;
    int VAR_5;
    int VAR_6;

    VAR_5 = 0;
    VAR_6 = 0;
    VAR_4 = VAR_2 + VAR_1;
    for (VAR_3 = VAR_2; VAR_3 < VAR_4; VAR_3++)
    {
 if (*VAR_3 >= 0)
 {
     VAR_5++;
 }
 else
 {
     if (VAR_5 > VAR_6)
  VAR_6 = VAR_5;
     VAR_5 = 0;
 }
    }

    VAR_0 = VAR_6;
}
