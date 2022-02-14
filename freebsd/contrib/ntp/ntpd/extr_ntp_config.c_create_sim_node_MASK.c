
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * servers; int * init_opts; } ;
typedef TYPE_1__ sim_node ;
typedef int server_info_fifo ;
typedef int attr_val_fifo ;


 TYPE_1__* FUNC_0 (int) ;

sim_node *
FUNC_1(
 attr_val_fifo * VAR_0,
 server_info_fifo * VAR_1
 )
{
 sim_node *VAR_2;

 VAR_2 = FUNC_0(sizeof(*VAR_2));
 VAR_2->init_opts = VAR_0;
 VAR_2->servers = VAR_1;

 return VAR_2;
}
