
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct clknode {scalar_t__ ref_cnt; int name; } ;
typedef TYPE_1__* clk_t ;
struct TYPE_3__ {int enable_cnt; struct clknode* clknode; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct clknode*,int ,int,int ) ;

int
FUNC_4(clk_t VAR_1, uint64_t VAR_2, int VAR_3)
{
 int VAR_4;
 struct clknode *VAR_5;

 VAR_3 &= VAR_0;
 VAR_5 = VAR_1->clknode;
 FUNC_2(VAR_5->ref_cnt > 0,
    ("Attempt to access unreferenced clock: %s\n", VAR_5->name));

 FUNC_1();
 VAR_4 = FUNC_3(VAR_5, VAR_2, VAR_3, VAR_1->enable_cnt);
 FUNC_0();
 return (VAR_4);
}
