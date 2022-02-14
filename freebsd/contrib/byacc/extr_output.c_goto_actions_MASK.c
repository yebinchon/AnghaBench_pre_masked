
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (char*,int) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(void)
{
    int VAR_5, VAR_6, VAR_7;

    VAR_4 = FUNC_1(VAR_1, VAR_0);

    VAR_7 = FUNC_2(VAR_3 + 1);
    FUNC_7("dgoto", VAR_7);
    FUNC_6(VAR_3 + 1, VAR_7);

    VAR_6 = 10;
    for (VAR_5 = VAR_3 + 2; VAR_5 < VAR_2; VAR_5++)
    {
 if (VAR_6 >= 10)
 {
     FUNC_5();
     VAR_6 = 1;
 }
 else
     ++VAR_6;

 VAR_7 = FUNC_2(VAR_5);
 FUNC_4(VAR_7);
 FUNC_6(VAR_5, VAR_7);
    }

    FUNC_3();
    FUNC_0(VAR_4);
}
