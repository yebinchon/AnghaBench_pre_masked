
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int name_len; int data; int wwpn; int in_use; } ;
struct TYPE_6__ {scalar_t__ targ_port; int initid; } ;
struct TYPE_7__ {TYPE_1__ nexus; int msg_type; } ;
union ctl_ha_msg {TYPE_4__ iid; TYPE_2__ hdr; } ;
struct ctl_softc {scalar_t__ port_min; scalar_t__ port_max; scalar_t__ ha_link; int ctl_lock; } ;
struct ctl_port {scalar_t__ targ_port; TYPE_3__* wwpn_iid; struct ctl_softc* ctl_softc; } ;
struct TYPE_8__ {int name; int wwpn; int in_use; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (int ,TYPE_4__*,int,int ) ;
 int FUNC_2 (union ctl_ha_msg*,int ) ;
 union ctl_ha_msg* FUNC_3 (int,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ) ;

void
FUNC_8(struct ctl_port *VAR_5, int VAR_6)
{
 struct ctl_softc *VAR_7 = VAR_5->ctl_softc;
 union ctl_ha_msg *VAR_8;
 int VAR_9, VAR_10;

 if (VAR_5->targ_port < VAR_7->port_min ||
     VAR_5->targ_port >= VAR_7->port_max ||
     VAR_7->ha_link != VAR_1)
  return;
 FUNC_4(&VAR_7->ctl_lock);
 VAR_9 = sizeof(VAR_8->iid);
 VAR_10 = 0;
 if (VAR_5->wwpn_iid[VAR_6].name)
  VAR_10 = FUNC_7(VAR_5->wwpn_iid[VAR_6].name) + 1;
 VAR_9 += VAR_10;
 VAR_8 = FUNC_3(VAR_9, VAR_3, VAR_4);
 if (VAR_8 == ((void*)0)) {
  FUNC_5(&VAR_7->ctl_lock);
  return;
 }
 FUNC_0(&VAR_8->iid, sizeof(VAR_8->iid));
 VAR_8->hdr.msg_type = VAR_2;
 VAR_8->hdr.nexus.targ_port = VAR_5->targ_port;
 VAR_8->hdr.nexus.initid = VAR_6;
 VAR_8->iid.in_use = VAR_5->wwpn_iid[VAR_6].in_use;
 VAR_8->iid.name_len = VAR_10;
 VAR_8->iid.wwpn = VAR_5->wwpn_iid[VAR_6].wwpn;
 if (VAR_5->wwpn_iid[VAR_6].name)
  FUNC_6(VAR_8->iid.data, VAR_5->wwpn_iid[VAR_6].name, VAR_10);
 FUNC_5(&VAR_7->ctl_lock);
 FUNC_1(VAR_0, &VAR_8->iid, VAR_9, VAR_4);
 FUNC_2(VAR_8, VAR_3);
}
