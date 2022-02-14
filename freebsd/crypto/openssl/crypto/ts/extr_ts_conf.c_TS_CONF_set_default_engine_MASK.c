
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ENGINE ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (char const*) ;
 int FUNC_1 (int *,int ,int,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int,char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (char const*,char*) ;

int FUNC_7(const char *VAR_4)
{
    ENGINE *VAR_5 = ((void*)0);
    int VAR_6 = 0;

    if (FUNC_6(VAR_4, "builtin") == 0)
        return 1;

    if ((VAR_5 = FUNC_0(VAR_4)) == ((void*)0))
        goto err;
    if (FUNC_6(VAR_4, "chil") == 0)
        FUNC_1(VAR_5, VAR_0, 1, 0, 0);
    if (!FUNC_3(VAR_5, VAR_1))
        goto err;
    VAR_6 = 1;

 err:
    if (!VAR_6) {
        FUNC_5(VAR_2, VAR_3);
        FUNC_4(2, "engine:", VAR_4);
    }
    FUNC_2(VAR_5);
    return VAR_6;
}
