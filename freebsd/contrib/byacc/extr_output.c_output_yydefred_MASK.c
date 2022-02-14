
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__* VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void)
{
    int VAR_2, VAR_3;

    FUNC_3("defred", (VAR_0[0] ? VAR_0[0] - 2 : 0));

    VAR_3 = 10;
    for (VAR_2 = 1; VAR_2 < VAR_1; VAR_2++)
    {
 if (VAR_3 < 10)
     ++VAR_3;
 else
 {
     FUNC_2();
     VAR_3 = 1;
 }

 FUNC_1((VAR_0[VAR_2] ? VAR_0[VAR_2] - 2 : 0));
    }

    FUNC_0();
}
