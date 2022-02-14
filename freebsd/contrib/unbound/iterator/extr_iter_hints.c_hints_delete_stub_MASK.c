
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct iter_hints_stub {int node; } ;
struct iter_hints {int tree; } ;


 int FUNC_0 (int *,size_t*) ;
 int FUNC_1 (struct iter_hints_stub*) ;
 scalar_t__ FUNC_2 (int *,int *,size_t,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

void
FUNC_5(struct iter_hints* VAR_0, uint16_t VAR_1, uint8_t* VAR_2)
{
 struct iter_hints_stub *VAR_3;
 size_t VAR_4;
 int VAR_5 = FUNC_0(VAR_2, &VAR_4);
 if(!(VAR_3=(struct iter_hints_stub*)FUNC_2(&VAR_0->tree,
  VAR_2, VAR_4, VAR_5, VAR_1)))
  return;
 (void)FUNC_4(&VAR_0->tree, &VAR_3->node);
 FUNC_1(VAR_3);
 FUNC_3(&VAR_0->tree);
}
