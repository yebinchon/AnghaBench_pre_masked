
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clknode {int ref_cnt; } ;
struct clk {scalar_t__ enable_cnt; struct clknode* clknode; int dev; } ;
typedef int device_t ;
typedef struct clk* clk_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct clk* FUNC_1 (int,int ,int ) ;

__attribute__((used)) static clk_t
FUNC_2(struct clknode *VAR_2, device_t VAR_3)
{
 struct clk *VAR_4;

 FUNC_0();

 VAR_4 = FUNC_1(sizeof(struct clk), VAR_0, VAR_1);
 VAR_4->dev = VAR_3;
 VAR_4->clknode = VAR_2;
 VAR_4->enable_cnt = 0;
 VAR_2->ref_cnt++;

 return (VAR_4);
}
