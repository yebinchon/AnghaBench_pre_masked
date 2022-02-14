
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 char* VAR_1 ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_2 ;
 int FUNC_2 (char*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* FUNC_3 (char*,char) ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_7 ;

void
FUNC_5(int VAR_8, char *VAR_9[])
{
 char *VAR_10;

 if (VAR_8 == 1) {
  VAR_3 = 0;
  FUNC_2("Nmap off.\n", VAR_7);
  VAR_2 = VAR_3;
  return;
 }
 if (VAR_8 == 0 ||
     (VAR_8 < 3 && !FUNC_1(&VAR_8, &VAR_9, "mapout")) || VAR_8 > 3) {
  FUNC_0("usage: %s [mapin mapout]\n", VAR_9[0]);
  VAR_2 = -1;
  return;
 }
 VAR_3 = 1;
 VAR_2 = 1;
 VAR_10 = FUNC_3(VAR_1, ' ');
 if (VAR_6) {
  while(*++VAR_10 == ' ')
   continue;
  VAR_1 = VAR_10;
  VAR_10 = FUNC_3(VAR_1, ' ');
 }
 *VAR_10 = '\0';
 (void)FUNC_4(VAR_4, VAR_1, VAR_0);
 while (*++VAR_10 == ' ')
  continue;
 (void)FUNC_4(VAR_5, VAR_10, VAR_0);
}
