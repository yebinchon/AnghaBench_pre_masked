
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ng_mesg {scalar_t__ data; } ;
struct TYPE_6__ {int reason; int con_handle; } ;
typedef TYPE_2__ ng_hci_lp_discon_req_ep ;
typedef TYPE_3__* ng_btsocket_sco_pcb_p ;
struct TYPE_7__ {TYPE_1__* rt; int con_handle; int pcb_mtx; } ;
struct TYPE_5__ {int * hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ng_mesg*,int ,int ,int,int ) ;
 int FUNC_2 (int,int ,struct ng_mesg*,int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(ng_btsocket_sco_pcb_p VAR_7)
{
 struct ng_mesg *VAR_8 = ((void*)0);
 ng_hci_lp_discon_req_ep *VAR_9 = ((void*)0);
 int VAR_10 = 0;

 FUNC_3(&VAR_7->pcb_mtx, VAR_2);

 if (VAR_7->rt == ((void*)0) ||
     VAR_7->rt->hook == ((void*)0) || FUNC_0(VAR_7->rt->hook))
  return (VAR_0);

 FUNC_1(VAR_8, VAR_4, VAR_5,
  sizeof(*VAR_9), VAR_3);
 if (VAR_8 == ((void*)0))
  return (VAR_1);

 VAR_9 = (ng_hci_lp_discon_req_ep *)(VAR_8->data);
 VAR_9->con_handle = VAR_7->con_handle;
 VAR_9->reason = 0x13;

 FUNC_2(VAR_10, VAR_6, VAR_8, VAR_7->rt->hook, 0);

 return (VAR_10);
}
