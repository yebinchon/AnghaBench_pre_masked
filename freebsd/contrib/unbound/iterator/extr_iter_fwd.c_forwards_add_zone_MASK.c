
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iter_forwards {int tree; } ;
struct iter_forward_zone {int node; } ;
struct delegpt {int name; } ;


 int FUNC_0 (struct iter_forwards*,int ,struct delegpt*) ;
 int FUNC_1 (struct iter_forwards*) ;
 struct iter_forward_zone* FUNC_2 (struct iter_forwards*,int ,int ) ;
 int FUNC_3 (struct iter_forward_zone*) ;
 int FUNC_4 (int ,int *) ;

int
FUNC_5(struct iter_forwards* VAR_0, uint16_t VAR_1, struct delegpt* VAR_2)
{
 struct iter_forward_zone *VAR_3;
 if((VAR_3=FUNC_2(VAR_0, VAR_1, VAR_2->name)) != ((void*)0)) {
  (void)FUNC_4(VAR_0->tree, &VAR_3->node);
  FUNC_3(VAR_3);
 }
 if(!FUNC_0(VAR_0, VAR_1, VAR_2))
  return 0;
 FUNC_1(VAR_0);
 return 1;
}
