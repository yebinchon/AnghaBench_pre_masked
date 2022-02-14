
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

int
FUNC_4(const char *VAR_0, const char *VAR_1)
{
    int VAR_2, VAR_3, VAR_4;

    for (;;) {
 VAR_2 = FUNC_0(*VAR_0++);
 VAR_3 = FUNC_0(*VAR_1++);
 if (FUNC_2(VAR_2) && FUNC_3(VAR_2))
     VAR_2 = FUNC_1(VAR_2);
 if (FUNC_2(VAR_3) && FUNC_3(VAR_3))
     VAR_3 = FUNC_1(VAR_3);
 VAR_4 = VAR_2 - VAR_3;
 if (VAR_2 == 0 || VAR_3 == 0 || VAR_4 != 0)
     break;
    }
    return VAR_4;
}
