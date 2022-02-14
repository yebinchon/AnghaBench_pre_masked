
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mac_start; char* mac_end; int mac_name; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int*,char***,char*) ;
 int VAR_1 ;
 int FUNC_2 (char*,int ) ;
 char FUNC_3 () ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_4 (int ,char*,int) ;
 int VAR_6 ;

void
FUNC_5(int VAR_7, char *VAR_8[])
{
 char *VAR_9;
 int VAR_10;

 if (VAR_7 == 0)
  goto usage;
 if (VAR_4 == 16) {
  FUNC_2("Limit of 16 macros have already been defined.\n",
      VAR_6);
  VAR_1 = -1;
  return;
 }
 if ((VAR_7 < 2 && !FUNC_1(&VAR_7, &VAR_8, "macro name")) || VAR_7 > 2) {
 usage:
  FUNC_0("usage: %s macro_name\n", VAR_8[0]);
  VAR_1 = -1;
  return;
 }
 if (VAR_2)
  FUNC_2(
  "Enter macro line by line, terminating it with a null line.\n",
      VAR_6);
 (void)FUNC_4(VAR_5[VAR_4].mac_name, VAR_8[1],
     sizeof(VAR_5[VAR_4].mac_name));
 if (VAR_4 == 0)
  VAR_5[VAR_4].mac_start = VAR_3;
 else
  VAR_5[VAR_4].mac_start = VAR_5[VAR_4 - 1].mac_end + 1;
 VAR_9 = VAR_5[VAR_4].mac_start;
 while (VAR_9 != VAR_3+4096) {
  if ((VAR_10 = FUNC_3()) == VAR_0) {
   FUNC_2("macdef: end of file encountered.\n", VAR_6);
   VAR_1 = -1;
   return;
  }
  if ((*VAR_9 = VAR_10) == '\n') {
   if (VAR_9 == VAR_5[VAR_4].mac_start) {
    VAR_5[VAR_4++].mac_end = VAR_9;
    VAR_1 = 0;
    return;
   }
   if (*(VAR_9-1) == '\0') {
    VAR_5[VAR_4++].mac_end = VAR_9 - 1;
    VAR_1 = 0;
    return;
   }
   *VAR_9 = '\0';
  }
  VAR_9++;
 }
 while (1) {
  while ((VAR_10 = FUNC_3()) != '\n' && VAR_10 != VAR_0)
             ;
  if (VAR_10 == VAR_0 || FUNC_3() == '\n') {
   FUNC_2("Macro not defined - 4K buffer exceeded.\n",
       VAR_6);
   VAR_1 = -1;
   return;
  }
 }
}
