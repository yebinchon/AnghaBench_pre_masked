
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct clknode {scalar_t__ ref_cnt; int name; } ;
typedef TYPE_1__* clk_t ;
struct TYPE_4__ {struct clknode* clknode; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct clknode*,int ) ;

int
FUNC_4(clk_t VAR_0, clk_t VAR_1)
{
 int VAR_2;
 struct clknode *VAR_3;
 struct clknode *VAR_4;

 VAR_3 = VAR_0->clknode;
 VAR_4 = VAR_1->clknode;
 FUNC_2(VAR_3->ref_cnt > 0,
    ("Attempt to access unreferenced clock: %s\n", VAR_3->name));
 FUNC_2(VAR_4->ref_cnt > 0,
    ("Attempt to access unreferenced clock: %s\n", VAR_3->name));
 FUNC_1();
 VAR_2 = FUNC_3(VAR_3, VAR_4->name);
 FUNC_0();
 return (VAR_2);
}
