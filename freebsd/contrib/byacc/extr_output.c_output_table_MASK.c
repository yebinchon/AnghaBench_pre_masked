
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,int ) ;
 int VAR_4 ;
 int * VAR_5 ;

__attribute__((used)) static void
FUNC_7(void)
{
    int VAR_6;
    int VAR_7;

    if (VAR_2 >= VAR_0)
    {
 FUNC_3(VAR_4, "YYTABLESIZE: %d\n", VAR_2);
 FUNC_3(VAR_4, "Table is longer than %d elements.\n", VAR_0);
 FUNC_1(1);
    }

    ++VAR_3;
    FUNC_3(VAR_1, "#define YYTABLESIZE %d\n", VAR_2);
    FUNC_6("table", VAR_5[0]);

    VAR_7 = 10;
    for (VAR_6 = 1; VAR_6 <= VAR_2; VAR_6++)
    {
 if (VAR_7 >= 10)
 {
     FUNC_5();
     VAR_7 = 1;
 }
 else
     ++VAR_7;

 FUNC_4(VAR_5[VAR_6]);
    }

    FUNC_2();
    FUNC_0(VAR_5);
}
