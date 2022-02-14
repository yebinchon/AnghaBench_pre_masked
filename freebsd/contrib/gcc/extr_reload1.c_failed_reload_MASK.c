
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int optional; int secondary_p; scalar_t__ reg_rtx; scalar_t__ out; scalar_t__ in; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,int ) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_1, int VAR_2)
{
  if (FUNC_1 (FUNC_0 (VAR_1)) < 0)

    FUNC_3 ("could not find a spill register", VAR_1);



  FUNC_2 (VAR_1,
   "%<asm%> operand constraint incompatible with operand size");
  VAR_0[VAR_2].in = 0;
  VAR_0[VAR_2].out = 0;
  VAR_0[VAR_2].reg_rtx = 0;
  VAR_0[VAR_2].optional = 1;
  VAR_0[VAR_2].secondary_p = 1;
}
