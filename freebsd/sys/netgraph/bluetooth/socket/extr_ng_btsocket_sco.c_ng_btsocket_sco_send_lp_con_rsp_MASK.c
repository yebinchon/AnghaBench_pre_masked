
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ng_mesg {scalar_t__ data; } ;
struct TYPE_4__ {int status; int bdaddr; int link_type; } ;
typedef TYPE_1__ ng_hci_lp_con_rsp_ep ;
typedef TYPE_2__* ng_btsocket_sco_rtentry_p ;
typedef int bdaddr_p ;
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
 int FUNC_3 (int ,int *,int) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_4(ng_btsocket_sco_rtentry_p VAR_7, bdaddr_p VAR_8, int VAR_9)
{
 struct ng_mesg *VAR_10 = ((void*)0);
 ng_hci_lp_con_rsp_ep *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 if (VAR_7 == ((void*)0) || VAR_7->hook == ((void*)0) || FUNC_0(VAR_7->hook))
  return (VAR_0);

 FUNC_1(VAR_10, VAR_3, VAR_4,
  sizeof(*VAR_11), VAR_2);
 if (VAR_10 == ((void*)0))
  return (VAR_1);

 VAR_11 = (ng_hci_lp_con_rsp_ep *)(VAR_10->data);
 VAR_11->status = VAR_9;
 VAR_11->link_type = VAR_5;
 FUNC_3(VAR_8, &VAR_11->bdaddr, sizeof(VAR_11->bdaddr));

 FUNC_2(VAR_12, VAR_6, VAR_10, VAR_7->hook, 0);

 return (VAR_12);
}
