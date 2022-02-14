
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stack_adjust; int vars; int regs; } ;
typedef TYPE_1__ dataflow_set ;


 int FUNC_0 (int,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2 (dataflow_set *VAR_3, int VAR_4)
{
  FUNC_1 (VAR_3->regs);
  VAR_3->vars = FUNC_0 (VAR_4, VAR_2, VAR_0,
      VAR_1);
  VAR_3->stack_adjust = 0;
}
