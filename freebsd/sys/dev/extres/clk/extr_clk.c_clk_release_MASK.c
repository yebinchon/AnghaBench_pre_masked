
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct clknode {scalar_t__ ref_cnt; int name; } ;
typedef TYPE_1__* clk_t ;
struct TYPE_4__ {scalar_t__ enable_cnt; struct clknode* clknode; } ;


 int FUNC_0 (struct clknode*) ;
 int FUNC_1 (struct clknode*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,char*) ;
 int VAR_0 ;
 int FUNC_5 (struct clknode*) ;
 int FUNC_6 (TYPE_1__*,int ) ;

int
FUNC_7(clk_t VAR_1)
{
 struct clknode *VAR_2;

 VAR_2 = VAR_1->clknode;
 FUNC_4(VAR_2->ref_cnt > 0,
    ("Attempt to access unreferenced clock: %s\n", VAR_2->name));
 FUNC_2();
 while (VAR_1->enable_cnt > 0) {
  FUNC_5(VAR_2);
  VAR_1->enable_cnt--;
 }
 FUNC_1(VAR_2);
 VAR_2->ref_cnt--;
 FUNC_0(VAR_2);
 FUNC_3();

 FUNC_6(VAR_1, VAR_0);
 return (0);
}
