
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdstate {int Year; int Month; int Day; TYPE_1__* tokenp; int HaveDay; int HaveMonth; int HaveYear; } ;
struct TYPE_2__ {char token; int value; } ;


 char VAR_0 ;
 char VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct gdstate *VAR_2)
{
 if (VAR_2->tokenp[0].token == VAR_1
     && VAR_2->tokenp[1].token == '/'
     && VAR_2->tokenp[2].token == VAR_1
     && VAR_2->tokenp[3].token == '/'
     && VAR_2->tokenp[4].token == VAR_1) {
  VAR_2->HaveYear++;
  VAR_2->HaveMonth++;
  VAR_2->HaveDay++;
  if (VAR_2->tokenp[0].value >= 13) {

   VAR_2->Year = VAR_2->tokenp[0].value;
   VAR_2->Month = VAR_2->tokenp[2].value;
   VAR_2->Day = VAR_2->tokenp[4].value;
  } else if ((VAR_2->tokenp[4].value >= 13)
      || (VAR_2->tokenp[2].value >= 13)) {


   VAR_2->Month = VAR_2->tokenp[0].value;
   VAR_2->Day = VAR_2->tokenp[2].value;
   VAR_2->Year = VAR_2->tokenp[4].value;
  } else {

   VAR_2->Month = VAR_2->tokenp[0].value;
   VAR_2->Day = VAR_2->tokenp[2].value;
   VAR_2->Year = VAR_2->tokenp[4].value;
  }
  VAR_2->tokenp += 5;
  return 1;
 }

 if (VAR_2->tokenp[0].token == VAR_1
     && VAR_2->tokenp[1].token == '/'
     && VAR_2->tokenp[2].token == VAR_1) {

  VAR_2->HaveMonth++;
  VAR_2->HaveDay++;
  VAR_2->Month = VAR_2->tokenp[0].value;
  VAR_2->Day = VAR_2->tokenp[2].value;
  VAR_2->tokenp += 3;
  return 1;
 }

 if (VAR_2->tokenp[0].token == VAR_1
     && VAR_2->tokenp[1].token == '-'
     && VAR_2->tokenp[2].token == VAR_1
     && VAR_2->tokenp[3].token == '-'
     && VAR_2->tokenp[4].token == VAR_1) {

  VAR_2->HaveYear++;
  VAR_2->HaveMonth++;
  VAR_2->HaveDay++;
  VAR_2->Year = VAR_2->tokenp[0].value;
  VAR_2->Month = VAR_2->tokenp[2].value;
  VAR_2->Day = VAR_2->tokenp[4].value;
  VAR_2->tokenp += 5;
  return 1;
 }

 if (VAR_2->tokenp[0].token == VAR_1
     && VAR_2->tokenp[1].token == '-'
     && VAR_2->tokenp[2].token == VAR_0
     && VAR_2->tokenp[3].token == '-'
     && VAR_2->tokenp[4].token == VAR_1) {
  VAR_2->HaveYear++;
  VAR_2->HaveMonth++;
  VAR_2->HaveDay++;
  if (VAR_2->tokenp[0].value > 31) {

   VAR_2->Year = VAR_2->tokenp[0].value;
   VAR_2->Month = VAR_2->tokenp[2].value;
   VAR_2->Day = VAR_2->tokenp[4].value;
  } else {

   VAR_2->Day = VAR_2->tokenp[0].value;
   VAR_2->Month = VAR_2->tokenp[2].value;
   VAR_2->Year = VAR_2->tokenp[4].value;
  }
  VAR_2->tokenp += 5;
  return 1;
 }

 if (VAR_2->tokenp[0].token == VAR_0
     && VAR_2->tokenp[1].token == VAR_1
     && VAR_2->tokenp[2].token == ','
     && VAR_2->tokenp[3].token == VAR_1) {

  VAR_2->HaveYear++;
  VAR_2->HaveMonth++;
  VAR_2->HaveDay++;
  VAR_2->Month = VAR_2->tokenp[0].value;
  VAR_2->Day = VAR_2->tokenp[1].value;
  VAR_2->Year = VAR_2->tokenp[3].value;
  VAR_2->tokenp += 4;
  return 1;
 }

 if (VAR_2->tokenp[0].token == VAR_0
     && VAR_2->tokenp[1].token == VAR_1) {

  VAR_2->HaveMonth++;
  VAR_2->HaveDay++;
  VAR_2->Month = VAR_2->tokenp[0].value;
  VAR_2->Day = VAR_2->tokenp[1].value;
  VAR_2->tokenp += 2;
  return 1;
 }

 if (VAR_2->tokenp[0].token == VAR_1
     && VAR_2->tokenp[1].token == VAR_0
     && VAR_2->tokenp[2].token == VAR_1) {

  VAR_2->HaveYear++;
  VAR_2->HaveMonth++;
  VAR_2->HaveDay++;
  VAR_2->Day = VAR_2->tokenp[0].value;
  VAR_2->Month = VAR_2->tokenp[1].value;
  VAR_2->Year = VAR_2->tokenp[2].value;
  VAR_2->tokenp += 3;
  return 1;
 }

 if (VAR_2->tokenp[0].token == VAR_1
     && VAR_2->tokenp[1].token == VAR_0) {

  VAR_2->HaveMonth++;
  VAR_2->HaveDay++;
  VAR_2->Day = VAR_2->tokenp[0].value;
  VAR_2->Month = VAR_2->tokenp[1].value;
  VAR_2->tokenp += 2;
  return 1;
 }

 return 0;
}
