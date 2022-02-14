
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srch {int* s_name; int s_value; } ;
typedef int Char ;


 int FUNC_0 (int*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct srch* VAR_2 ;
 int FUNC_1 (int*) ;

int
FUNC_2(Char *VAR_3)
{
    struct srch *VAR_4, *VAR_5, *VAR_6;
    int VAR_7;




    if (VAR_0)
 return -1;





    for (VAR_5 = VAR_2, VAR_6 = VAR_2 + VAR_1; VAR_5 < VAR_6;) {
 VAR_4 = VAR_5 + ((VAR_6 - VAR_5) >> 1);
 if ((VAR_7 = *VAR_3 - *VAR_4->s_name) == 0 &&
     (VAR_7 = FUNC_0(VAR_3, FUNC_1(VAR_4->s_name))) == 0)
     return VAR_4->s_value;
 if (VAR_7 < 0)
     VAR_6 = VAR_4;
 else
     VAR_5 = VAR_4 + 1;
    }
    return (-1);
}
