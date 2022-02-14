
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,char*) ;
 int * VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int VAR_2 ;
 int FUNC_2 (int,int *,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char*,int ) ;

void
FUNC_6(void)
{
    VAR_4++;
    FUNC_3(&VAR_4, VAR_3);
    if (VAR_5) {
 FUNC_2(2, VAR_1, VAR_0);
 FUNC_5("%s", FUNC_0(22, 3, "Faulty alias 'postcmd' removed.\n"));
 goto leave;
    }
    VAR_5 = 1;
    if (!VAR_6 && FUNC_1(VAR_0, &VAR_2))
 FUNC_2(1, VAR_0, ((void*)0));
leave:
    VAR_5 = 0;
    FUNC_4(&VAR_4);
}
