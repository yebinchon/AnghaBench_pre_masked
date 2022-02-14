
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct clknode {int parent_cnt; int parent_idx; struct clknode* parent; int ** parent_names; } ;


 int FUNC_0 (struct clknode*,int) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (struct clknode*,int) ;
 int FUNC_4 (struct clknode*,int *) ;
 int FUNC_5 (struct clknode*,int ) ;
 scalar_t__ FUNC_6 (int *,char const*) ;

int
FUNC_7(struct clknode *VAR_1, const char *VAR_2)
{
 int VAR_3;
 uint64_t VAR_4;
 int VAR_5, VAR_6;


 FUNC_2();

 if (VAR_1->parent_cnt == 0)
  return (0);







 if (VAR_1->parent_cnt == 1) {
  VAR_3 = FUNC_7(VAR_1->parent, VAR_2);
  return (VAR_3);
 }

 for (VAR_6 = 0; VAR_6 < VAR_1->parent_cnt; VAR_6++) {
  if (VAR_1->parent_names[VAR_6] == ((void*)0))
   continue;
  if (FUNC_6(VAR_1->parent_names[VAR_6], VAR_2) == 0)
   break;
 }
 if (VAR_6 >= VAR_1->parent_cnt) {
  return (VAR_0);
 }
 if (VAR_1->parent_idx == VAR_6)
  return (0);

 VAR_5 = VAR_1->parent_idx;
 FUNC_3(VAR_1, VAR_6);
 VAR_3 = FUNC_0(VAR_1, VAR_6);
 if (VAR_3 != 0) {
  FUNC_3(VAR_1, VAR_5);
  FUNC_1(VAR_1);
  return (VAR_3);
 }
 VAR_3 = FUNC_4(VAR_1->parent, &VAR_4);
 if (VAR_3 != 0)
  return (VAR_3);
 VAR_3 = FUNC_5(VAR_1, VAR_4);
 return (VAR_3);
}
