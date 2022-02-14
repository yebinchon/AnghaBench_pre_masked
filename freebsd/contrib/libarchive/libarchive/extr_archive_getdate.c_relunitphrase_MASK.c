
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gdstate {int RelSeconds; int RelMonth; TYPE_1__* tokenp; int HaveRel; } ;
struct TYPE_2__ {char token; int value; } ;


 char VAR_0 ;
 char VAR_1 ;
 char VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct gdstate *VAR_3)
{
 if (VAR_3->tokenp[0].token == '-'
     && VAR_3->tokenp[1].token == VAR_2
     && VAR_3->tokenp[2].token == VAR_1) {

  VAR_3->HaveRel++;
  VAR_3->RelSeconds -= VAR_3->tokenp[1].value * VAR_3->tokenp[2].value;
  VAR_3->tokenp += 3;
  return 1;
 }
 if (VAR_3->tokenp[0].token == '+'
     && VAR_3->tokenp[1].token == VAR_2
     && VAR_3->tokenp[2].token == VAR_1) {

  VAR_3->HaveRel++;
  VAR_3->RelSeconds += VAR_3->tokenp[1].value * VAR_3->tokenp[2].value;
  VAR_3->tokenp += 3;
  return 1;
 }
 if (VAR_3->tokenp[0].token == VAR_2
     && VAR_3->tokenp[1].token == VAR_1) {

  VAR_3->HaveRel++;
  VAR_3->RelSeconds += VAR_3->tokenp[0].value * VAR_3->tokenp[1].value;
  VAR_3->tokenp += 2;
  return 1;
 }
 if (VAR_3->tokenp[0].token == '-'
     && VAR_3->tokenp[1].token == VAR_2
     && VAR_3->tokenp[2].token == VAR_0) {

  VAR_3->HaveRel++;
  VAR_3->RelMonth -= VAR_3->tokenp[1].value * VAR_3->tokenp[2].value;
  VAR_3->tokenp += 3;
  return 1;
 }
 if (VAR_3->tokenp[0].token == '+'
     && VAR_3->tokenp[1].token == VAR_2
     && VAR_3->tokenp[2].token == VAR_0) {

  VAR_3->HaveRel++;
  VAR_3->RelMonth += VAR_3->tokenp[1].value * VAR_3->tokenp[2].value;
  VAR_3->tokenp += 3;
  return 1;
 }
 if (VAR_3->tokenp[0].token == VAR_2
     && VAR_3->tokenp[1].token == VAR_0) {

  VAR_3->HaveRel++;
  VAR_3->RelMonth += VAR_3->tokenp[0].value * VAR_3->tokenp[1].value;
  VAR_3->tokenp += 2;
  return 1;
 }
 if (VAR_3->tokenp[0].token == VAR_1) {

  VAR_3->HaveRel++;
  VAR_3->RelSeconds += VAR_3->tokenp[0].value;
  VAR_3->tokenp += 1;
  return 1;
 }
 if (VAR_3->tokenp[0].token == VAR_0) {

  VAR_3->HaveRel++;
  VAR_3->RelMonth += VAR_3->tokenp[0].value;
  VAR_3->tokenp += 1;
  return 1;
 }
 return 0;
}
