
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RtldLockState ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static void
FUNC_5(void)
{
    RtldLockState VAR_3;

    FUNC_4(VAR_2, &VAR_3);
    FUNC_0("rtld_exit()");
    FUNC_3(&VAR_1, ((void*)0), &VAR_3);

    if (!VAR_0)
        FUNC_1();
    FUNC_2(VAR_2, &VAR_3);
}
