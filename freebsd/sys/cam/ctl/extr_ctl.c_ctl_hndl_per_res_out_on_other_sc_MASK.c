
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int pr_msg; } ;
union ctl_io {TYPE_1__ presio; } ;
struct TYPE_9__ {int action; int residx; int res_type; int sa_res_key; } ;
struct TYPE_10__ {TYPE_3__ pr_info; } ;
struct TYPE_12__ {size_t targ_mapped_lun; } ;
struct TYPE_8__ {TYPE_6__ nexus; } ;
union ctl_ha_msg {TYPE_4__ pr; TYPE_2__ hdr; } ;
typedef size_t uint32_t ;
struct ctl_softc {int init_min; int init_max; int ctl_lock; struct ctl_lun** ctl_luns; } ;
struct TYPE_11__ {int queue_flags; } ;
struct ctl_lun {int flags; int pr_res_idx; int lun_lock; int pr_generation; int pr_key_count; int pr_res_type; TYPE_5__ MODE_CTRL; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 void* VAR_4 ;





 struct ctl_softc* FUNC_0 (union ctl_io*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct ctl_lun*,int) ;
 int FUNC_2 (struct ctl_lun*,int) ;
 int FUNC_3 (struct ctl_lun*,int,int ) ;
 size_t FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (struct ctl_lun*,int) ;
 size_t VAR_12 ;
 int FUNC_6 (struct ctl_lun*,union ctl_ha_msg*) ;
 int FUNC_7 (struct ctl_lun*,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(union ctl_io *VAR_13)
{
 struct ctl_softc *VAR_14 = FUNC_0(VAR_13);
 union ctl_ha_msg *VAR_15 = (union ctl_ha_msg *)&VAR_13->presio.pr_msg;
 struct ctl_lun *VAR_16;
 int VAR_17;
 uint32_t VAR_18, VAR_19;

 VAR_19 = VAR_15->hdr.nexus.targ_mapped_lun;
 FUNC_8(&VAR_14->ctl_lock);
 if (VAR_19 >= VAR_12 ||
     (VAR_16 = VAR_14->ctl_luns[VAR_19]) == ((void*)0)) {
  FUNC_9(&VAR_14->ctl_lock);
  return;
 }
 FUNC_8(&VAR_16->lun_lock);
 FUNC_9(&VAR_14->ctl_lock);
 if (VAR_16->flags & VAR_0) {
  FUNC_9(&VAR_16->lun_lock);
  return;
 }
 VAR_18 = FUNC_4(&VAR_15->hdr.nexus);
 switch(VAR_15->pr.pr_info.action) {
 case 131:
  FUNC_1(VAR_16, VAR_15->pr.pr_info.residx);
  if (FUNC_5(VAR_16, VAR_15->pr.pr_info.residx) == 0)
   VAR_16->pr_key_count++;
  FUNC_7(VAR_16, VAR_15->pr.pr_info.residx,
      FUNC_10(VAR_15->pr.pr_info.sa_res_key));
  VAR_16->pr_generation++;
  break;

 case 128:
  FUNC_2(VAR_16, VAR_15->pr.pr_info.residx);
  VAR_16->pr_key_count--;



  if (VAR_15->pr.pr_info.residx == VAR_16->pr_res_idx) {
   VAR_16->flags &= ~VAR_1;
   VAR_16->pr_res_idx = VAR_4;

   if ((VAR_16->pr_res_type == VAR_11 ||
        VAR_16->pr_res_type == VAR_9) &&
       VAR_16->pr_key_count) {
    for (VAR_17 = VAR_14->init_min; VAR_17 < VAR_14->init_max; VAR_17++) {
     if (FUNC_5(VAR_16, VAR_17) == 0)
      continue;

     FUNC_3(VAR_16, VAR_17, VAR_6);
    }
   }
   VAR_16->pr_res_type = 0;
  } else if (VAR_16->pr_res_idx == VAR_3) {
   if (VAR_16->pr_key_count==0) {
    VAR_16->flags &= ~VAR_1;
    VAR_16->pr_res_type = 0;
    VAR_16->pr_res_idx = VAR_4;
   }
  }
  VAR_16->pr_generation++;
  break;

 case 129:
  VAR_16->flags |= VAR_1;
  VAR_16->pr_res_type = VAR_15->pr.pr_info.res_type;
  VAR_16->pr_res_idx = VAR_15->pr.pr_info.residx;

  break;

 case 130:




  if (VAR_16->pr_res_type != VAR_8 &&
      VAR_16->pr_res_type != VAR_10 &&
      (VAR_16->MODE_CTRL.queue_flags & VAR_7) == 0) {
   for (VAR_17 = VAR_14->init_min; VAR_17 < VAR_14->init_max; VAR_17++) {
    if (VAR_17 == VAR_18 || FUNC_5(VAR_16, VAR_17) == 0)
     continue;
    FUNC_3(VAR_16, VAR_17, VAR_6);
   }
  }

  VAR_16->flags &= ~VAR_1;
  VAR_16->pr_res_idx = VAR_4;
  VAR_16->pr_res_type = 0;
  break;

 case 132:
  FUNC_6(VAR_16, VAR_15);
  break;
 case 133:
  VAR_16->flags &= ~VAR_1;
  VAR_16->pr_res_type = 0;
  VAR_16->pr_key_count = 0;
  VAR_16->pr_res_idx = VAR_4;

  for (VAR_17=0; VAR_17 < VAR_2; VAR_17++) {
   if (FUNC_5(VAR_16, VAR_17) == 0)
    continue;
   FUNC_2(VAR_16, VAR_17);
   FUNC_3(VAR_16, VAR_17, VAR_5);
  }
  VAR_16->pr_generation++;
  break;
 }

 FUNC_9(&VAR_16->lun_lock);
}
