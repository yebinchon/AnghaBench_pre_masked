
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int* FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;

int
FUNC_4(const char *VAR_0)
{
    int VAR_1 = 0;
    int VAR_2 = FUNC_0(VAR_0);
    if (VAR_2 > 0) {
 const int *VAR_3 = FUNC_2(VAR_0);
 VAR_1 = VAR_3[VAR_2];
    } else {
 VAR_1 = (int) FUNC_3(VAR_0);
    }
    FUNC_1(VAR_0);
    return VAR_1;
}
