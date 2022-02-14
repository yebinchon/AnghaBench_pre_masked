
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const**) ;
 int FUNC_1 (char const**,int,int*,int*,int*) ;

void
FUNC_2(const char **VAR_2, int *VAR_3)
{
    int VAR_4 = 1;
    int VAR_5, VAR_6, VAR_7;

    if (VAR_2 != 0 && FUNC_0(VAR_2)) {
 while (!FUNC_1(VAR_2, VAR_4, &VAR_5, &VAR_6, &VAR_7))
     ++VAR_4;
 VAR_4 += (4 * VAR_1);
 if (VAR_4 > VAR_0)
     VAR_4 = VAR_0;
 if (VAR_4 > *VAR_3)
     *VAR_3 = VAR_4;
    }
}
