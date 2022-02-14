
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct iter_hints_stub {int node; scalar_t__ noprime; struct delegpt* dp; } ;
struct iter_hints {int tree; } ;
struct delegpt {int name; int namelabs; int namelen; } ;


 int FUNC_0 (struct delegpt*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct iter_hints_stub*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int *,int *,int ,int ,int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct iter_hints* VAR_0, uint16_t VAR_1, struct delegpt* VAR_2,
 int VAR_3)
{
 struct iter_hints_stub* VAR_4 = (struct iter_hints_stub*)FUNC_4(
  sizeof(struct iter_hints_stub));
 if(!VAR_4) {
  FUNC_0(VAR_2);
  return 0;
 }
 VAR_4->dp = VAR_2;
 VAR_4->noprime = (uint8_t)VAR_3;
 if(!FUNC_5(&VAR_0->tree, &VAR_4->node, VAR_2->name, VAR_2->namelen,
  VAR_2->namelabs, VAR_1)) {
  char VAR_5[257];
  FUNC_1(VAR_2->name, VAR_5);
  FUNC_3("second hints for zone %s ignored.", VAR_5);
  FUNC_0(VAR_2);
  FUNC_2(VAR_4);
 }
 return 1;
}
