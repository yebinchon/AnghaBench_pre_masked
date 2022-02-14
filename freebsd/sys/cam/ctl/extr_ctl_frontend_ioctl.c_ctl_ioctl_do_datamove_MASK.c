
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ctl_sg_entry {int len; struct ctl_sg_entry* addr; } ;
typedef struct ctl_sg_entry uint8_t ;
struct TYPE_2__ {int flags; int port_status; } ;
struct ctl_scsiio {int ext_data_filled; int kern_data_len; int ext_sg_entries; int ext_data_len; int kern_sg_entries; scalar_t__ kern_data_resid; TYPE_1__ io_hdr; struct ctl_sg_entry* kern_data_ptr; struct ctl_sg_entry* ext_data_ptr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 struct ctl_sg_entry* FUNC_2 (struct ctl_sg_entry*) ;
 scalar_t__ FUNC_3 (struct ctl_sg_entry*,struct ctl_sg_entry*,int) ;
 scalar_t__ FUNC_4 (struct ctl_sg_entry*,struct ctl_sg_entry*,int) ;
 int FUNC_5 (struct ctl_sg_entry*,int ) ;
 scalar_t__ FUNC_6 (int,int ,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static int
FUNC_8(struct ctl_scsiio *VAR_7)
{
 struct ctl_sg_entry *VAR_8, *VAR_9;
 struct ctl_sg_entry VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14;
 int VAR_15, VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;
 int VAR_21, VAR_22;

 FUNC_0(("ctl_ioctl_do_datamove\n"));




 if (VAR_7->io_hdr.flags & VAR_3) {
  VAR_20 = 0;
  VAR_7->ext_data_filled += VAR_7->kern_data_len;
  VAR_7->kern_data_resid = 0;
  goto bailout;
 }





 if (VAR_7->ext_sg_entries > 0) {
  int VAR_23;

  VAR_12 = VAR_7->ext_sg_entries * sizeof(*VAR_8);
  VAR_8 = (struct ctl_sg_entry *)FUNC_6(VAR_12, VAR_5,
          VAR_6);
  VAR_20 = 1;
  if (FUNC_3(VAR_7->ext_data_ptr, VAR_8, VAR_12) != 0) {
   VAR_7->io_hdr.port_status = 31343;
   goto bailout;
  }
  VAR_13 = VAR_7->ext_sg_entries;
  VAR_15 = VAR_13;
  VAR_16 = 0;
  VAR_23 = 0;
  for (VAR_21 = 0; VAR_21 < VAR_13; VAR_21++) {
   if ((VAR_23 + VAR_8[VAR_21].len) >=
        VAR_7->ext_data_filled) {
    VAR_15 = VAR_21;
    VAR_16 = VAR_7->ext_data_filled - VAR_23;
    break;
   }
   VAR_23 += VAR_8[VAR_21].len;
  }
 } else {
  VAR_8 = &VAR_10;
  VAR_20 = 0;
  VAR_8->addr = VAR_7->ext_data_ptr;
  VAR_8->len = VAR_7->ext_data_len;
  VAR_13 = 1;
  VAR_15 = 0;
  VAR_16 = VAR_7->ext_data_filled;
 }

 if (VAR_7->kern_sg_entries > 0) {
  VAR_9 = (struct ctl_sg_entry *)VAR_7->kern_data_ptr;
  VAR_14 = VAR_7->kern_sg_entries;
 } else {
  VAR_9 = &VAR_11;
  VAR_9->addr = VAR_7->kern_data_ptr;
  VAR_9->len = VAR_7->kern_data_len;
  VAR_14 = 1;
 }

 VAR_18 = 0;
 VAR_19 = VAR_16;
 for (VAR_21 = VAR_15, VAR_22 = 0;
      VAR_21 < VAR_13 && VAR_22 < VAR_14;) {
  uint8_t *VAR_24, *VAR_25;

  VAR_17 = FUNC_1(VAR_8[VAR_21].len - VAR_19,
      VAR_9[VAR_22].len - VAR_18);

  VAR_24 = (uint8_t *)VAR_8[VAR_21].addr;
  VAR_24 = VAR_24 + VAR_19;
  if (VAR_7->io_hdr.flags & VAR_0) {



   FUNC_7("need to implement bus address support");



  } else
   VAR_25 = (uint8_t *)VAR_9[VAR_22].addr;
  VAR_25 = VAR_25 + VAR_18;

  if ((VAR_7->io_hdr.flags & VAR_2) ==
       VAR_1) {
   FUNC_0(("ctl_ioctl_do_datamove: copying %d "
      "bytes to user\n", VAR_17));
   FUNC_0(("ctl_ioctl_do_datamove: from %p "
      "to %p\n", VAR_25, VAR_24));
   if (FUNC_4(VAR_25, VAR_24, VAR_17) != 0) {
    VAR_7->io_hdr.port_status = 31344;
    goto bailout;
   }
  } else {
   FUNC_0(("ctl_ioctl_do_datamove: copying %d "
      "bytes from user\n", VAR_17));
   FUNC_0(("ctl_ioctl_do_datamove: from %p "
      "to %p\n", VAR_24, VAR_25));
   if (FUNC_3(VAR_24, VAR_25, VAR_17)!= 0){
    VAR_7->io_hdr.port_status = 31345;
    goto bailout;
   }
  }

  VAR_7->ext_data_filled += VAR_17;
  VAR_7->kern_data_resid -= VAR_17;

  VAR_19 += VAR_17;
  if (VAR_8[VAR_21].len == VAR_19) {
   VAR_21++;
   VAR_19 = 0;
  }

  VAR_18 += VAR_17;
  if (VAR_9[VAR_22].len == VAR_18) {
   VAR_22++;
   VAR_18 = 0;
  }
 }

 FUNC_0(("ctl_ioctl_do_datamove: ext_sg_entries: %d, "
    "kern_sg_entries: %d\n", VAR_13,
    VAR_14));
 FUNC_0(("ctl_ioctl_do_datamove: ext_data_len = %d, "
    "kern_data_len = %d\n", VAR_7->ext_data_len,
    VAR_7->kern_data_len));

bailout:
 if (VAR_20 != 0)
  FUNC_5(VAR_8, VAR_5);

 return (VAR_4);
}
