
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct clknode {scalar_t__ ref_cnt; int name; } ;
typedef TYPE_1__* clk_t ;
struct TYPE_3__ {struct clknode* clknode; } ;


 int FUNC_0 (int,char*) ;
 char* FUNC_1 (struct clknode*) ;

const char *
FUNC_2(clk_t VAR_0)
{
 const char *VAR_1;
 struct clknode *VAR_2;

 VAR_2 = VAR_0->clknode;
 FUNC_0(VAR_2->ref_cnt > 0,
    ("Attempt to access unreferenced clock: %s\n", VAR_2->name));
 VAR_1 = FUNC_1(VAR_2);
 return (VAR_1);
}
