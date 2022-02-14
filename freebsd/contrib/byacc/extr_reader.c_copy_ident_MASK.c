
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_2 (char,int *) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 () ;

__attribute__((used)) static void
FUNC_5(void)
{
    int VAR_6;
    FILE *VAR_7 = VAR_5;

    VAR_6 = FUNC_1();
    if (VAR_6 == VAR_0)
 FUNC_4();
    if (VAR_6 != '"')
 FUNC_3(VAR_3, VAR_2, VAR_1);
    ++VAR_4;
    FUNC_0(VAR_7, "#ident \"");
    for (;;)
    {
 VAR_6 = *++VAR_1;
 if (VAR_6 == '\n')
 {
     FUNC_0(VAR_7, "\"\n");
     return;
 }
 FUNC_2(VAR_6, VAR_7);
 if (VAR_6 == '"')
 {
     FUNC_2('\n', VAR_7);
     ++VAR_1;
     return;
 }
    }
}
