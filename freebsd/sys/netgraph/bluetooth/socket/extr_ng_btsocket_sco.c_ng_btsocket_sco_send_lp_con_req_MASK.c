
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ng_mesg {scalar_t__ data; } ;
struct TYPE_6__ {int bdaddr; int link_type; } ;
typedef TYPE_2__ ng_hci_lp_con_req_ep ;
typedef TYPE_3__* ng_btsocket_sco_pcb_p ;
struct TYPE_7__ {TYPE_1__* rt; int dst; int pcb_mtx; } ;
struct TYPE_5__ {int * hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ng_mesg*,int ,int ,int,int ) ;
 int FUNC_2 (int,int ,struct ng_mesg*,int *,int ) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int ) ;
 int VAR_7 ;

__attribute__((used)) static int
FUNC_5(ng_btsocket_sco_pcb_p VAR_8)
{
 struct ng_mesg *VAR_9 = ((void*)0);
 ng_hci_lp_con_req_ep *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 FUNC_4(&VAR_8->pcb_mtx, VAR_2);

 if (VAR_8->rt == ((void*)0) ||
     VAR_8->rt->hook == ((void*)0) || FUNC_0(VAR_8->rt->hook))
  return (VAR_0);

 FUNC_1(VAR_9, VAR_4, VAR_5,
  sizeof(*VAR_10), VAR_3);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 VAR_10 = (ng_hci_lp_con_req_ep *)(VAR_9->data);
 VAR_10->link_type = VAR_6;
 FUNC_3(&VAR_8->dst, &VAR_10->bdaddr, sizeof(VAR_10->bdaddr));

 FUNC_2(VAR_11, VAR_7, VAR_9, VAR_8->rt->hook, 0);

 return (VAR_11);
}
