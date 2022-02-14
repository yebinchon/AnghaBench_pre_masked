
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(void)
{
    VAR_0 = !VAR_0;
    FUNC_1("Deprecated usage - please use 'toggle crmod' in the future.\n");
    FUNC_1("%s map carriage return on output.\n", VAR_0 ? "Will" : "Won't");
    (void) FUNC_0(VAR_1);
    return 1;
}
