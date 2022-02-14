
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_5__ {int token; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
struct TYPE_6__ {int ident; int lcid; int linktype; int result; scalar_t__ status; int bdaddr; } ;
typedef TYPE_2__ ng_l2cap_l2ca_con_rsp_ip ;
typedef TYPE_3__* ng_btsocket_l2cap_rtentry_p ;
typedef int bdaddr_p ;
struct TYPE_7__ {int * hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct ng_mesg*,int ,int ,int,int ) ;
 int FUNC_2 (int,int ,struct ng_mesg*,int *,int ) ;
 int FUNC_3 (int ,int *,int) ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(u_int32_t VAR_6,
  ng_btsocket_l2cap_rtentry_p VAR_7, bdaddr_p VAR_8, int VAR_9,
     int VAR_10, int VAR_11, int VAR_12)
{
 struct ng_mesg *VAR_13 = ((void*)0);
 ng_l2cap_l2ca_con_rsp_ip *VAR_14 = ((void*)0);
 int VAR_15 = 0;

 if (VAR_7 == ((void*)0) || VAR_7->hook == ((void*)0) || FUNC_0(VAR_7->hook))
  return (VAR_0);

 FUNC_1(VAR_13, VAR_3, VAR_4,
  sizeof(*VAR_14), VAR_2);
 if (VAR_13 == ((void*)0))
  return (VAR_1);

 VAR_13->header.token = VAR_6;

 VAR_14 = (ng_l2cap_l2ca_con_rsp_ip *)(VAR_13->data);
 FUNC_3(VAR_8, &VAR_14->bdaddr, sizeof(VAR_14->bdaddr));
 VAR_14->ident = VAR_9;
 VAR_14->lcid = VAR_10;
 VAR_14->linktype = VAR_12;
 VAR_14->result = VAR_11;
 VAR_14->status = 0;

 FUNC_2(VAR_15, VAR_5, VAR_13, VAR_7->hook, 0);

 return (VAR_15);
}
