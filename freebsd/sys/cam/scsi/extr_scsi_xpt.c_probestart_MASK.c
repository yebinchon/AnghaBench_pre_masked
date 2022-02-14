
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int flags; int path; } ;
struct ccb_scsiio {int * data_ptr; } ;
union ccb {TYPE_1__ ccb_h; struct ccb_scsiio csio; } ;
typedef int uint8_t ;
typedef int u_int8_t ;
typedef int u_int ;
struct scsi_vpd_unit_serial_number {int dummy; } ;
struct scsi_vpd_supported_page_list {int dummy; } ;
struct scsi_vpd_extended_inquiry_data {int dummy; } ;
struct scsi_vpd_device_id {int dummy; } ;
struct scsi_mode_header_6 {int dummy; } ;
struct scsi_mode_blk_desc {int dummy; } ;
struct scsi_inquiry_data {int dummy; } ;
struct scsi_control_page {int dummy; } ;
struct cam_periph {TYPE_4__* path; scalar_t__ softc; } ;
struct cam_ed {int flags; int serial_num_len; unsigned char* serial_num; struct scsi_inquiry_data inq_data; } ;
struct TYPE_10__ {int action; int flags; int context; int digest; } ;
typedef TYPE_3__ probe_softc ;
struct TYPE_12__ {int quirks; } ;
struct TYPE_11__ {struct cam_ed* device; TYPE_2__* target; } ;
struct TYPE_9__ {int rpl_size; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct scsi_inquiry_data*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;







 int VAR_9 ;


 int VAR_10 ;

 int FUNC_5 (TYPE_3__*,int const) ;



 int VAR_11 ;
 TYPE_6__* FUNC_6 (struct cam_ed*) ;
 int VAR_12 ;
 int FUNC_7 (struct scsi_inquiry_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (struct cam_periph*) ;
 int FUNC_10 (unsigned char*,int ) ;
 void* FUNC_11 (int,int ,int) ;
 int FUNC_12 (char*,int const) ;
 int FUNC_13 (struct cam_periph*,union ccb*) ;
 int FUNC_14 (int,int) ;
 int FUNC_15 (struct ccb_scsiio*,int,int (*) (struct cam_periph*,union ccb*),int ,int *,int,int ,int ,int ,int) ;
 int FUNC_16 (struct ccb_scsiio*,int,int (*) (struct cam_periph*,union ccb*),int ,int ,int ,int ,void*,int,int ,int) ;
 int FUNC_17 (struct ccb_scsiio*,int,int (*) (struct cam_periph*,union ccb*),int ,int ,void*,int,int ,int) ;
 int FUNC_18 (struct ccb_scsiio*,int,int (*) (struct cam_periph*,union ccb*),int ,int ,int) ;
 int FUNC_19 (struct cam_periph*,int ) ;
 int FUNC_20 (union ccb*) ;
 int FUNC_21 (TYPE_4__*,char*) ;

__attribute__((used)) static void
FUNC_22(struct cam_periph *VAR_23, union ccb *VAR_24)
{

 struct ccb_scsiio *VAR_25;
 probe_softc *VAR_26;

 FUNC_0(VAR_24->ccb_h.path, VAR_0, ("probestart\n"));

 VAR_26 = (probe_softc *)VAR_23->softc;
 VAR_25 = &VAR_24->csio;
again:

 switch (VAR_26->action) {
 case 129:
 case 128:
 case 139:
 {
  FUNC_18(VAR_25,
                    4,
         FUNC_13,
         VAR_5,
         VAR_15,
                    60000);
  break;
 }
 case 136:
 case 137:
 case 135:
 case 134:
 {
  u_int VAR_27;
  struct scsi_inquiry_data *VAR_28;

  VAR_28 = &VAR_23->path->device->inq_data;
  if (((VAR_23->path->device->flags & VAR_2) == 0)
   && ((VAR_26->flags & VAR_9) == 0)) {

   FUNC_3(&VAR_26->context);
   FUNC_4(&VAR_26->context, (unsigned char *)VAR_28,
      sizeof(struct scsi_inquiry_data));
   VAR_26->flags |= VAR_9;
   if (VAR_23->path->device->serial_num_len > 0) {
    FUNC_4(&VAR_26->context,
       VAR_23->path->device->serial_num,
       VAR_23->path->device->serial_num_len);
    VAR_26->flags |= VAR_10;
   }
   FUNC_2(VAR_26->digest, &VAR_26->context);
  }

  if (VAR_26->action == 136)
   VAR_27 = VAR_12;
  else
   VAR_27 = FUNC_7(VAR_28);







  VAR_27 = FUNC_14(VAR_27, 2);

  if (VAR_26->action == 135
   || VAR_26->action == 134) {
   VAR_28 = FUNC_11(VAR_27, VAR_6, VAR_7);
  }
  if (VAR_28 == ((void*)0)) {
   FUNC_21(VAR_23->path, "malloc failure- skipping Basic"
       "Domain Validation\n");
   FUNC_5(VAR_26, 139);
   FUNC_18(VAR_25,
                     4,
          FUNC_13,
          VAR_5,
          VAR_15,
                     60000);
   break;
  }
  FUNC_15(VAR_25,
                   4,
        FUNC_13,
        VAR_5,
        (u_int8_t *)VAR_28,
        VAR_27,
                VAR_4,
                     0,
        VAR_16,
                   60 * 1000);
  break;
 }
 case 132:
 {
  void *VAR_29;

  VAR_29 = FUNC_11(VAR_23->path->target->rpl_size,
      VAR_6, VAR_7 | VAR_8);
  if (VAR_29 == ((void*)0)) {
   struct scsi_inquiry_data *VAR_30;
   VAR_30 = &VAR_23->path->device->inq_data;
   FUNC_21(VAR_23->path,
       "Unable to alloc report luns storage\n");
   if (FUNC_1(VAR_30))
    FUNC_5(VAR_26, 133);
   else
    FUNC_5(VAR_26,
        130);
   goto again;
  }
  FUNC_17(VAR_25, 5, FUNC_13, VAR_5,
      VAR_11, VAR_29, VAR_23->path->target->rpl_size,
      VAR_15, 60000); break;
  break;
 }
 case 133:
 {
  void *VAR_31;
  int VAR_32;

  VAR_32 = sizeof(struct scsi_mode_header_6)
        + sizeof(struct scsi_mode_blk_desc)
        + sizeof(struct scsi_control_page);
  VAR_31 = FUNC_11(VAR_32, VAR_6, VAR_7);
  if (VAR_31 != ((void*)0)) {
                 FUNC_16(VAR_25,
                4,
     FUNC_13,
     VAR_5,
            VAR_4,
     VAR_14,
     VAR_13,
     VAR_31,
     VAR_32,
     VAR_15,
                60000);
   break;
  }
  FUNC_21(VAR_23->path, "Unable to mode sense control page - "
      "malloc failure\n");
  FUNC_5(VAR_26, 130);
 }

 case 130:
 {
  struct scsi_vpd_supported_page_list *VAR_33;
  struct cam_ed *VAR_34;

  VAR_33 = ((void*)0);
  VAR_34 = VAR_23->path->device;

  if ((FUNC_6(VAR_34)->quirks & VAR_3) == 0)
   VAR_33 = FUNC_11(sizeof(*VAR_33), VAR_6,
       VAR_7 | VAR_8);

  if (VAR_33 != ((void*)0)) {
   FUNC_15(VAR_25,
                    4,
         FUNC_13,
         VAR_5,
         (u_int8_t *)VAR_33,
         sizeof(*VAR_33),
                 VAR_22,
         VAR_20,
         VAR_16,
                    60 * 1000);
   break;
  }
done:




  VAR_24->csio.data_ptr = ((void*)0);
  FUNC_8(VAR_23->path);
  FUNC_9(VAR_23);
  FUNC_13(VAR_23, VAR_24);
  return;
 }
 case 140:
 {
  struct scsi_vpd_device_id *VAR_35;

  VAR_35 = ((void*)0);
  if (FUNC_19(VAR_23, VAR_17))
   VAR_35 = FUNC_11(VAR_18, VAR_6,
       VAR_7 | VAR_8);

  if (VAR_35 != ((void*)0)) {
   FUNC_15(VAR_25,
                    4,
         FUNC_13,
         VAR_5,
         (uint8_t *)VAR_35,
         VAR_18,
                 VAR_22,
         VAR_17,
         VAR_16,
                    60 * 1000);
   break;
  }
  goto done;
 }
 case 138:
 {
  struct scsi_vpd_extended_inquiry_data *VAR_36;

  VAR_36 = ((void*)0);
  if (FUNC_19(VAR_23, VAR_19))
   VAR_36 = FUNC_11(sizeof(*VAR_36), VAR_6,
       VAR_7 | VAR_8);

  if (VAR_36 != ((void*)0)) {
   FUNC_15(VAR_25,
                    4,
         FUNC_13,
         VAR_5,
         (uint8_t *)VAR_36,
         sizeof(*VAR_36),
                 VAR_22,
         VAR_19,
         VAR_16,
                    60 * 1000);
   break;
  }




  goto done;
 }
 case 131:
 {
  struct scsi_vpd_unit_serial_number *VAR_37;
  struct cam_ed* VAR_38;

  VAR_37 = ((void*)0);
  VAR_38 = VAR_23->path->device;
  if (VAR_38->serial_num != ((void*)0)) {
   FUNC_10(VAR_38->serial_num, VAR_6);
   VAR_38->serial_num = ((void*)0);
   VAR_38->serial_num_len = 0;
  }

  if (FUNC_19(VAR_23, VAR_21))
   VAR_37 = (struct scsi_vpd_unit_serial_number *)
    FUNC_11(sizeof(*VAR_37), VAR_6,
        VAR_7|VAR_8);

  if (VAR_37 != ((void*)0)) {
   FUNC_15(VAR_25,
                    4,
         FUNC_13,
         VAR_5,
         (u_int8_t *)VAR_37,
         sizeof(*VAR_37),
                 VAR_22,
         VAR_21,
         VAR_16,
                    60 * 1000);
   break;
  }
  goto done;
 }
 default:
  FUNC_12("probestart: invalid action state 0x%x\n", VAR_26->action);
 }
 VAR_24->ccb_h.flags |= VAR_1;
 FUNC_9(VAR_23);
 FUNC_20(VAR_24);
}
