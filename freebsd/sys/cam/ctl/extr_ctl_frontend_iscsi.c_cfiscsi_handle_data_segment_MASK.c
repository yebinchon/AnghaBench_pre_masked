
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int kern_sg_entries; size_t kern_data_ptr; size_t kern_data_len; size_t kern_rel_offset; size_t ext_data_filled; size_t kern_data_resid; int kern_total_len; } ;
struct TYPE_4__ {int flags; } ;
union ctl_io {TYPE_3__ scsiio; TYPE_1__ io_hdr; } ;
struct iscsi_bhs_data_out {int bhsdo_flags; int bhsdo_buffer_offset; } ;
struct icl_pdu {TYPE_2__* ip_bhs; int ip_data_len; } ;
struct ctl_sg_entry {size_t addr; size_t len; } ;
struct cfiscsi_session {int dummy; } ;
struct cfiscsi_data_wait {int cdw_sg_index; size_t cdw_sg_len; size_t cdw_sg_addr; size_t cdw_r2t_end; int cdw_target_transfer_tag; union ctl_io* cdw_ctl_io; } ;
struct TYPE_5__ {int bhs_opcode; } ;


 int VAR_0 ;
 int FUNC_0 (struct cfiscsi_session*,char*,int ,...) ;
 int FUNC_1 (struct cfiscsi_session*,char*,size_t,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int,char*) ;
 struct cfiscsi_session* FUNC_3 (struct icl_pdu*) ;
 int FUNC_4 (struct cfiscsi_session*) ;
 int FUNC_5 (TYPE_3__*) ;
 size_t FUNC_6 (struct icl_pdu*) ;
 int FUNC_7 (struct icl_pdu*,size_t,size_t,size_t) ;
 size_t FUNC_8 (int ) ;

__attribute__((used)) static bool
FUNC_9(struct icl_pdu *VAR_6, struct cfiscsi_data_wait *VAR_7)
{
 struct iscsi_bhs_data_out *VAR_8;
 struct cfiscsi_session *VAR_9;
 struct ctl_sg_entry VAR_10, *VAR_11;
 size_t VAR_12, VAR_13, VAR_14, VAR_15;
 int VAR_16;
 union ctl_io *VAR_17;

 VAR_9 = FUNC_3(VAR_6);

 FUNC_2((VAR_6->ip_bhs->bhs_opcode & ~VAR_3) ==
     VAR_5 ||
     (VAR_6->ip_bhs->bhs_opcode & ~VAR_3) ==
     VAR_4,
     ("bad opcode 0x%x", VAR_6->ip_bhs->bhs_opcode));




 VAR_8 = (struct iscsi_bhs_data_out *)VAR_6->ip_bhs;

 VAR_17 = VAR_7->cdw_ctl_io;
 FUNC_2((VAR_17->io_hdr.flags & VAR_2) != VAR_1,
     ("CTL_FLAG_DATA_IN"));






 if (VAR_17->scsiio.kern_sg_entries > 0) {
  VAR_11 = (struct ctl_sg_entry *)VAR_17->scsiio.kern_data_ptr;
  VAR_16 = VAR_17->scsiio.kern_sg_entries;
 } else {
  VAR_11 = &VAR_10;
  VAR_11->addr = VAR_17->scsiio.kern_data_ptr;
  VAR_11->len = VAR_17->scsiio.kern_data_len;
  VAR_16 = 1;
 }

 if ((VAR_6->ip_bhs->bhs_opcode & ~VAR_3) ==
     VAR_5)
  VAR_15 = FUNC_8(VAR_8->bhsdo_buffer_offset);
 else
  VAR_15 = 0;
 VAR_13 = FUNC_6(VAR_6);





 if (VAR_15 >
     VAR_17->scsiio.kern_rel_offset + VAR_17->scsiio.ext_data_filled ||
     VAR_15 + VAR_13 <=
     VAR_17->scsiio.kern_rel_offset + VAR_17->scsiio.ext_data_filled) {
  FUNC_1(VAR_9, "received bad buffer offset %zd, "
      "expected %zd; dropping connection", VAR_15,
      (size_t)VAR_17->scsiio.kern_rel_offset +
      (size_t)VAR_17->scsiio.ext_data_filled);
  FUNC_5(&VAR_17->scsiio);
  FUNC_4(VAR_9);
  return (1);
 }






 VAR_14 = VAR_17->scsiio.kern_rel_offset + VAR_17->scsiio.ext_data_filled -
     VAR_15;







 for (;;) {
  FUNC_2(VAR_7->cdw_sg_index < VAR_16,
      ("cdw->cdw_sg_index >= ctl_sg_count"));
  if (VAR_7->cdw_sg_len == 0) {
   VAR_7->cdw_sg_addr = VAR_11[VAR_7->cdw_sg_index].addr;
   VAR_7->cdw_sg_len = VAR_11[VAR_7->cdw_sg_index].len;
  }
  FUNC_2(VAR_14 <= VAR_13, ("len > off"));
  VAR_12 = VAR_13 - VAR_14;
  if (VAR_12 > VAR_7->cdw_sg_len)
   VAR_12 = VAR_7->cdw_sg_len;

  FUNC_7(VAR_6, VAR_14, VAR_7->cdw_sg_addr, VAR_12);
  VAR_7->cdw_sg_addr += VAR_12;
  VAR_7->cdw_sg_len -= VAR_12;
  VAR_14 += VAR_12;
  VAR_17->scsiio.ext_data_filled += VAR_12;
  VAR_17->scsiio.kern_data_resid -= VAR_12;

  if (VAR_7->cdw_sg_len == 0) {



   if (VAR_7->cdw_sg_index == VAR_16 - 1) {



    break;
   }
   VAR_7->cdw_sg_index++;
  }

  if (VAR_14 == VAR_13) {



   break;
  }
 }

 if (VAR_13 > VAR_14) {
  if ((VAR_6->ip_bhs->bhs_opcode & ~VAR_3) ==
      VAR_4)
   return (1);

  FUNC_1(VAR_9, "received too much data: got %zd bytes, "
      "expected %zd; dropping connection",
      FUNC_6(VAR_6), VAR_14);
  FUNC_5(&VAR_17->scsiio);
  FUNC_4(VAR_9);
  return (1);
 }

 if (VAR_17->scsiio.ext_data_filled == VAR_7->cdw_r2t_end &&
     (VAR_8->bhsdo_flags & VAR_0) == 0) {
  FUNC_1(VAR_9, "got the final packet without "
      "the F flag; flags = 0x%x; dropping connection",
      VAR_8->bhsdo_flags);
  FUNC_5(&VAR_17->scsiio);
  FUNC_4(VAR_9);
  return (1);
 }

 if (VAR_17->scsiio.ext_data_filled != VAR_7->cdw_r2t_end &&
     (VAR_8->bhsdo_flags & VAR_0) != 0) {
  if ((VAR_6->ip_bhs->bhs_opcode & ~VAR_3) ==
      VAR_5) {
   FUNC_1(VAR_9, "got the final packet, but the "
       "transmitted size was %zd bytes instead of %d; "
       "dropping connection",
       (size_t)VAR_17->scsiio.ext_data_filled,
       VAR_7->cdw_r2t_end);
   FUNC_5(&VAR_17->scsiio);
   FUNC_4(VAR_9);
   return (1);
  } else {




   return (0);
  }
 }

 if (VAR_17->scsiio.ext_data_filled == VAR_7->cdw_r2t_end) {





  return (1);
 }

 return (0);
}
