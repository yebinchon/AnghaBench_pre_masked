
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 int* FUNC_0 (int*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(Char *VAR_1, Char *VAR_2)
{
    Char *VAR_3, *VAR_4;

    VAR_3 = FUNC_0(VAR_2);
    VAR_4 = FUNC_0(VAR_1);
    for (;;) {
 if (VAR_3 == VAR_2)
     return 1;
 if (VAR_4 == VAR_1 || (*--VAR_3 & VAR_0) != (*--VAR_4 & VAR_0))
     return 0;
    }
}
