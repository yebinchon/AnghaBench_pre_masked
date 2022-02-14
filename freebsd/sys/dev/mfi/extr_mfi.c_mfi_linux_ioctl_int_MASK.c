
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef union mfi_sgl {int dummy; } mfi_sgl ;
struct TYPE_13__ {int high; } ;
union mfi_sense_ptr {int * user_space; TYPE_4__ addr; TYPE_9__* sense_ptr_data; } ;
struct TYPE_14__ {int cmd_status; } ;
struct TYPE_15__ {TYPE_5__ hdr; int * raw; } ;
struct mfi_linux_ioc_packet {int lioc_sge_count; size_t lioc_sgl_off; int lioc_sense_len; size_t lioc_sense_off; int laen_class_locale; int laen_seq_num; TYPE_8__* p; TYPE_6__ lioc_frame; TYPE_3__* lioc_sgl; } ;
typedef struct mfi_linux_ioc_packet uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
typedef int u_long ;
struct thread {int dummy; } ;
struct mfi_softc {int mfi_dev; int mfi_io_lock; int mfi_aen_pids; } ;
struct mfi_linux_ioc_aen {int lioc_sge_count; size_t lioc_sgl_off; int lioc_sense_len; size_t lioc_sense_off; int laen_class_locale; int laen_seq_num; TYPE_8__* p; TYPE_6__ lioc_frame; TYPE_3__* lioc_sgl; } ;
struct mfi_command {int cm_flags; int cm_len; TYPE_9__* cm_frame; struct mfi_linux_ioc_packet* cm_sense; int cm_sense_busaddr; struct mfi_linux_ioc_packet* cm_data; union mfi_sgl* cm_sg; int cm_total_frame_size; } ;
struct mfi_aen {int lioc_sge_count; size_t lioc_sgl_off; int lioc_sense_len; size_t lioc_sense_off; int laen_class_locale; int laen_seq_num; TYPE_8__* p; TYPE_6__ lioc_frame; TYPE_3__* lioc_sgl; } ;
struct cdev {struct mfi_softc* si_drv1; } ;
typedef int l_ioc ;
typedef int l_aen ;
typedef int * caddr_t ;
struct TYPE_16__ {int flags; int data_len; struct mfi_linux_ioc_packet cmd_status; int cmd; void* context; int pad0; int scsi_status; } ;
struct TYPE_11__ {void* sense_addr_hi; void* sense_addr_lo; } ;
struct TYPE_10__ {int opcode; } ;
struct TYPE_18__ {TYPE_7__ header; TYPE_2__ pass; TYPE_1__ dcmd; int * bytes; } ;
struct TYPE_17__ {int p_pid; } ;
struct TYPE_12__ {int iov_len; int iov_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;


 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,struct mfi_linux_ioc_packet*,int ) ;
 int FUNC_2 (int *,struct mfi_linux_ioc_packet*,int ) ;
 int VAR_14 ;
 int FUNC_3 (int *,TYPE_9__*,int) ;
 int FUNC_4 (int *,struct mfi_linux_ioc_packet*,int) ;
 int FUNC_5 (struct mfi_linux_ioc_packet*,int *,int) ;
 TYPE_8__* VAR_15 ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct mfi_linux_ioc_packet*,int ) ;
 struct mfi_linux_ioc_packet* FUNC_8 (int,int ,int) ;
 int FUNC_9 (struct mfi_softc*,int ,int ) ;
 int FUNC_10 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_11 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_12 (struct mfi_softc*,int ) ;
 int FUNC_13 (struct mfi_softc*,int) ;
 struct mfi_command* FUNC_14 (struct mfi_softc*) ;
 int FUNC_15 (struct mfi_command*) ;
 int FUNC_16 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (char*,int) ;

__attribute__((used)) static int
FUNC_20(struct cdev *VAR_16, u_long VAR_17, caddr_t VAR_18, int VAR_19, struct thread *VAR_20)
{
 struct mfi_softc *VAR_21;
 struct mfi_linux_ioc_packet VAR_22;
 struct mfi_linux_ioc_aen VAR_23;
 struct mfi_command *VAR_24 = ((void*)0);
 struct mfi_aen *VAR_25;
 union mfi_sense_ptr VAR_26;
 uint32_t VAR_27 = 0;
 uint8_t *VAR_28 = ((void*)0), *VAR_29;
 int VAR_30;
 int VAR_31, VAR_32;

 VAR_21 = VAR_16->si_drv1;
 VAR_31 = 0;
 switch (VAR_17) {
 case 129:
  VAR_31 = FUNC_4(VAR_18, &VAR_22, sizeof(VAR_22));
  if (VAR_31 != 0)
   return (VAR_31);

  if (VAR_22.lioc_sge_count > VAR_3) {
   return (VAR_1);
  }

  FUNC_17(&VAR_21->mfi_io_lock);
  if ((VAR_24 = FUNC_14(VAR_21)) == ((void*)0)) {
   FUNC_18(&VAR_21->mfi_io_lock);
   return (VAR_0);
  }
  FUNC_18(&VAR_21->mfi_io_lock);
  VAR_32 = 0;





  VAR_27 = VAR_24->cm_frame->header.context;

  FUNC_3(VAR_22.lioc_frame.raw, VAR_24->cm_frame,
        2 * VAR_8);
  VAR_24->cm_total_frame_size = (sizeof(union mfi_sgl)
        * VAR_22.lioc_sge_count) + VAR_22.lioc_sgl_off;
  VAR_24->cm_frame->header.scsi_status = 0;
  VAR_24->cm_frame->header.pad0 = 0;
  if (VAR_22.lioc_sge_count)
   VAR_24->cm_sg =
       (union mfi_sgl *)&VAR_24->cm_frame->bytes[VAR_22.lioc_sgl_off];
  VAR_24->cm_flags = 0;
  if (VAR_24->cm_frame->header.flags & VAR_9)
   VAR_24->cm_flags |= VAR_4;
  if (VAR_24->cm_frame->header.flags & VAR_10)
   VAR_24->cm_flags |= VAR_5;
  VAR_24->cm_len = VAR_24->cm_frame->header.data_len;
  if (VAR_24->cm_len &&
        (VAR_24->cm_flags & (VAR_4 | VAR_5))) {
   VAR_24->cm_data = VAR_28 = FUNC_8(VAR_24->cm_len, VAR_11,
       VAR_12 | VAR_13);
  } else {
   VAR_24->cm_data = 0;
  }


  VAR_24->cm_frame->header.context = VAR_27;

  VAR_29 = VAR_28;
  if (VAR_24->cm_flags & VAR_5) {
   for (VAR_30 = 0; VAR_30 < VAR_22.lioc_sge_count; VAR_30++) {
    VAR_31 = FUNC_4(FUNC_0(VAR_22.lioc_sgl[VAR_30].iov_base),
           VAR_29,
           VAR_22.lioc_sgl[VAR_30].iov_len);
    if (VAR_31 != 0) {
     FUNC_6(VAR_21->mfi_dev,
         "Copy in failed\n");
     goto out;
    }
    VAR_29 = &VAR_29[VAR_22.lioc_sgl[VAR_30].iov_len];
   }
  }

  if (VAR_24->cm_frame->header.cmd == VAR_6)
   VAR_32 = FUNC_12(VAR_21, VAR_24->cm_frame->dcmd.opcode);

  if (VAR_24->cm_frame->header.cmd == VAR_7) {
   VAR_24->cm_frame->pass.sense_addr_lo =
       (uint32_t)VAR_24->cm_sense_busaddr;
   VAR_24->cm_frame->pass.sense_addr_hi =
       (uint32_t)((uint64_t)VAR_24->cm_sense_busaddr >> 32);
  }

  FUNC_17(&VAR_21->mfi_io_lock);
  VAR_31 = FUNC_11(VAR_21, VAR_24);
  if (VAR_31) {
   FUNC_18(&VAR_21->mfi_io_lock);
   goto out;
  }

  if ((VAR_31 = FUNC_16(VAR_21, VAR_24)) != 0) {
   FUNC_6(VAR_21->mfi_dev,
       "Controller polled failed\n");
   FUNC_18(&VAR_21->mfi_io_lock);
   goto out;
  }

  FUNC_10(VAR_21, VAR_24);
  FUNC_18(&VAR_21->mfi_io_lock);

  VAR_29 = VAR_28;
  if (VAR_24->cm_flags & VAR_4) {
   for (VAR_30 = 0; VAR_30 < VAR_22.lioc_sge_count; VAR_30++) {
    VAR_31 = FUNC_5(VAR_29,
     FUNC_0(VAR_22.lioc_sgl[VAR_30].iov_base),
     VAR_22.lioc_sgl[VAR_30].iov_len);
    if (VAR_31 != 0) {
     FUNC_6(VAR_21->mfi_dev,
         "Copy out failed\n");
     goto out;
    }
    VAR_29 = &VAR_29[VAR_22.lioc_sgl[VAR_30].iov_len];
   }
  }

  if (VAR_22.lioc_sense_len) {

   FUNC_3(&((struct mfi_linux_ioc_packet*)VAR_18)
                            ->lioc_frame.raw[VAR_22.lioc_sense_off],
       &VAR_26.sense_ptr_data[0],
       sizeof(VAR_26.sense_ptr_data));





   VAR_26.addr.high = 0;

   VAR_31 = FUNC_5(VAR_24->cm_sense, VAR_26.user_space,
       VAR_22.lioc_sense_len);
   if (VAR_31 != 0) {
    FUNC_6(VAR_21->mfi_dev,
        "Copy out failed\n");
    goto out;
   }
  }

  VAR_31 = FUNC_5(&VAR_24->cm_frame->header.cmd_status,
   &((struct mfi_linux_ioc_packet*)VAR_18)
   ->lioc_frame.hdr.cmd_status,
   1);
  if (VAR_31 != 0) {
   FUNC_6(VAR_21->mfi_dev,
          "Copy out failed\n");
   goto out;
  }

out:
  FUNC_13(VAR_21, VAR_32);
  if (VAR_28)
   FUNC_7(VAR_28, VAR_11);
  if (VAR_24) {
   FUNC_17(&VAR_21->mfi_io_lock);
   FUNC_15(VAR_24);
   FUNC_18(&VAR_21->mfi_io_lock);
  }

  return (VAR_31);
 case 128:
  VAR_31 = FUNC_4(VAR_18, &VAR_23, sizeof(VAR_23));
  if (VAR_31 != 0)
   return (VAR_31);
  FUNC_19("AEN IMPLEMENTED for pid %d\n", VAR_15->p_pid);
  VAR_25 = FUNC_8(sizeof(struct mfi_aen), VAR_11,
      VAR_12);
  FUNC_17(&VAR_21->mfi_io_lock);
  if (VAR_25 != ((void*)0)) {
   VAR_25->p = VAR_15;
   FUNC_1(&VAR_21->mfi_aen_pids, VAR_25,
       VAR_14);
  }
  VAR_31 = FUNC_9(VAR_21, VAR_23.laen_seq_num,
      VAR_23.laen_class_locale);

  if (VAR_31 != 0) {
   FUNC_2(&VAR_21->mfi_aen_pids, VAR_25,
       VAR_14);
   FUNC_7(VAR_25, VAR_11);
  }
  FUNC_18(&VAR_21->mfi_io_lock);

  return (VAR_31);
 default:
  FUNC_6(VAR_21->mfi_dev, "IOCTL 0x%lx not handled\n", VAR_17);
  VAR_31 = VAR_2;
  break;
 }

 return (VAR_31);
}
