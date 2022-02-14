
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct iter_forwards {int tree; } ;
struct iter_forward_zone {int node; } ;


 int FUNC_0 (struct iter_forwards*) ;
 struct iter_forward_zone* FUNC_1 (struct iter_forwards*,int ,int *) ;
 int FUNC_2 (struct iter_forward_zone*) ;
 int FUNC_3 (int ,int *) ;

void
FUNC_4(struct iter_forwards* VAR_0, uint16_t VAR_1, uint8_t* VAR_2)
{
 struct iter_forward_zone *VAR_3;
 if(!(VAR_3=FUNC_1(VAR_0, VAR_1, VAR_2)))
  return;
 (void)FUNC_3(VAR_0->tree, &VAR_3->node);
 FUNC_2(VAR_3);
 FUNC_0(VAR_0);
}
