
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int attr_val_fifo ;
typedef int address_node ;
struct TYPE_4__ {int * options; int * addr; } ;
typedef TYPE_1__ addr_opts_node ;


 TYPE_1__* FUNC_0 (int) ;

addr_opts_node *
FUNC_1(
 address_node * VAR_0,
 attr_val_fifo * VAR_1
 )
{
 addr_opts_node *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->addr = VAR_0;
 VAR_2->options = VAR_1;

 return VAR_2;
}
