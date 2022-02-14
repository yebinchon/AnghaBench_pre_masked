
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdstate {int Hour; int Minutes; int Seconds; int Timezone; TYPE_1__* tokenp; void* DSTmode; int HaveZone; int HaveTime; } ;
struct TYPE_2__ {char token; int value; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char VAR_3 ;
 int VAR_4 ;
 char VAR_5 ;

__attribute__((used)) static int
FUNC_0(struct gdstate *VAR_6)
{
 if (VAR_6->tokenp[0].token == VAR_5
     && VAR_6->tokenp[1].token == ':'
     && VAR_6->tokenp[2].token == VAR_5
     && VAR_6->tokenp[3].token == ':'
     && VAR_6->tokenp[4].token == VAR_5) {

  ++VAR_6->HaveTime;
  VAR_6->Hour = VAR_6->tokenp[0].value;
  VAR_6->Minutes = VAR_6->tokenp[2].value;
  VAR_6->Seconds = VAR_6->tokenp[4].value;
  VAR_6->tokenp += 5;
 }
 else if (VAR_6->tokenp[0].token == VAR_5
     && VAR_6->tokenp[1].token == ':'
     && VAR_6->tokenp[2].token == VAR_5) {

  ++VAR_6->HaveTime;
  VAR_6->Hour = VAR_6->tokenp[0].value;
  VAR_6->Minutes = VAR_6->tokenp[2].value;
  VAR_6->Seconds = 0;
  VAR_6->tokenp += 3;
 }
 else if (VAR_6->tokenp[0].token == VAR_5
     && VAR_6->tokenp[1].token == VAR_3) {

  ++VAR_6->HaveTime;
  VAR_6->Hour = VAR_6->tokenp[0].value;
  VAR_6->Minutes = VAR_6->Seconds = 0;

  VAR_6->tokenp += 1;
 } else {

  return 0;
 }

 if (VAR_6->tokenp[0].token == VAR_3) {

  if (VAR_6->Hour == 12)
   VAR_6->Hour = 0;
  if (VAR_6->tokenp[0].value == VAR_4)
   VAR_6->Hour += 12;
  VAR_6->tokenp += 1;
 }
 if (VAR_6->tokenp[0].token == '+'
     && VAR_6->tokenp[1].token == VAR_5) {

  VAR_6->HaveZone++;
  VAR_6->DSTmode = VAR_0;
  VAR_6->Timezone = - ((VAR_6->tokenp[1].value / 100) * VAR_1
      + (VAR_6->tokenp[1].value % 100) * VAR_2);
  VAR_6->tokenp += 2;
 }
 if (VAR_6->tokenp[0].token == '-'
     && VAR_6->tokenp[1].token == VAR_5) {

  VAR_6->HaveZone++;
  VAR_6->DSTmode = VAR_0;
  VAR_6->Timezone = + ((VAR_6->tokenp[1].value / 100) * VAR_1
      + (VAR_6->tokenp[1].value % 100) * VAR_2);
  VAR_6->tokenp += 2;
 }
 return 1;
}
