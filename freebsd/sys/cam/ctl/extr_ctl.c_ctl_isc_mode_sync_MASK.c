
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {size_t targ_mapped_lun; } ;
struct TYPE_9__ {TYPE_5__ nexus; } ;
struct TYPE_6__ {int page_code; scalar_t__ subpage; int data; } ;
union ctl_ha_msg {TYPE_4__ hdr; TYPE_1__ mode; } ;
typedef size_t uint32_t ;
typedef size_t u_int ;
struct ctl_softc {int ctl_lock; struct ctl_lun** ctl_luns; } ;
struct TYPE_8__ {TYPE_2__* index; } ;
struct ctl_lun {int flags; int lun_lock; TYPE_3__ mode_pages; } ;
struct TYPE_7__ {int page_code; scalar_t__ subpage; int page_len; int page_data; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ctl_lun*,size_t,int ) ;
 size_t FUNC_1 (TYPE_5__*) ;
 size_t VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct ctl_softc *VAR_5, union ctl_ha_msg *VAR_6, int VAR_7)
{
 struct ctl_lun *VAR_8;
 u_int VAR_9;
 uint32_t VAR_10, VAR_11;

 VAR_11 = VAR_6->hdr.nexus.targ_mapped_lun;
 FUNC_3(&VAR_5->ctl_lock);
 if (VAR_11 >= VAR_4 ||
     (VAR_8 = VAR_5->ctl_luns[VAR_11]) == ((void*)0)) {
  FUNC_4(&VAR_5->ctl_lock);
  return;
 }
 FUNC_3(&VAR_8->lun_lock);
 FUNC_4(&VAR_5->ctl_lock);
 if (VAR_8->flags & VAR_0) {
  FUNC_4(&VAR_8->lun_lock);
  return;
 }
 for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
  if ((VAR_8->mode_pages.index[VAR_9].page_code & VAR_3) ==
      VAR_6->mode.page_code &&
      VAR_8->mode_pages.index[VAR_9].subpage == VAR_6->mode.subpage)
   break;
 }
 if (VAR_9 == VAR_1) {
  FUNC_4(&VAR_8->lun_lock);
  return;
 }
 FUNC_2(VAR_8->mode_pages.index[VAR_9].page_data, VAR_6->mode.data,
     VAR_8->mode_pages.index[VAR_9].page_len);
 VAR_10 = FUNC_1(&VAR_6->hdr.nexus);
 if (VAR_10 != -1)
  FUNC_0(VAR_8, VAR_10, VAR_2);
 FUNC_4(&VAR_8->lun_lock);
}
