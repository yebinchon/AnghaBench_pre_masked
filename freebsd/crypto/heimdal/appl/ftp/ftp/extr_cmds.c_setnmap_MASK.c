
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_6 ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (int ,char*,int ) ;

void
FUNC_4(int VAR_7, char **VAR_8)
{
 char *VAR_9;

 if (VAR_7 == 1) {
  VAR_3 = 0;
  FUNC_1("Nmap off.\n");
  VAR_2 = VAR_3;
  return;
 }
 if (VAR_7 < 3 && !FUNC_0(&VAR_7, &VAR_8, "mapout")) {
  FUNC_1("Usage: %s [mapin mapout]\n",VAR_8[0]);
  VAR_2 = -1;
  return;
 }
 VAR_3 = 1;
 VAR_2 = 1;
 VAR_9 = FUNC_2(VAR_1, ' ');
 if (VAR_9 == ((void*)0)) {
  FUNC_1("Usage: %s missing space\n",VAR_8[0]);
  VAR_2 = -1;
  return;
 }
 if (VAR_6) {
  while(*++VAR_9 == ' ')
   continue;
  VAR_1 = VAR_9;
  VAR_9 = FUNC_2(VAR_1, ' ');
 }
 *VAR_9 = '\0';
 FUNC_3(VAR_4, VAR_1, VAR_0);
 while (*++VAR_9 == ' ')
  continue;
 FUNC_3(VAR_5, VAR_9, VAR_0);
}
