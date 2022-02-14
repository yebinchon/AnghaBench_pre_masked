
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct clknode {scalar_t__ parent_cnt; char* name; int freq; struct clknode* parent; } ;


 int FUNC_0 (struct clknode*,int *) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 (struct clknode*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;

int
FUNC_5(struct clknode *VAR_0, uint64_t *VAR_1)
{
 int VAR_2;

 FUNC_3();


 *VAR_1 = VAR_0->freq;
 if (*VAR_1 != 0)
  return (0);


 if (VAR_0->parent_cnt > 0) {
  VAR_2 = FUNC_5(VAR_0->parent, VAR_1);
  if (VAR_2 != 0) {
   return (VAR_2);
  }
 }


 FUNC_2(VAR_0);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 != 0) {
  FUNC_1(VAR_0);
  FUNC_4("Cannot get frequency for clk: %s, error: %d\n",
      VAR_0->name, VAR_2);
  return (VAR_2);
 }


 VAR_0->freq = *VAR_1;
 FUNC_1(VAR_0);
 return (0);
}
