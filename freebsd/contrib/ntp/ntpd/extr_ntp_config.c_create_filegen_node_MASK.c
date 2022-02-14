
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filegen_token; int * options; } ;
typedef TYPE_1__ filegen_node ;
typedef int attr_val_fifo ;


 TYPE_1__* FUNC_0 (int) ;

filegen_node *
FUNC_1(
 int VAR_0,
 attr_val_fifo * VAR_1
 )
{
 filegen_node *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->filegen_token = VAR_0;
 VAR_2->options = VAR_1;

 return VAR_2;
}
