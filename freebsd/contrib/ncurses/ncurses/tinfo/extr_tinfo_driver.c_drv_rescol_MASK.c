
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TERMINAL_CONTROL_BLOCK ;
typedef int SCREEN ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static bool
FUNC_3(TERMINAL_CONTROL_BLOCK * VAR_3)
{
    bool VAR_4 = VAR_0;
    SCREEN *VAR_5;

    FUNC_0();
    FUNC_2();

    if (VAR_2 != 0) {
 FUNC_1("orig_pair", VAR_2);
 VAR_4 = VAR_1;
    }
    return VAR_4;
}
