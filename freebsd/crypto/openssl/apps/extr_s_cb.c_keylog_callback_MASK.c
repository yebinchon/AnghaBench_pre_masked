
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,...) ;
 int VAR_0 ;
 int * VAR_1 ;

__attribute__((used)) static void FUNC_2(const SSL *VAR_2, const char *VAR_3)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_1(&VAR_0, "Keylog callback is invoked without valid file!\n");
        return;
    }





    FUNC_1(VAR_1, "%s\n", VAR_3);
    (void)FUNC_0(VAR_1);
}
