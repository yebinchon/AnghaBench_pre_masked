
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct clknode {scalar_t__ ref_cnt; int name; } ;
typedef TYPE_1__* clk_t ;
struct TYPE_3__ {int enable_cnt; struct clknode* clknode; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct clknode*) ;

int
FUNC_4(clk_t VAR_0)
{
 int VAR_1;
 struct clknode *VAR_2;

 VAR_2 = VAR_0->clknode;
 FUNC_2(VAR_2->ref_cnt > 0,
    ("Attempt to access unreferenced clock: %s\n", VAR_2->name));
 FUNC_0();
 VAR_1 = FUNC_3(VAR_2);
 if (VAR_1 == 0)
  VAR_0->enable_cnt++;
 FUNC_1();
 return (VAR_1);
}
