
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 int VAR_1 ;

int
FUNC_5 (int VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;


    VAR_4 = FUNC_2();





 for ( VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5 )
        if (FUNC_0 (VAR_2, VAR_5) && !FUNC_0(VAR_3, VAR_5))
            FUNC_1 (VAR_4, VAR_5);


    if (0){
        FUNC_4(VAR_1, "ccl_set_diff (");
            FUNC_4(VAR_1, "\n    ");
            FUNC_3 (VAR_1, VAR_2);
            FUNC_4(VAR_1, "\n    ");
            FUNC_3 (VAR_1, VAR_3);
            FUNC_4(VAR_1, "\n    ");
            FUNC_3 (VAR_1, VAR_4);
        FUNC_4(VAR_1, "\n)\n");
    }
    return VAR_4;
}
