
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 unsigned long FUNC_3 (char const*,char**,int ) ;

int FUNC_4(const char *VAR_3)
{
    unsigned long VAR_4;
    char *VAR_5;

    if (FUNC_2(VAR_3, "MASK:", 5) == 0) {
        if (!VAR_3[5])
            return 0;
        VAR_4 = FUNC_3(VAR_3 + 5, &VAR_5, 0);
        if (*VAR_5)
            return 0;
    } else if (FUNC_1(VAR_3, "nombstr") == 0)
        VAR_4 = ~((unsigned long)(VAR_0 | VAR_2));
    else if (FUNC_1(VAR_3, "pkix") == 0)
        VAR_4 = ~((unsigned long)VAR_1);
    else if (FUNC_1(VAR_3, "utf8only") == 0)
        VAR_4 = VAR_2;
    else if (FUNC_1(VAR_3, "default") == 0)
        VAR_4 = 0xFFFFFFFFL;
    else
        return 0;
    FUNC_0(VAR_4);
    return 1;
}
