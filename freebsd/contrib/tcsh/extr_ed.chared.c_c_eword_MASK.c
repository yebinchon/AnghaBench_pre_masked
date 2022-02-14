
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static Char *
FUNC_1(Char *VAR_1, Char *VAR_2, int VAR_3)
{
    VAR_1++;

    while (VAR_3--) {
        int VAR_4;

        if (VAR_1 >= VAR_2)
            break;


        VAR_4 = FUNC_0(*VAR_1);
        while ((VAR_1 < VAR_2) && VAR_4 == FUNC_0(*VAR_1))
            VAR_1++;


        if (VAR_4 != VAR_0)
            continue;


        VAR_4 = FUNC_0(*VAR_1);
        while ((VAR_1 < VAR_2) && VAR_4 == FUNC_0(*VAR_1))
            VAR_1++;
    }

    VAR_1--;
    return(VAR_1);
}
