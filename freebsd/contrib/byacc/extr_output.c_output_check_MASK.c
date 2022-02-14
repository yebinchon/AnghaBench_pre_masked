
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
    int VAR_2;
    int VAR_3;

    FUNC_4("check", VAR_0[0]);

    VAR_3 = 10;
    for (VAR_2 = 1; VAR_2 <= VAR_1; VAR_2++)
    {
 if (VAR_3 >= 10)
 {
     FUNC_3();
     VAR_3 = 1;
 }
 else
     ++VAR_3;

 FUNC_2(VAR_0[VAR_2]);
    }

    FUNC_1();
    FUNC_0(VAR_0);
}
