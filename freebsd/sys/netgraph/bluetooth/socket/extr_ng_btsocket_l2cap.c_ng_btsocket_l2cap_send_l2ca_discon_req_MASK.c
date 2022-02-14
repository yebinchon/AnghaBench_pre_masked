
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_6__ {int token; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
struct TYPE_8__ {int idtype; int lcid; } ;
typedef TYPE_3__ ng_l2cap_l2ca_discon_ip ;
typedef TYPE_4__* ng_btsocket_l2cap_pcb_p ;
struct TYPE_9__ {TYPE_2__* rt; int idtype; int cid; int pcb_mtx; } ;
struct TYPE_7__ {int * hook; } ;


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
FUNC_4(u_int32_t VAR_7,
  ng_btsocket_l2cap_pcb_p VAR_8)
{
 struct ng_mesg *VAR_9 = ((void*)0);
 ng_l2cap_l2ca_discon_ip *VAR_10 = ((void*)0);
 int VAR_11 = 0;

 FUNC_3(&VAR_8->pcb_mtx, VAR_2);

 if (VAR_8->rt == ((void*)0) ||
     VAR_8->rt->hook == ((void*)0) || FUNC_0(VAR_8->rt->hook))
  return (VAR_0);

 FUNC_1(VAR_9, VAR_4, VAR_5,
  sizeof(*VAR_10), VAR_3);
 if (VAR_9 == ((void*)0))
  return (VAR_1);

 VAR_9->header.token = VAR_7;

 VAR_10 = (ng_l2cap_l2ca_discon_ip *)(VAR_9->data);
 VAR_10->lcid = VAR_8->cid;
 VAR_10->idtype = VAR_8->idtype;

 FUNC_2(VAR_11, VAR_6, VAR_9,VAR_8->rt->hook, 0);

 return (VAR_11);
}
