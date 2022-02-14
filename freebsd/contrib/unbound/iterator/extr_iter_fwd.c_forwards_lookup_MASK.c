
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct iter_forwards {int tree; } ;
struct TYPE_2__ {struct iter_forward_zone* key; } ;
struct iter_forward_zone {scalar_t__ dclass; int namelabs; struct delegpt* dp; struct iter_forward_zone* parent; int * name; int namelen; TYPE_1__ node; } ;
struct delegpt {int dummy; } ;
typedef int rbnode_type ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int *,int,int*) ;
 scalar_t__ FUNC_2 (int ,struct iter_forward_zone*,int **) ;

struct delegpt*
FUNC_3(struct iter_forwards* VAR_0, uint8_t* VAR_1, uint16_t VAR_2)
{

 rbnode_type* VAR_3 = ((void*)0);
 struct iter_forward_zone *VAR_4;
 struct iter_forward_zone VAR_5;
 VAR_5.node.key = &VAR_5;
 VAR_5.dclass = VAR_2;
 VAR_5.name = VAR_1;
 VAR_5.namelabs = FUNC_0(VAR_1, &VAR_5.namelen);
 if(FUNC_2(VAR_0->tree, &VAR_5, &VAR_3)) {

  VAR_4 = (struct iter_forward_zone*)VAR_3;
 } else {

  int VAR_6;
  VAR_4 = (struct iter_forward_zone*)VAR_3;
  if(!VAR_4 || VAR_4->dclass != VAR_2)
   return ((void*)0);

  (void)FUNC_1(VAR_4->name, VAR_4->namelabs, VAR_5.name,
   VAR_5.namelabs, &VAR_6);
  while(VAR_4) {
   if(VAR_4->namelabs <= VAR_6)
    break;
   VAR_4 = VAR_4->parent;
  }
 }
 if(VAR_4)
  return VAR_4->dp;
 return ((void*)0);
}
