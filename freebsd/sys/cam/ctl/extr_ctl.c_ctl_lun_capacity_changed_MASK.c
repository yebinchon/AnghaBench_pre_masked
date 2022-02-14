
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int ua_all; int ua_set; int ua_type; } ;
struct TYPE_6__ {int initid; int targ_port; int targ_mapped_lun; int targ_lun; } ;
struct TYPE_7__ {TYPE_2__ nexus; int msg_type; } ;
union ctl_ha_msg {TYPE_4__ ua; TYPE_3__ hdr; } ;
struct ctl_lun {int lun; TYPE_1__* ctl_softc; int lun_lock; } ;
struct ctl_be_lun {scalar_t__ ctl_lun; } ;
struct TYPE_5__ {scalar_t__ ha_mode; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int) ;
 int FUNC_1 (struct ctl_lun*,int,int ) ;
 int FUNC_2 (int ,union ctl_ha_msg*,int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct ctl_be_lun *VAR_5)
{
 struct ctl_lun *VAR_6 = (struct ctl_lun *)VAR_5->ctl_lun;
 union ctl_ha_msg VAR_7;

 FUNC_3(&VAR_6->lun_lock);
 FUNC_1(VAR_6, -1, VAR_3);
 FUNC_4(&VAR_6->lun_lock);
 if (VAR_6->ctl_softc->ha_mode == VAR_1) {

  FUNC_0(&VAR_7.ua, sizeof(VAR_7.ua));
  VAR_7.hdr.msg_type = VAR_2;
  VAR_7.hdr.nexus.initid = -1;
  VAR_7.hdr.nexus.targ_port = -1;
  VAR_7.hdr.nexus.targ_lun = VAR_6->lun;
  VAR_7.hdr.nexus.targ_mapped_lun = VAR_6->lun;
  VAR_7.ua.ua_all = 1;
  VAR_7.ua.ua_set = 1;
  VAR_7.ua.ua_type = VAR_3;
  FUNC_2(VAR_0, &VAR_7, sizeof(VAR_7.ua),
      VAR_4);
 }
}
