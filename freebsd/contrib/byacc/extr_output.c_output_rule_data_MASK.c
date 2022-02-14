
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 size_t* VAR_2 ;
 int* VAR_3 ;
 int FUNC_4 (char*,int) ;
 size_t VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static void
FUNC_5(void)
{
    int VAR_6;
    int VAR_7;

    FUNC_1(VAR_1);

    FUNC_4("lhs", VAR_5[VAR_4]);

    VAR_7 = 10;
    for (VAR_6 = 3; VAR_6 < VAR_0; VAR_6++)
    {
 if (VAR_7 >= 10)
 {
     FUNC_3();
     VAR_7 = 1;
 }
 else
     ++VAR_7;

 FUNC_2(VAR_5[VAR_2[VAR_6]]);
    }
    FUNC_0();

    FUNC_4("len", 2);

    VAR_7 = 10;
    for (VAR_6 = 3; VAR_6 < VAR_0; VAR_6++)
    {
 if (VAR_7 >= 10)
 {
     FUNC_3();
     VAR_7 = 1;
 }
 else
     VAR_7++;

 FUNC_2(VAR_3[VAR_6 + 1] - VAR_3[VAR_6] - 1);
    }
    FUNC_0();
}
