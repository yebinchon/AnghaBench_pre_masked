
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_5__ {int * di_next; int * di_extern; int di_instr; int di_label; } ;
typedef TYPE_1__ dt_irnode_t ;
typedef int dif_instr_t ;
struct TYPE_6__ {int pcb_jmpbuf; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_1__* FUNC_1 (int) ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static dt_irnode_t *
FUNC_2(uint_t VAR_2, dif_instr_t VAR_3)
{
 dt_irnode_t *VAR_4 = FUNC_1(sizeof (dt_irnode_t));

 if (VAR_4 == ((void*)0))
  FUNC_0(VAR_1->pcb_jmpbuf, VAR_0);

 VAR_4->di_label = VAR_2;
 VAR_4->di_instr = VAR_3;
 VAR_4->di_extern = ((void*)0);
 VAR_4->di_next = ((void*)0);

 return (VAR_4);
}
