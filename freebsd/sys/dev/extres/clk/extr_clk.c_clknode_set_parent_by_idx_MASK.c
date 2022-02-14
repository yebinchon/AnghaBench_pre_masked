
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct clknode {scalar_t__ parent_cnt; int parent_idx; int parent; } ;


 int FUNC_0 (struct clknode*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct clknode*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct clknode*,int ) ;

int
FUNC_5(struct clknode *VAR_0, int VAR_1)
{
 int VAR_2;
 uint64_t VAR_3;
 int VAR_4;


 FUNC_1();

 if (VAR_0->parent_cnt == 0)
  return (0);

 if (VAR_0->parent_idx == VAR_1)
  return (0);

 VAR_4 = VAR_0->parent_idx;
 FUNC_2(VAR_0, VAR_1);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 != 0) {
  FUNC_2(VAR_0, VAR_4);
  return (VAR_2);
 }
 VAR_2 = FUNC_3(VAR_0->parent, &VAR_3);
 if (VAR_2 != 0)
  return (VAR_2);
 VAR_2 = FUNC_4(VAR_0, VAR_3);
 return (VAR_2);
}
