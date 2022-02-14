
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_1 ;
 int FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static int FUNC_3(const char *VAR_2, int VAR_3, void *VAR_4)
{
    unsigned long *VAR_5 = VAR_4, VAR_6;
    int VAR_7;
    if (VAR_2 == ((void*)0))
        return 0;
    if ((VAR_3 == 3) && (FUNC_2(VAR_2, "DIR", 3) == 0)) {
        *VAR_5 |= VAR_1;
        return 1;
    }
    VAR_7 = FUNC_1(VAR_2, VAR_3);
    if (!VAR_7 || (VAR_7 & VAR_0))
        return 0;
    VAR_6 = FUNC_0(VAR_7);
    if (!VAR_6)
        return 0;
    *VAR_5 |= VAR_6;
    return 1;
}
