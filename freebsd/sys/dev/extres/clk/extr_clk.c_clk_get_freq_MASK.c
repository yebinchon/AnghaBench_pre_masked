
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct clknode {scalar_t__ ref_cnt; int name; } ;
typedef TYPE_1__* clk_t ;
struct TYPE_3__ {struct clknode* clknode; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct clknode*,int *) ;

int
FUNC_4(clk_t VAR_0, uint64_t *VAR_1)
{
 int VAR_2;
 struct clknode *VAR_3;

 VAR_3 = VAR_0->clknode;
 FUNC_2(VAR_3->ref_cnt > 0,
    ("Attempt to access unreferenced clock: %s\n", VAR_3->name));

 FUNC_0();
 VAR_2 = FUNC_3(VAR_3, VAR_1);
 FUNC_1();
 return (VAR_2);
}
