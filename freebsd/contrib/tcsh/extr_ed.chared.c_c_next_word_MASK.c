
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static Char *
FUNC_2(Char *VAR_2, Char *VAR_3, int VAR_4)
{
    if (!VAR_1) {
 while (VAR_4--) {
     while ((VAR_2 < VAR_3) && !FUNC_1(*VAR_2))
  VAR_2++;
     while ((VAR_2 < VAR_3) && FUNC_1(*VAR_2))
  VAR_2++;
 }
 if (VAR_2 > VAR_3)
     VAR_2 = VAR_3;

 return(VAR_2);
    }

    while (VAR_4--) {
        int VAR_5;

        if (VAR_2 >= VAR_3)
            break;


        VAR_5 = FUNC_0(*VAR_2);
        while ((VAR_2 < VAR_3) && VAR_5 == FUNC_0(*VAR_2))
            VAR_2++;


        if (VAR_5 == VAR_0)
            continue;


        while ((VAR_2 < VAR_3) && FUNC_0(*VAR_2) == VAR_0)
            VAR_2++;
    }

    VAR_2--;

    return (VAR_2);
}
