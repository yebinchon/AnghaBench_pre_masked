
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auth_zone {int fallback_enabled; } ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*) ;

int
FUNC_2(struct auth_zone* VAR_0, char* VAR_1)
{
 if(FUNC_1(VAR_1, "yes") != 0 && FUNC_1(VAR_1, "no") != 0){
  FUNC_0("auth zone fallback, expected yes or no, got %s",
   VAR_1);
  return 0;
 }
 VAR_0->fallback_enabled = (FUNC_1(VAR_1, "yes")==0);
 return 1;
}
