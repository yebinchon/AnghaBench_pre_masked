
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,int,int) ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_5(const int VAR_8, const char *VAR_9)
{
    if (VAR_8 == VAR_5)
        FUNC_3(VAR_7);
    else if (VAR_8 == VAR_4)
        FUNC_3(VAR_6);

    const int VAR_10 = FUNC_4(VAR_9, VAR_3 | VAR_1 | VAR_2, 0644);
    if (VAR_10 == -1)
        FUNC_2(VAR_0, "Cannot create %s", VAR_9);
    if (VAR_10 != VAR_8) {
        if (FUNC_1(VAR_10, VAR_8) == -1)
            FUNC_2(VAR_0, "Cannot redirect to fd %d", VAR_8);
    }
    FUNC_0(VAR_10);
}
