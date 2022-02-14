
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {short ippeerlimit; int line_no; int * flag_tok_fifo; int * mask; int * addr; } ;
typedef TYPE_1__ restrict_node ;
typedef int int_fifo ;
typedef int address_node ;


 TYPE_1__* FUNC_0 (int) ;

restrict_node *
FUNC_1(
 address_node * VAR_0,
 address_node * VAR_1,
 short VAR_2,
 int_fifo * VAR_3,
 int VAR_4
 )
{
 restrict_node *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5));
 VAR_5->addr = VAR_0;
 VAR_5->mask = VAR_1;
 VAR_5->ippeerlimit = VAR_2;
 VAR_5->flag_tok_fifo = VAR_3;
 VAR_5->line_no = VAR_4;

 return VAR_5;
}
