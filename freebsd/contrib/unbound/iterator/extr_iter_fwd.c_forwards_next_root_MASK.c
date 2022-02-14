
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct iter_forwards {int tree; } ;
struct TYPE_2__ {struct iter_forward_zone* key; } ;
struct iter_forward_zone {scalar_t__ dclass; int namelen; int * name; scalar_t__ namelabs; TYPE_1__ node; } ;
typedef int rbnode_type ;


 int * VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,struct iter_forward_zone*,int **) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;

int
FUNC_4(struct iter_forwards* VAR_1, uint16_t* VAR_2)
{
 struct iter_forward_zone VAR_3;
 rbnode_type* VAR_4;
 struct iter_forward_zone* VAR_5;
 if(*VAR_2 == 0) {

  VAR_4 = FUNC_2(VAR_1->tree);
  if(VAR_4 == VAR_0)
   return 0;
  VAR_5 = (struct iter_forward_zone*)VAR_4;
  if(FUNC_0(VAR_5->name)) {
   *VAR_2 = VAR_5->dclass;
   return 1;
  }

  *VAR_2 = VAR_5->dclass + 1;
  return FUNC_4(VAR_1, VAR_2);
 }



 VAR_3.node.key = &VAR_3;
 VAR_3.name = (uint8_t*)"\000";
 VAR_3.namelen = 1;
 VAR_3.namelabs = 0;
 VAR_3.dclass = *VAR_2;
 VAR_4 = ((void*)0);
 if(FUNC_1(VAR_1->tree, &VAR_3, &VAR_4)) {

  return 1;
 } else {

  if(!VAR_4 || VAR_4 == VAR_0)
   return 0;
  VAR_4 = FUNC_3(VAR_4);
  if(VAR_4 == VAR_0)
   return 0;
  VAR_5 = (struct iter_forward_zone*)VAR_4;
  if(FUNC_0(VAR_5->name)) {
   *VAR_2 = VAR_5->dclass;
   return 1;
  }

  *VAR_2 = VAR_5->dclass+1;
  return FUNC_4(VAR_1, VAR_2);
 }
}
