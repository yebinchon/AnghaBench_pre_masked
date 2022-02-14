
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char const*) ;
 int VAR_3 ;
 int * VAR_4 ;
 scalar_t__ FUNC_3 (char const*,int ) ;
 int FUNC_4 (char const*,int ,int) ;
 int * FUNC_5 (char const*) ;

int FUNC_6(char const* VAR_5) {
    int VAR_6;

    if (VAR_5 == ((void*)0))
        return VAR_0;


    VAR_6 = FUNC_2(VAR_5);
    if (VAR_6 != 0)
        return VAR_6;


    VAR_4 = FUNC_5(VAR_5);
    if (VAR_4 == ((void*)0))
        return VAR_1;

    VAR_6 = FUNC_1(VAR_3, VAR_5);
    if (VAR_6 != 0)
        return VAR_6;






    if (FUNC_3(VAR_5, VAR_2))
        return 0;

    VAR_6 = FUNC_0(VAR_2);
    if (VAR_6 != 0)
        goto out;

out:

    FUNC_4(VAR_5, VAR_2, VAR_6);
    return VAR_6;
}
