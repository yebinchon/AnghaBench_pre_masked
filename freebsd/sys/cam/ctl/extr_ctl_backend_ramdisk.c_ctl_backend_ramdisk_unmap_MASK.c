
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ctl_io {int scsiio; } ;
struct scsi_unmap_desc {int length; int lba; } ;
struct ctl_ptr_len_flags {int flags; int len; scalar_t__ ptr; } ;
struct ctl_be_lun {int dummy; } ;


 scalar_t__ FUNC_0 (union ctl_io*) ;
 struct ctl_be_lun* FUNC_1 (union ctl_io*) ;
 int VAR_0 ;
 int FUNC_2 (struct ctl_be_lun*,int ,int ,int) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(union ctl_io *VAR_1)
{
 struct ctl_be_lun *VAR_2 = FUNC_1(VAR_1);
 struct ctl_ptr_len_flags *VAR_3 = (struct ctl_ptr_len_flags *)FUNC_0(VAR_1);
 struct scsi_unmap_desc *VAR_4, *VAR_5;

 if ((VAR_3->flags & ~VAR_0) != 0) {
  FUNC_4(&VAR_1->scsiio,
                        0,
                      0,
                    0,
                        0,
                  0);
  FUNC_3(VAR_1);
  return;
 }

 VAR_4 = (struct scsi_unmap_desc *)VAR_3->ptr;
 VAR_5 = VAR_4 + VAR_3->len / sizeof(*VAR_4);
 for (; VAR_4 < VAR_5; VAR_4++) {
  FUNC_2(VAR_2,
      FUNC_7(VAR_4->lba), FUNC_6(VAR_4->length),
      (VAR_3->flags & VAR_0) != 0);
 }

 FUNC_5(&VAR_1->scsiio);
 FUNC_3(VAR_1);
}
