
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct iter_forwards {int tree; } ;
struct TYPE_2__ {struct iter_forward_zone* key; } ;
struct iter_forward_zone {size_t namelen; int namelabs; struct iter_forward_zone* name; TYPE_1__ node; struct delegpt* dp; int dclass; } ;
struct delegpt {int dummy; } ;


 int FUNC_0 (struct delegpt*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iter_forward_zone*) ;
 int FUNC_3 (char*,char*) ;
 scalar_t__ FUNC_4 (int) ;
 struct iter_forward_zone* FUNC_5 (int *,size_t) ;
 int FUNC_6 (int ,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(struct iter_forwards* VAR_0, uint16_t VAR_1, uint8_t* VAR_2,
 size_t VAR_3, int VAR_4, struct delegpt* VAR_5)
{
 struct iter_forward_zone* VAR_6 = (struct iter_forward_zone*)FUNC_4(
  sizeof(struct iter_forward_zone));
 if(!VAR_6) {
  FUNC_0(VAR_5);
  return 0;
 }
 VAR_6->node.key = VAR_6;
 VAR_6->dclass = VAR_1;
 VAR_6->name = FUNC_5(VAR_2, VAR_3);
 if(!VAR_6->name) {
  FUNC_0(VAR_5);
  FUNC_2(VAR_6);
  return 0;
 }
 VAR_6->namelen = VAR_3;
 VAR_6->namelabs = VAR_4;
 VAR_6->dp = VAR_5;
 if(!FUNC_6(VAR_0->tree, &VAR_6->node)) {
  char VAR_7[257];
  FUNC_1(VAR_2, VAR_7);
  FUNC_3("duplicate forward zone %s ignored.", VAR_7);
  FUNC_0(VAR_5);
  FUNC_2(VAR_6->name);
  FUNC_2(VAR_6);
 }
 return 1;
}
