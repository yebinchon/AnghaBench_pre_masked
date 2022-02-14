
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct clknode {scalar_t__ ref_cnt; int name; } ;
typedef TYPE_1__* clk_t ;
struct TYPE_3__ {struct clknode* clknode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct clknode*,int ,int,int ) ;

int
FUNC_4(clk_t VAR_2, uint64_t VAR_3, int VAR_4)
{
 int VAR_5;
 struct clknode *VAR_6;

 VAR_4 &= VAR_1;
 VAR_6 = VAR_2->clknode;
 FUNC_2(VAR_6->ref_cnt > 0,
    ("Attempt to access unreferenced clock: %s\n", VAR_6->name));

 FUNC_1();
 VAR_5 = FUNC_3(VAR_6, VAR_3, VAR_4 | VAR_0, 0);
 FUNC_0();
 return (VAR_5);
}
