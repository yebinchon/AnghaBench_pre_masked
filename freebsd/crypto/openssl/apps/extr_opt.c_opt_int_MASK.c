
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,int ,char const*) ;
 int VAR_0 ;
 int FUNC_1 (char const*,long*) ;
 int VAR_1 ;

int FUNC_2(const char *VAR_2, int *VAR_3)
{
    long VAR_4;

    if (!FUNC_1(VAR_2, &VAR_4))
        return 0;
    *VAR_3 = (int)VAR_4;
    if (*VAR_3 != VAR_4) {
        FUNC_0(VAR_0, "%s: Value \"%s\" outside integer range\n",
                   VAR_1, VAR_2);
        return 0;
    }
    return 1;
}
