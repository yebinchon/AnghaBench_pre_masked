
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WINDOW ;
typedef int DIALOG_VARS ;


 int VAR_0 ;
 int VAR_1 ;
 char** VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(int VAR_4, WINDOW *VAR_5, char *VAR_6, DIALOG_VARS * VAR_7)
{
    int VAR_8;

    if (VAR_5 != 0)
 FUNC_0(VAR_5);
    FUNC_1();
    if (VAR_6 != 0)
 FUNC_3(VAR_6);
    FUNC_2(VAR_7);

    for (VAR_8 = 0; VAR_8 < VAR_0; ++VAR_8) {
 FUNC_3(VAR_2[VAR_8]);
 VAR_2[VAR_8] = 0;
    }
    for (VAR_8 = 0; VAR_8 < VAR_1; ++VAR_8) {
 FUNC_3(VAR_3[VAR_8]);
 VAR_3[VAR_8] = 0;
    }

    return VAR_4;
}
