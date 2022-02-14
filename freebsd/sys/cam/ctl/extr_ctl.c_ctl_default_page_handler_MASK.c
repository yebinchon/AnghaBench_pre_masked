
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int nexus; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; } ;
struct ctl_page_index {int page_len; int subpage; int page_code; int * page_data; } ;
struct ctl_lun {int lun_lock; } ;


 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ctl_lun*,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ctl_lun*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int
FUNC_8(struct ctl_scsiio *VAR_3,
    struct ctl_page_index *VAR_4, uint8_t *VAR_5)
{
 struct ctl_lun *VAR_6 = FUNC_0(VAR_3);
 uint8_t *VAR_7;
 int VAR_8;
 uint32_t VAR_9;

 VAR_9 = FUNC_2(&VAR_3->io_hdr.nexus);
 VAR_8 = 0;

 VAR_7 = (VAR_4->page_data + (VAR_4->page_len *
     VAR_0));

 FUNC_6(&VAR_6->lun_lock);
 if (FUNC_4(VAR_7, VAR_5, VAR_4->page_len)) {
  FUNC_5(VAR_7, VAR_5, VAR_4->page_len);
  VAR_8 = 1;
 }
 if (VAR_8 != 0)
  FUNC_1(VAR_6, VAR_9, VAR_2);
 FUNC_7(&VAR_6->lun_lock);
 if (VAR_8) {
  FUNC_3(VAR_6,
      FUNC_2(&VAR_3->io_hdr.nexus),
      VAR_4->page_code, VAR_4->subpage);
 }
 return (VAR_1);
}
