
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int len_left; int len_used; } ;
union ctl_modepage_info {TYPE_3__ header; } ;
struct TYPE_7__ {TYPE_1__* ctl_private; } ;
struct ctl_scsiio {int kern_data_ptr; TYPE_2__ io_hdr; } ;
union ctl_io {struct ctl_scsiio scsiio; } ;
typedef int uint8_t ;
typedef int uint16_t ;
struct scsi_mode_page_header_sp {scalar_t__ subpage; int page_length; } ;
struct scsi_mode_page_header {int page_code; int page_length; } ;
struct ctl_page_index {int page_flags; int page_code; scalar_t__ subpage; int (* select_handler ) (struct ctl_scsiio*,struct ctl_page_index*,int*) ;int page_len; int* page_data; } ;
struct TYPE_9__ {struct ctl_page_index* index; } ;
struct ctl_lun {TYPE_5__* be_lun; TYPE_4__ mode_pages; } ;
struct TYPE_10__ {scalar_t__ lun_type; } ;
struct TYPE_6__ {scalar_t__ bytes; } ;


 struct ctl_lun* FUNC_0 (union ctl_io*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*,int,int ,int,int,int) ;
 int FUNC_3 (struct ctl_scsiio*) ;
 int FUNC_4 (struct ctl_scsiio*) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ctl_scsiio*,struct ctl_page_index*,int*) ;

__attribute__((used)) static int
FUNC_8(union ctl_io *VAR_14)
{
 struct ctl_lun *VAR_15 = FUNC_0(VAR_14);
 struct scsi_mode_page_header *VAR_16;
 struct ctl_page_index *VAR_17;
 struct ctl_scsiio *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 union ctl_modepage_info *VAR_22;
 uint16_t *VAR_23, *VAR_24;
 int VAR_25, VAR_26;

 VAR_18 = &VAR_14->scsiio;
 VAR_17 = ((void*)0);
 VAR_19 = 0;

 VAR_22 = (union ctl_modepage_info *)
  VAR_18->io_hdr.ctl_private[VAR_6].bytes;
 VAR_23 = &VAR_22->header.len_left;
 VAR_24 = &VAR_22->header.len_used;

do_next_page:

 VAR_16 = (struct scsi_mode_page_header *)
  (VAR_18->kern_data_ptr + *VAR_24);

 if (*VAR_23 == 0) {
  FUNC_5(VAR_18->kern_data_ptr, VAR_8);
  FUNC_4(VAR_18);
  FUNC_1((union ctl_io *)VAR_18);
  return (VAR_7);
 } else if (*VAR_23 < sizeof(struct scsi_mode_page_header)) {

  FUNC_5(VAR_18->kern_data_ptr, VAR_8);
  FUNC_3(VAR_18);
  FUNC_1((union ctl_io *)VAR_18);
  return (VAR_7);

 } else if ((VAR_16->page_code & VAR_10)
  && (*VAR_23 < sizeof(struct scsi_mode_page_header_sp))) {

  FUNC_5(VAR_18->kern_data_ptr, VAR_8);
  FUNC_3(VAR_18);
  FUNC_1((union ctl_io *)VAR_18);
  return (VAR_7);
 }





 for (VAR_26 = 0; VAR_26 < VAR_0; VAR_26++) {
  VAR_17 = &VAR_15->mode_pages.index[VAR_26];
  if (VAR_15->be_lun->lun_type == VAR_12 &&
      (VAR_17->page_flags & VAR_4) == 0)
   continue;
  if (VAR_15->be_lun->lun_type == VAR_13 &&
      (VAR_17->page_flags & VAR_5) == 0)
   continue;
  if (VAR_15->be_lun->lun_type == VAR_11 &&
      (VAR_17->page_flags & VAR_3) == 0)
   continue;

  if ((VAR_17->page_code & VAR_9) !=
      (VAR_16->page_code & VAR_9))
   continue;





  if (((VAR_17->page_code & VAR_10) == 0)
   && ((VAR_16->page_code & VAR_10) == 0)) {
   VAR_19 = VAR_16->page_length;
   break;
  }





  if ((VAR_17->page_code & VAR_10)
    && (VAR_16->page_code & VAR_10)) {
   struct scsi_mode_page_header_sp *VAR_27;

   VAR_27 = (struct scsi_mode_page_header_sp *)VAR_16;
   if (VAR_17->subpage == VAR_27->subpage) {
    VAR_19 = FUNC_6(VAR_27->page_length);
    break;
   }
  }
 }





 if ((VAR_26 >= VAR_0)
  || (VAR_17->select_handler == ((void*)0))) {
  FUNC_2(VAR_18,
                        1,
                      0,
                    *VAR_24,
                        0,
                  0);
  FUNC_5(VAR_18->kern_data_ptr, VAR_8);
  FUNC_1((union ctl_io *)VAR_18);
  return (VAR_7);
 }

 if (VAR_17->page_code & VAR_10) {
  VAR_20 = 2;
  VAR_21 = 2;
 } else {
  VAR_21 = 1;
  VAR_20 = 1;
 }






 if (VAR_19 != VAR_17->page_len - VAR_20 - VAR_21) {
  FUNC_2(VAR_18,
                        1,
                      0,
                    *VAR_24 + VAR_20,
                        0,
                  0);
  FUNC_5(VAR_18->kern_data_ptr, VAR_8);
  FUNC_1((union ctl_io *)VAR_18);
  return (VAR_7);
 }
 if (*VAR_23 < VAR_17->page_len) {
  FUNC_5(VAR_18->kern_data_ptr, VAR_8);
  FUNC_3(VAR_18);
  FUNC_1((union ctl_io *)VAR_18);
  return (VAR_7);
 }





 for (VAR_26 = 0; VAR_26 < VAR_17->page_len; VAR_26++) {
  uint8_t *VAR_28, *VAR_29, *VAR_30;
  int VAR_31;
  int VAR_32;

  VAR_28 = (uint8_t *)VAR_16 + VAR_26;
  VAR_29 = VAR_17->page_data +
         (VAR_17->page_len * VAR_1) + VAR_26;
  VAR_30 = VAR_17->page_data +
          (VAR_17->page_len * VAR_2) + VAR_26;





  if ((*VAR_28 & ~(*VAR_29)) ==
      (*VAR_30 & ~(*VAR_29)))
   continue;




  VAR_31 = 0;
  for (VAR_32 = 7; VAR_32 >= 0; VAR_32--) {
   if ((((1 << VAR_26) & ~(*VAR_29)) & *VAR_28) !=
       (((1 << VAR_26) & ~(*VAR_29)) & *VAR_30)) {
    VAR_31 = VAR_26;
    break;
   }
  }
  FUNC_2(VAR_18,
                        1,
                      0,
                    *VAR_24 + VAR_26,
                        1,
                  VAR_31);
  FUNC_5(VAR_18->kern_data_ptr, VAR_8);
  FUNC_1((union ctl_io *)VAR_18);
  return (VAR_7);
 }






 *VAR_23 -= VAR_17->page_len;
 *VAR_24 += VAR_17->page_len;

 VAR_25 = VAR_17->select_handler(VAR_18, VAR_17,
         (uint8_t *)VAR_16);
 if (VAR_25 != VAR_7)
  goto bailout_no_done;




 if (*VAR_23 > 0)
  goto do_next_page;

 FUNC_4(VAR_18);
 FUNC_5(VAR_18->kern_data_ptr, VAR_8);
 FUNC_1((union ctl_io *)VAR_18);

bailout_no_done:

 return (VAR_7);

}
