
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct clknode {scalar_t__ ref_cnt; int name; } ;
typedef TYPE_1__* clk_t ;
struct TYPE_5__ {int dev; struct clknode* clknode; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 TYPE_1__* FUNC_3 (struct clknode*,int ) ;
 struct clknode* FUNC_4 (struct clknode*) ;

int
FUNC_5(clk_t VAR_1, clk_t *VAR_2)
{
 struct clknode *VAR_3;
 struct clknode *VAR_4;

 VAR_3 = VAR_1->clknode;
 FUNC_2(VAR_3->ref_cnt > 0,
    ("Attempt to access unreferenced clock: %s\n", VAR_3->name));

 FUNC_0();
 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_1();
  return (VAR_0);
 }
 *VAR_2 = FUNC_3(VAR_4, VAR_1->dev);
 FUNC_1();
 return (0);
}
