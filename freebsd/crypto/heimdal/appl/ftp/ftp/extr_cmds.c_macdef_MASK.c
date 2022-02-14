
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* mac_start; char* mac_end; int mac_name; } ;


 int VAR_0 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_1 ;
 char FUNC_1 () ;
 scalar_t__ VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ,char*,int) ;

void
FUNC_4(int VAR_6, char **VAR_7)
{
 char *VAR_8;
 int VAR_9;

 if (VAR_4 == 16) {
  FUNC_2("Limit of 16 macros have already been defined\n");
  VAR_1 = -1;
  return;
 }
 if (VAR_6 < 2 && !FUNC_0(&VAR_6, &VAR_7, "macro name")) {
  FUNC_2("Usage: %s macro_name\n",VAR_7[0]);
  VAR_1 = -1;
  return;
 }
 if (VAR_2) {
  FUNC_2("Enter macro line by line, terminating it with a null line\n");
 }
 FUNC_3(VAR_5[VAR_4].mac_name,
   VAR_7[1],
   sizeof(VAR_5[VAR_4].mac_name));
 if (VAR_4 == 0) {
  VAR_5[VAR_4].mac_start = VAR_3;
 }
 else {
  VAR_5[VAR_4].mac_start = VAR_5[VAR_4 - 1].mac_end + 1;
 }
 VAR_8 = VAR_5[VAR_4].mac_start;
 while (VAR_8 != VAR_3+4096) {
  if ((VAR_9 = FUNC_1()) == VAR_0) {
   FUNC_2("macdef:end of file encountered\n");
   VAR_1 = -1;
   return;
  }
  if ((*VAR_8 = VAR_9) == '\n') {
   if (VAR_8 == VAR_5[VAR_4].mac_start) {
    VAR_5[VAR_4++].mac_end = VAR_8;
    VAR_1 = 0;
    return;
   }
   if (*(VAR_8-1) == '\0') {
    VAR_5[VAR_4++].mac_end = VAR_8 - 1;
    VAR_1 = 0;
    return;
   }
   *VAR_8 = '\0';
  }
  VAR_8++;
 }
 while (1) {
  while ((VAR_9 = FUNC_1()) != '\n' && VAR_9 != VAR_0)
             ;
  if (VAR_9 == VAR_0 || FUNC_1() == '\n') {
   FUNC_2("Macro not defined - 4k buffer exceeded\n");
   VAR_1 = -1;
   return;
  }
 }
}
