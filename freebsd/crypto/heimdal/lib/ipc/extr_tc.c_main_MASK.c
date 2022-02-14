
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,char**,int*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_3 ;

int
FUNC_6(int VAR_4, char **VAR_5)
{
    int VAR_6 = 0;

    FUNC_3(VAR_5[0]);

    if (FUNC_1(VAR_0, VAR_2, VAR_4, VAR_5, &VAR_6))
 FUNC_5(1);

    if (VAR_1)
 FUNC_5(0);

    if (VAR_3) {
 FUNC_2(((void*)0));
 FUNC_0(0);
    }




    FUNC_4("ANY:org.h5l.test-ipc");
    FUNC_4("UNIX:org.h5l.test-ipc");

    return 0;
}
