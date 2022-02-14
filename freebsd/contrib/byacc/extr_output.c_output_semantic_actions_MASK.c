
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
    int VAR_3, VAR_4;

    FUNC_2(VAR_1);
    if ((VAR_3 = FUNC_0(VAR_1)) == VAR_0)
 return;

    VAR_4 = VAR_3;
    FUNC_1(VAR_2, VAR_3);
    while ((VAR_3 = FUNC_0(VAR_1)) != VAR_0)
    {
 FUNC_1(VAR_2, VAR_3);
 VAR_4 = VAR_3;
    }

    if (VAR_4 != '\n')
    {
 FUNC_1(VAR_2, '\n');
    }

    FUNC_3(VAR_2);
}
