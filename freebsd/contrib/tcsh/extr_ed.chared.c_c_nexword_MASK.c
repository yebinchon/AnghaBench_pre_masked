
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Char ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static Char *
FUNC_1(Char *VAR_0, Char *VAR_1, int VAR_2)
{
    while (VAR_2--) {
 while ((VAR_0 < VAR_1) && !FUNC_0(*VAR_0))
     VAR_0++;
 while ((VAR_0 < VAR_1) && FUNC_0(*VAR_0))
     VAR_0++;
    }

    if (VAR_0 > VAR_1)
 VAR_0 = VAR_1;

    return(VAR_0);
}
