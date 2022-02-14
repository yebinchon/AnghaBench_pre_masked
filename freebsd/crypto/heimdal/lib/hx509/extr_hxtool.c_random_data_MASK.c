
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (void*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,int,int,int ) ;
 void* FUNC_5 (int) ;
 int FUNC_6 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;

int
FUNC_7(void *VAR_2, int VAR_3, char **VAR_4)
{
    void *VAR_5;
    int VAR_6, VAR_7;

    VAR_6 = FUNC_6(VAR_4[0], "byte");
    if (VAR_6 <= 0) {
 FUNC_2(VAR_0, "bad argument to random-data\n");
 return 1;
    }

    VAR_5 = FUNC_5(VAR_6);
    if (VAR_5 == ((void*)0)) {
 FUNC_2(VAR_0, "out of memory\n");
 return 1;
    }

    VAR_7 = FUNC_0(VAR_5, VAR_6);
    if (VAR_7 != 1) {
 FUNC_3(VAR_5);
 FUNC_2(VAR_0, "did not get cryptographic strong random\n");
 return 1;
    }

    FUNC_4(VAR_5, VAR_6, 1, VAR_1);
    FUNC_1(VAR_1);

    FUNC_3(VAR_5);

    return 0;
}
