
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdstate {int Year; int Day; int Month; int Hour; int Minutes; TYPE_1__* tokenp; scalar_t__ Seconds; scalar_t__ HaveTime; int HaveDay; int HaveMonth; int HaveYear; int HaveRel; int RelMonth; int RelSeconds; } ;
struct TYPE_2__ {scalar_t__ token; int value; } ;


 scalar_t__ FUNC_0 (struct gdstate*) ;
 scalar_t__ FUNC_1 (struct gdstate*) ;
 scalar_t__ FUNC_2 (struct gdstate*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (struct gdstate*) ;
 scalar_t__ FUNC_4 (struct gdstate*) ;

__attribute__((used)) static int
FUNC_5(struct gdstate *VAR_2)
{
 if (FUNC_3(VAR_2))
  return 1;
 if (FUNC_4(VAR_2))
  return 1;
 if (FUNC_0(VAR_2))
  return 1;
 if (FUNC_1(VAR_2))
  return 1;
 if (FUNC_2(VAR_2)) {
  if (VAR_2->tokenp[0].token == VAR_0) {
   VAR_2->RelSeconds = -VAR_2->RelSeconds;
   VAR_2->RelMonth = -VAR_2->RelMonth;
   VAR_2->tokenp += 1;
  }
  return 1;
 }


 if (VAR_2->tokenp[0].token == VAR_1) {
  if (VAR_2->HaveTime && !VAR_2->HaveYear && !VAR_2->HaveRel) {
   VAR_2->HaveYear++;
   VAR_2->Year = VAR_2->tokenp[0].value;
   VAR_2->tokenp += 1;
   return 1;
  }

  if(VAR_2->tokenp[0].value > 10000) {

   VAR_2->HaveYear++;
   VAR_2->HaveMonth++;
   VAR_2->HaveDay++;
   VAR_2->Day= (VAR_2->tokenp[0].value)%100;
   VAR_2->Month= (VAR_2->tokenp[0].value/100)%100;
   VAR_2->Year = VAR_2->tokenp[0].value/10000;
   VAR_2->tokenp += 1;
   return 1;
  }

  if (VAR_2->tokenp[0].value < 24) {
   VAR_2->HaveTime++;
   VAR_2->Hour = VAR_2->tokenp[0].value;
   VAR_2->Minutes = 0;
   VAR_2->Seconds = 0;
   VAR_2->tokenp += 1;
   return 1;
  }

  if ((VAR_2->tokenp[0].value / 100 < 24)
      && (VAR_2->tokenp[0].value % 100 < 60)) {

   VAR_2->Hour = VAR_2->tokenp[0].value / 100;
   VAR_2->Minutes = VAR_2->tokenp[0].value % 100;
   VAR_2->Seconds = 0;
   VAR_2->tokenp += 1;
   return 1;
  }
 }

 return 0;
}
