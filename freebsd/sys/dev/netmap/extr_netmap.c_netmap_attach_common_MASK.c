
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct netmap_adapter {int na_flags; int num_host_rx_rings; int num_host_tx_rings; int * nm_bdg_attach; int * nm_mem; scalar_t__ active_fds; int * nm_notify; int nm_krings_delete; int * nm_krings_create; struct netmap_adapter* pdev; TYPE_1__* ifp; int if_input; scalar_t__ rx_buf_maxsize; } ;
struct TYPE_2__ {int if_input; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *) ;
 int * VAR_5 ;
 int VAR_6 ;

int
FUNC_1(struct netmap_adapter *VAR_7)
{
 if (!VAR_7->rx_buf_maxsize) {

  VAR_7->rx_buf_maxsize = VAR_1;
 }







 if (VAR_7->na_flags & VAR_0) {
  if (VAR_7->num_host_rx_rings == 0)
   VAR_7->num_host_rx_rings = 1;
  if (VAR_7->num_host_tx_rings == 0)
   VAR_7->num_host_tx_rings = 1;
 }
 if (VAR_7->nm_krings_create == ((void*)0)) {




  VAR_7->nm_krings_create = VAR_3;
  VAR_7->nm_krings_delete = VAR_4;
 }
 if (VAR_7->nm_notify == ((void*)0))
  VAR_7->nm_notify = VAR_5;
 VAR_7->active_fds = 0;

 if (VAR_7->nm_mem == ((void*)0)) {

  VAR_7->nm_mem = FUNC_0(&VAR_6);
 }
 return 0;
}
