
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int set_vma_operand; int get_vma_operand; int set_int_operand; int get_int_operand; int extract_operand; int insert_operand; int * extract_handlers; int * insert_handlers; } ;
typedef TYPE_1__* CGEN_CPU_DESC ;


 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void
FUNC_0 (CGEN_CPU_DESC VAR_8)
{
  VAR_8->insert_handlers = & VAR_4[0];
  VAR_8->extract_handlers = & VAR_0[0];

  VAR_8->insert_operand = VAR_5;
  VAR_8->extract_operand = VAR_1;

  VAR_8->get_int_operand = VAR_2;
  VAR_8->set_int_operand = VAR_6;
  VAR_8->get_vma_operand = VAR_3;
  VAR_8->set_vma_operand = VAR_7;
}
