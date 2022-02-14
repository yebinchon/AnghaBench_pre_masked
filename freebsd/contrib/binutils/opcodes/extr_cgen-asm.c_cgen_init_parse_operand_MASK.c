
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* parse_operand_fn ) (TYPE_1__*,int ,int *,int ,int ,int *,int *) ;} ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int *,int ,int ,int *,int *) ;

void
FUNC_1 (CGEN_CPU_DESC VAR_1)
{

  (void) (* VAR_1->parse_operand_fn)
    (VAR_1, VAR_0, ((void*)0), 0, 0, ((void*)0), ((void*)0));
}
