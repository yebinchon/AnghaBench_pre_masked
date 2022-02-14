
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(void)
{
    if (VAR_0) {
 FUNC_0("Will send carriage returns as telnet <CR><LF>.\n");
    } else {
 FUNC_0("Will send carriage returns as telnet <CR><NUL>.\n");
    }
    return 1;
}
