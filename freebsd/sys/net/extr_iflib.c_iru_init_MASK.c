
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef TYPE_1__* iflib_rxq_t ;
typedef TYPE_2__* iflib_fl_t ;
typedef TYPE_3__* if_rxd_update_t ;
struct TYPE_8__ {int iru_flidx; int iru_buf_size; int iru_qsidx; int iru_idxs; int * iru_vaddrs; int iru_paddrs; } ;
struct TYPE_7__ {int ifl_id; int ifl_buf_size; int ifl_rxd_idxs; int * ifl_vm_addrs; int ifl_bus_addrs; } ;
struct TYPE_6__ {int ifr_id; TYPE_2__* ifr_fl; } ;



__attribute__((used)) static void
FUNC_0(if_rxd_update_t VAR_0, iflib_rxq_t VAR_1, uint8_t VAR_2)
{
 iflib_fl_t VAR_3;

 VAR_3 = &VAR_1->ifr_fl[VAR_2];
 VAR_0->iru_paddrs = VAR_3->ifl_bus_addrs;
 VAR_0->iru_vaddrs = &VAR_3->ifl_vm_addrs[0];
 VAR_0->iru_idxs = VAR_3->ifl_rxd_idxs;
 VAR_0->iru_qsidx = VAR_1->ifr_id;
 VAR_0->iru_buf_size = VAR_3->ifl_buf_size;
 VAR_0->iru_flidx = VAR_3->ifl_id;
}
