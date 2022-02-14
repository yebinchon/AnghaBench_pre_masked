
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdstate {int DayOrdinal; int DayNumber; TYPE_1__* tokenp; int HaveWeekDay; } ;
struct TYPE_2__ {char token; int value; } ;


 char VAR_0 ;
 char VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct gdstate *VAR_2)
{
 if (VAR_2->tokenp[0].token == VAR_0) {

  VAR_2->HaveWeekDay++;
  VAR_2->DayOrdinal = 1;
  VAR_2->DayNumber = VAR_2->tokenp[0].value;
  VAR_2->tokenp += 1;
  if (VAR_2->tokenp[0].token == ',')
   VAR_2->tokenp += 1;
  return 1;
 }
 if (VAR_2->tokenp[0].token == VAR_1
  && VAR_2->tokenp[1].token == VAR_0) {

  VAR_2->HaveWeekDay++;
  VAR_2->DayOrdinal = VAR_2->tokenp[0].value;
  VAR_2->DayNumber = VAR_2->tokenp[1].value;
  VAR_2->tokenp += 2;
  return 1;
 }
 return 0;
}
