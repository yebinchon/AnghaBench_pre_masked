
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,char*,int,char const*,int ) ;

void
FUNC_2(netdissect_options *VAR_0, const u_char *VAR_1, u_int VAR_2)
{

 if (FUNC_1(VAR_0, "MSG", 4, (const char *)VAR_1, VAR_2))
  FUNC_0((VAR_0, " BEEP MSG"));
 else if (FUNC_1(VAR_0, "RPY ", 4, (const char *)VAR_1, VAR_2))
  FUNC_0((VAR_0, " BEEP RPY"));
 else if (FUNC_1(VAR_0, "ERR ", 4, (const char *)VAR_1, VAR_2))
  FUNC_0((VAR_0, " BEEP ERR"));
 else if (FUNC_1(VAR_0, "ANS ", 4, (const char *)VAR_1, VAR_2))
  FUNC_0((VAR_0, " BEEP ANS"));
 else if (FUNC_1(VAR_0, "NUL ", 4, (const char *)VAR_1, VAR_2))
  FUNC_0((VAR_0, " BEEP NUL"));
 else if (FUNC_1(VAR_0, "SEQ ", 4, (const char *)VAR_1, VAR_2))
  FUNC_0((VAR_0, " BEEP SEQ"));
 else if (FUNC_1(VAR_0, "END", 4, (const char *)VAR_1, VAR_2))
  FUNC_0((VAR_0, " BEEP END"));
 else
  FUNC_0((VAR_0, " BEEP (payload or undecoded)"));
}
