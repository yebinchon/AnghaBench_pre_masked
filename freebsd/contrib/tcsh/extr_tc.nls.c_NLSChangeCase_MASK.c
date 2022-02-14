
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * FUNC_2 (int const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

Char *
FUNC_5(const Char *VAR_0, int VAR_1)
{
    Char VAR_2, *VAR_3, VAR_4 = 0;
    const Char *VAR_5 = VAR_0;

    for (; (VAR_2 = *VAR_0) != 0; VAR_0++) {
        if (VAR_1 == 0 && FUNC_0(VAR_2)) {
     VAR_4 = FUNC_4(VAR_2);
     break;
        } else if (VAR_1 && FUNC_1(VAR_2)) {
     VAR_4 = FUNC_3(VAR_2);
     break;
 }
    }
    if (!*VAR_0)
 return 0;
    VAR_3 = FUNC_2(VAR_5);
    VAR_3[VAR_0 - VAR_5] = VAR_4;
    return VAR_3;
}
