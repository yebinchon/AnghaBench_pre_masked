
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (char*,char*,...) ;

void
FUNC_3(int VAR_4, char **VAR_5)
{
 int VAR_6;

 if (VAR_4 > 1) {
  VAR_6 = FUNC_0(VAR_5[1]);
  if (VAR_6 < 0) {
   FUNC_2("%s: bad debugging value.\n", VAR_5[1]);
   VAR_1 = -1;
   return;
  }
 } else
  VAR_6 = !VAR_2;
 VAR_2 = VAR_6;
 if (VAR_2)
  VAR_3 |= VAR_0;
 else
  VAR_3 &= ~VAR_0;
 FUNC_2("Debugging %s (debug=%d).\n", FUNC_1(VAR_2), VAR_2);
 VAR_1 = VAR_2 > 0;
}
