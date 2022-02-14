
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (char*) ;
 char* VAR_1 ;

__attribute__((used)) static void FUNC_3(char *VAR_2, bool VAR_3)
{

 VAR_2[0] = '9';
 VAR_2[1] = '7';


 if (FUNC_1()) {

  if (VAR_3) {
   FUNC_0("Restoring regulatory settings including user preference\n");
   VAR_1[0] = '9';
   VAR_1[1] = '7';






   if (!FUNC_2(VAR_0)) {
    FUNC_0("Keeping preference on module parameter ieee80211_regdom: %c%c\n",
           VAR_0[0], VAR_0[1]);
    VAR_2[0] = VAR_0[0];
    VAR_2[1] = VAR_0[1];
   }
  } else {
   FUNC_0("Restoring regulatory settings while preserving user preference for: %c%c\n",
          VAR_1[0], VAR_1[1]);
   VAR_2[0] = VAR_1[0];
   VAR_2[1] = VAR_1[1];
  }
 } else if (!FUNC_2(VAR_0)) {
  FUNC_0("Keeping preference on module parameter ieee80211_regdom: %c%c\n",
         VAR_0[0], VAR_0[1]);
  VAR_2[0] = VAR_0[0];
  VAR_2[1] = VAR_0[1];
 } else
  FUNC_0("Restoring regulatory settings\n");
}
