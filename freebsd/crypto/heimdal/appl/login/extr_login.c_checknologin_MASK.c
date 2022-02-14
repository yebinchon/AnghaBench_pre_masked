
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(void)
{
    FILE *VAR_2;
    char VAR_3[1024];

    VAR_2 = FUNC_3(VAR_0, "r");
    if(VAR_2 == ((void*)0))
 return;
    while(FUNC_2(VAR_3, sizeof(VAR_3), VAR_2))
 FUNC_4(VAR_3, VAR_1);
    FUNC_1(VAR_2);
    FUNC_0(0);
}
