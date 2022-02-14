
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,int ) ;

__attribute__((used)) static void
FUNC_6(void)
{
    int VAR_4, VAR_5;

    FUNC_5("sindex", VAR_1[0]);

    VAR_5 = 10;
    for (VAR_4 = 1; VAR_4 < VAR_2; VAR_4++)
    {
 if (VAR_5 >= 10)
 {
     FUNC_4();
     VAR_5 = 1;
 }
 else
     ++VAR_5;

 FUNC_2(VAR_1[VAR_4]);
    }

    FUNC_1();

    FUNC_5("rindex", VAR_1[VAR_2]);

    VAR_5 = 10;
    for (VAR_4 = VAR_2 + 1; VAR_4 < 2 * VAR_2; VAR_4++)
    {
 if (VAR_5 >= 10)
 {
     FUNC_4();
     VAR_5 = 1;
 }
 else
     ++VAR_5;

 FUNC_2(VAR_1[VAR_4]);
    }

    FUNC_1();
    FUNC_5("gindex", VAR_1[VAR_0 * VAR_2]);

    VAR_5 = 10;
    for (VAR_4 = VAR_0 * VAR_2 + 1; VAR_4 < VAR_3 - 1; VAR_4++)
    {
 if (VAR_5 >= 10)
 {
     FUNC_4();
     VAR_5 = 1;
 }
 else
     ++VAR_5;

 FUNC_2(VAR_1[VAR_4]);
    }

    FUNC_1();
    FUNC_0(VAR_1);
}
