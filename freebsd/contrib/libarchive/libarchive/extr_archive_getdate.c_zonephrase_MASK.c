
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdstate {TYPE_1__* tokenp; void* DSTmode; int Timezone; int HaveZone; } ;
struct TYPE_2__ {scalar_t__ token; int value; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_0(struct gdstate *VAR_5)
{
 if (VAR_5->tokenp[0].token == VAR_4
     && VAR_5->tokenp[1].token == VAR_3) {
  VAR_5->HaveZone++;
  VAR_5->Timezone = VAR_5->tokenp[0].value;
  VAR_5->DSTmode = VAR_1;
  VAR_5->tokenp += 1;
  return 1;
 }

 if (VAR_5->tokenp[0].token == VAR_4) {
  VAR_5->HaveZone++;
  VAR_5->Timezone = VAR_5->tokenp[0].value;
  VAR_5->DSTmode = VAR_0;
  VAR_5->tokenp += 1;
  return 1;
 }

 if (VAR_5->tokenp[0].token == VAR_2) {
  VAR_5->HaveZone++;
  VAR_5->Timezone = VAR_5->tokenp[0].value;
  VAR_5->DSTmode = VAR_1;
  VAR_5->tokenp += 1;
  return 1;
 }
 return 0;
}
