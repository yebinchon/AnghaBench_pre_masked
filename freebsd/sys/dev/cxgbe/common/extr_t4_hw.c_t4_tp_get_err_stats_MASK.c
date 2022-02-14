
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tp_err_stats {int ofld_no_neigh; int * tcp6_in_errs; int * ofld_vlan_drops; int * tnl_tx_drops; int * ofld_chan_drops; int * tnl_cong_drops; int * tcp_in_errs; int * hdr_in_errs; int * mac_in_errs; } ;
struct adapter {TYPE_1__* chip_params; } ;
struct TYPE_2__ {int nchan; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct adapter*,int *,int,int ,int) ;

void FUNC_1(struct adapter *VAR_9, struct tp_err_stats *VAR_10,
    bool VAR_11)
{
 int VAR_12 = VAR_9->chip_params->nchan;

 FUNC_0(VAR_9, VAR_10->mac_in_errs, VAR_12, VAR_1,
         VAR_11);

 FUNC_0(VAR_9, VAR_10->hdr_in_errs, VAR_12, VAR_0,
         VAR_11);

 FUNC_0(VAR_9, VAR_10->tcp_in_errs, VAR_12, VAR_5,
         VAR_11);

 FUNC_0(VAR_9, VAR_10->tnl_cong_drops, VAR_12,
         VAR_7, VAR_11);

 FUNC_0(VAR_9, VAR_10->ofld_chan_drops, VAR_12,
         VAR_3, VAR_11);

 FUNC_0(VAR_9, VAR_10->tnl_tx_drops, VAR_12, VAR_8,
         VAR_11);

 FUNC_0(VAR_9, VAR_10->ofld_vlan_drops, VAR_12,
         VAR_4, VAR_11);

 FUNC_0(VAR_9, VAR_10->tcp6_in_errs, VAR_12,
         VAR_6, VAR_11);

 FUNC_0(VAR_9, &VAR_10->ofld_no_neigh, 2, VAR_2,
         VAR_11);
}
