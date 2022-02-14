
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (int *) ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(void)
{
    int VAR_6, VAR_7;
    FILE *VAR_8;

    if (VAR_4 == 0)
 return;

    VAR_8 = VAR_3;
    VAR_6 = *VAR_2;
    if (VAR_6 == '\n')
    {
 ++VAR_5;
 if ((VAR_6 = FUNC_0(VAR_8)) == VAR_0)
     return;
 FUNC_3();
 FUNC_1(VAR_1, VAR_6);
 VAR_7 = VAR_6;
    }
    else
    {
 FUNC_3();
 do
 {
     FUNC_1(VAR_1, VAR_6);
 }
 while ((VAR_6 = *++VAR_2) != '\n');
 FUNC_1(VAR_1, VAR_6);
 VAR_7 = '\n';
    }

    while ((VAR_6 = FUNC_0(VAR_8)) != VAR_0)
    {
 FUNC_1(VAR_1, VAR_6);
 VAR_7 = VAR_6;
    }

    if (VAR_7 != '\n')
    {
 FUNC_1(VAR_1, '\n');
    }
    FUNC_2(VAR_1);
}
