
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ io_type; int flags; int * ctl_private; } ;
struct TYPE_3__ {scalar_t__* cdb; } ;
union ctl_io {TYPE_2__ io_hdr; TYPE_1__ scsiio; } ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
struct scsi_unmap_desc {int length; int lba; } ;
struct ctl_ptr_len_flags {int len; int * ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(union ctl_io *VAR_7, uint64_t VAR_8, uint64_t VAR_9)
{
 struct ctl_ptr_len_flags *VAR_10;
 struct scsi_unmap_desc *VAR_11, *VAR_12, *VAR_13;
 uint64_t VAR_14;
 uint32_t VAR_15;


 if (VAR_7->io_hdr.io_type != VAR_4 ||
     VAR_7->scsiio.cdb[0] != VAR_6)
  return (VAR_1);


 VAR_10 = (struct ctl_ptr_len_flags *)
     &VAR_7->io_hdr.ctl_private[VAR_5];
 if ((VAR_7->io_hdr.flags & VAR_3) == 0 ||
     VAR_10->ptr == ((void*)0))
  return (VAR_0);


 VAR_11 = (struct scsi_unmap_desc *)VAR_10->ptr;
 VAR_12 = VAR_11 + VAR_10->len / sizeof(*VAR_11);
 for (VAR_13 = VAR_11; VAR_13 < VAR_12; VAR_13++) {
  VAR_14 = FUNC_1(VAR_13->lba);
  VAR_15 = FUNC_0(VAR_13->length);
  if ((VAR_14 < VAR_8 + VAR_9) && (VAR_14 + VAR_15 > VAR_8))
   return (VAR_0);
 }
 return (VAR_2);
}
