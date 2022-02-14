
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (char*) ;

void
FUNC_3(char *VAR_3)
{
 if (VAR_2 != VAR_0) {
  VAR_2 = (VAR_3 && *VAR_3) ? FUNC_2(VAR_3) : VAR_0;
  FUNC_1("Telnet rlogin escape character is '%s'.\r\n",
     FUNC_0(VAR_2));
 } else {
  VAR_1 = (VAR_3 && *VAR_3) ? FUNC_2(VAR_3) : VAR_0;
  FUNC_1("Telnet escape character is '%s'.\r\n", FUNC_0(VAR_1));
 }
}
