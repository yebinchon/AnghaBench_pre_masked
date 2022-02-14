
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; int parent_cnt; int * parent_names; int * name; } ;
struct clk_gate_def {int mask; int on_value; scalar_t__ off_value; int shift; int offset; TYPE_1__ clkdef; } ;
struct aw_ccung_softc {int ngates; int clkdom; TYPE_2__* gates; } ;
typedef int def ;
struct TYPE_4__ {int shift; int offset; int parent_name; int * name; } ;


 int FUNC_0 (int ,struct clk_gate_def*) ;
 int FUNC_1 (struct clk_gate_def*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct aw_ccung_softc *VAR_0)
{
 struct clk_gate_def VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->ngates; VAR_2++) {
  if (VAR_0->gates[VAR_2].name == ((void*)0))
   continue;
  FUNC_1(&VAR_1, 0, sizeof(VAR_1));
  VAR_1.clkdef.id = VAR_2;
  VAR_1.clkdef.name = VAR_0->gates[VAR_2].name;
  VAR_1.clkdef.parent_names = &VAR_0->gates[VAR_2].parent_name;
  VAR_1.clkdef.parent_cnt = 1;
  VAR_1.offset = VAR_0->gates[VAR_2].offset;
  VAR_1.shift = VAR_0->gates[VAR_2].shift;
  VAR_1.mask = 1;
  VAR_1.on_value = 1;
  VAR_1.off_value = 0;
  FUNC_0(VAR_0->clkdom, &VAR_1);
 }

 return (0);
}
