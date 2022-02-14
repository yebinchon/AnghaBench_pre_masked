
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,int ) ;
 int FUNC_1 (char*,char const*,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;

bool
FUNC_3(const char *VAR_3)
{
    const int VAR_4 = FUNC_0(VAR_3, VAR_1);
    if (VAR_4 == -1) {
        if (VAR_2 != VAR_0)
            FUNC_1("Failed to check the existence of %s: %s", VAR_3,
                        FUNC_2(VAR_2));
        else
            return 0;
    } else
        return 1;
}
