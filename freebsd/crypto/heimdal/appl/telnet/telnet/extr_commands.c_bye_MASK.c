
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (char*,char*) ;
 int FUNC_6 () ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_7(int VAR_4, char **VAR_5)
{
    if (VAR_0) {
 FUNC_4(VAR_1, 2);
 FUNC_3("Connection closed.\r\n");
 FUNC_0(VAR_1);
 VAR_0 = 0;
 VAR_2 = 1;




 FUNC_6();
    }
    if ((VAR_4 != 2) || (FUNC_5(VAR_5[1], "fromquit") != 0))
 FUNC_2(VAR_3, 1);
    return 0;
}
