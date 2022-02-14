
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


struct TYPE_12__ {int flags; int pr_key_count; int lun_devid_len; int * data; int pr_res_type; int pr_res_idx; int pr_generation; } ;
struct TYPE_7__ {int targ_mapped_lun; int targ_lun; } ;
struct TYPE_8__ {TYPE_1__ nexus; int msg_type; } ;
union ctl_ha_msg {int port; TYPE_6__ lun; TYPE_2__ hdr; } ;
struct ctl_softc {scalar_t__ ha_link; } ;
struct TYPE_11__ {TYPE_4__* index; } ;
struct ctl_lun {int pr_key_count; int flags; TYPE_5__ mode_pages; int lun_lock; TYPE_3__* lun_devid; int pr_res_type; int pr_res_idx; int pr_generation; int lun; struct ctl_softc* ctl_softc; } ;
struct ctl_ha_msg_lun_pr_key {int pr_iid; int pr_key; } ;
typedef int pr_key ;
struct TYPE_10__ {int page_code; int subpage; } ;
struct TYPE_9__ {int len; struct ctl_ha_msg_lun_pr_key* data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (struct ctl_lun*,int) ;
 int FUNC_2 (int ,int *,int,int ) ;
 int FUNC_3 (struct ctl_lun*,int,int,int ) ;
 int FUNC_4 (union ctl_ha_msg*,int ) ;
 union ctl_ha_msg* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int *,struct ctl_ha_msg_lun_pr_key*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

void
FUNC_9(struct ctl_lun *VAR_9)
{
 struct ctl_softc *VAR_10 = VAR_9->ctl_softc;
 union ctl_ha_msg *VAR_11;
 struct ctl_ha_msg_lun_pr_key VAR_12;
 int VAR_13, VAR_14;

 if (VAR_10->ha_link != VAR_1)
  return;
 FUNC_7(&VAR_9->lun_lock);
 VAR_13 = sizeof(VAR_11->lun);
 if (VAR_9->lun_devid)
  VAR_13 += VAR_9->lun_devid->len;
 VAR_13 += sizeof(VAR_12) * VAR_9->pr_key_count;
alloc:
 FUNC_8(&VAR_9->lun_lock);
 VAR_11 = FUNC_5(VAR_13, VAR_6, VAR_7);
 FUNC_7(&VAR_9->lun_lock);
 VAR_14 = sizeof(VAR_11->lun);
 if (VAR_9->lun_devid)
  VAR_14 += VAR_9->lun_devid->len;
 VAR_14 += sizeof(VAR_12) * VAR_9->pr_key_count;
 if (VAR_13 < VAR_14) {
  FUNC_4(VAR_11, VAR_6);
  VAR_13 = VAR_14;
  goto alloc;
 }
 FUNC_0(&VAR_11->lun, sizeof(VAR_11->lun));
 VAR_11->hdr.msg_type = VAR_4;
 VAR_11->hdr.nexus.targ_lun = VAR_9->lun;
 VAR_11->hdr.nexus.targ_mapped_lun = VAR_9->lun;
 VAR_11->lun.flags = VAR_9->flags;
 VAR_11->lun.pr_generation = VAR_9->pr_generation;
 VAR_11->lun.pr_res_idx = VAR_9->pr_res_idx;
 VAR_11->lun.pr_res_type = VAR_9->pr_res_type;
 VAR_11->lun.pr_key_count = VAR_9->pr_key_count;
 VAR_13 = 0;
 if (VAR_9->lun_devid) {
  VAR_11->lun.lun_devid_len = VAR_9->lun_devid->len;
  FUNC_6(&VAR_11->lun.data[VAR_13], VAR_9->lun_devid->data,
      VAR_11->lun.lun_devid_len);
  VAR_13 += VAR_11->lun.lun_devid_len;
 }
 for (VAR_14 = 0; VAR_14 < VAR_3; VAR_14++) {
  if ((VAR_12.pr_key = FUNC_1(VAR_9, VAR_14)) == 0)
   continue;
  VAR_12.pr_iid = VAR_14;
  FUNC_6(&VAR_11->lun.data[VAR_13], &VAR_12, sizeof(VAR_12));
  VAR_13 += sizeof(VAR_12);
 }
 FUNC_8(&VAR_9->lun_lock);
 FUNC_2(VAR_0, &VAR_11->port, sizeof(VAR_11->port) + VAR_13,
     VAR_7);
 FUNC_4(VAR_11, VAR_6);

 if (VAR_9->flags & VAR_2) {
  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   FUNC_3(VAR_9, -1,
       VAR_9->mode_pages.index[VAR_13].page_code & VAR_8,
       VAR_9->mode_pages.index[VAR_13].subpage);
  }
 }
}
