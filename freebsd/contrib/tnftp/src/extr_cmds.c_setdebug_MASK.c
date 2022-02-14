
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,char*,...) ;
 int VAR_2 ;
 char* FUNC_2 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;

void
FUNC_5(int VAR_5, char *VAR_6[])
{
 if (VAR_5 == 0 || VAR_5 > 2) {
  FUNC_0("usage: %s [ on | off | debuglevel ]\n", VAR_6[0]);
  VAR_1 = -1;
  return;
 } else if (VAR_5 == 2) {
  if (FUNC_3(VAR_6[1], "on") == 0)
   VAR_2 = 1;
  else if (FUNC_3(VAR_6[1], "off") == 0)
   VAR_2 = 0;
  else {
   int VAR_7;

   VAR_7 = FUNC_4(VAR_6[1]);
   if (VAR_7 < 0) {
    FUNC_1(VAR_4, "%s: bad debugging value.\n",
        VAR_6[1]);
    VAR_1 = -1;
    return;
   }
   VAR_2 = VAR_7;
  }
 } else
  VAR_2 = !VAR_2;
 if (VAR_2)
  VAR_3 |= VAR_0;
 else
  VAR_3 &= ~VAR_0;
 FUNC_1(VAR_4, "Debugging %s (ftp_debug=%d).\n", FUNC_2(VAR_2), VAR_2);
 VAR_1 = VAR_2 > 0;
}
