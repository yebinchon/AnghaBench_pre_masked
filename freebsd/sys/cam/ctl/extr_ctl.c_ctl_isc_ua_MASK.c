
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int ua_type; scalar_t__ ua_set; scalar_t__ ua_all; int ua_info; } ;
struct TYPE_6__ {size_t targ_mapped_lun; } ;
struct TYPE_4__ {TYPE_3__ nexus; } ;
union ctl_ha_msg {TYPE_2__ ua; TYPE_1__ hdr; } ;
typedef int uint32_t ;
struct ctl_softc {int ctl_lock; struct ctl_lun** ctl_luns; } ;
struct ctl_lun {int lun_lock; int ua_tpt_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct ctl_lun*,int ,int ) ;
 int FUNC_1 (struct ctl_lun*,int ,int ) ;
 int FUNC_2 (struct ctl_lun*,int ,int ) ;
 int FUNC_3 (struct ctl_lun*,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 size_t VAR_1 ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct ctl_softc *VAR_2, union ctl_ha_msg *VAR_3, int VAR_4)
{
 struct ctl_lun *VAR_5;
 uint32_t VAR_6 = FUNC_4(&VAR_3->hdr.nexus);

 FUNC_6(&VAR_2->ctl_lock);
 if (VAR_3->hdr.nexus.targ_mapped_lun >= VAR_1 ||
     (VAR_5 = VAR_2->ctl_luns[VAR_3->hdr.nexus.targ_mapped_lun]) == ((void*)0)) {
  FUNC_7(&VAR_2->ctl_lock);
  return;
 }
 FUNC_6(&VAR_5->lun_lock);
 FUNC_7(&VAR_2->ctl_lock);
 if (VAR_3->ua.ua_type == VAR_0 && VAR_3->ua.ua_set)
  FUNC_5(VAR_5->ua_tpt_info, VAR_3->ua.ua_info, 8);
 if (VAR_3->ua.ua_all) {
  if (VAR_3->ua.ua_set)
   FUNC_3(VAR_5, VAR_6, VAR_3->ua.ua_type);
  else
   FUNC_1(VAR_5, VAR_6, VAR_3->ua.ua_type);
 } else {
  if (VAR_3->ua.ua_set)
   FUNC_2(VAR_5, VAR_6, VAR_3->ua.ua_type);
  else
   FUNC_0(VAR_5, VAR_6, VAR_3->ua.ua_type);
 }
 FUNC_7(&VAR_5->lun_lock);
}
