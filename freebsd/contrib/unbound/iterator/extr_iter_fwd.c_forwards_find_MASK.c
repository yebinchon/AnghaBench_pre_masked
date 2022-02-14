
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct iter_forwards {int tree; } ;
struct TYPE_2__ {struct iter_forward_zone* key; } ;
struct iter_forward_zone {struct delegpt* dp; int namelen; int namelabs; int * name; int dclass; TYPE_1__ node; } ;
struct delegpt {int dummy; } ;
typedef int rbnode_type ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int ,struct iter_forward_zone*) ;

struct delegpt*
FUNC_2(struct iter_forwards* VAR_0, uint8_t* VAR_1, uint16_t VAR_2)
{
 rbnode_type* VAR_3 = ((void*)0);
 struct iter_forward_zone VAR_4;
 VAR_4.node.key = &VAR_4;
 VAR_4.dclass = VAR_2;
 VAR_4.name = VAR_1;
 VAR_4.namelabs = FUNC_0(VAR_1, &VAR_4.namelen);
 VAR_3 = FUNC_1(VAR_0->tree, &VAR_4);
 if(VAR_3) return ((struct iter_forward_zone*)VAR_3)->dp;
 return ((void*)0);
}
