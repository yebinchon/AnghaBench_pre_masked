
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct iter_hints_stub {int node; } ;
struct iter_hints {int tree; } ;
struct delegpt {int namelabs; int namelen; int name; } ;


 int FUNC_0 (struct iter_hints*,int ,struct delegpt*,int) ;
 int FUNC_1 (struct iter_hints_stub*) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;

int
FUNC_5(struct iter_hints* VAR_0, uint16_t VAR_1, struct delegpt* VAR_2,
 int VAR_3)
{
 struct iter_hints_stub *VAR_4;
 if((VAR_4=(struct iter_hints_stub*)FUNC_2(&VAR_0->tree,
  VAR_2->name, VAR_2->namelen, VAR_2->namelabs, VAR_1)) != ((void*)0)) {
  (void)FUNC_4(&VAR_0->tree, &VAR_4->node);
  FUNC_1(VAR_4);
 }
 if(!FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3))
  return 0;
 FUNC_3(&VAR_0->tree);
 return 1;
}
