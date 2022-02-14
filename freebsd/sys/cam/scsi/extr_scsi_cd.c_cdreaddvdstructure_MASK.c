
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int resid; } ;
union ccb {TYPE_1__ csio; } ;
typedef int u_int8_t ;
typedef scalar_t__ u_int32_t ;
struct scsi_read_dvd_struct_data_spare_area {int dummy; } ;
struct scsi_read_dvd_struct_data_prot_discid {int dummy; } ;
struct scsi_read_dvd_struct_data_layer_desc {int book_type_version; int disc_size_max_rate; int layer_info; int density; int bca; int end_sector_layer0; int main_data_end; int main_data_start; } ;
struct scsi_read_dvd_struct_data_physical {struct scsi_read_dvd_struct_data_layer_desc layer_desc; } ;
struct scsi_read_dvd_struct_data_medium_status {int dummy; } ;
struct scsi_read_dvd_struct_data_manufacturer {int dummy; } ;
struct scsi_read_dvd_struct_data_leadin {int dummy; } ;
struct scsi_read_dvd_struct_data_header {int dummy; } ;
struct scsi_read_dvd_struct_data_disc_key_blk {int dummy; } ;
struct scsi_read_dvd_struct_data_disc_key {int dummy; } ;
struct scsi_read_dvd_struct_data_disc_id {int dummy; } ;
struct scsi_read_dvd_struct_data_dds {int dummy; } ;
struct scsi_read_dvd_struct_data_copyright {int region_info; int cps_type; } ;
struct scsi_read_dvd_struct_data_bca {int dummy; } ;
struct dvd_struct {int length; int data; int rmi; int cpst; int format; int agid; int layer_num; } ;
struct dvd_layer {int book_type; int book_version; int disc_size; int max_rate; int nlayers; int track_path; int layer_type; int linear_density; int track_density; int bca; void* end_sector_l0; void* end_sector; void* start_sector; } ;
struct cam_periph {int dummy; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_0 (int *,int ,int ) ;
 union ccb* FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (struct cam_periph*) ;
 int FUNC_3 (struct cam_periph*) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (union ccb*,int ,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (TYPE_1__*,int ,int *,int ,scalar_t__,int ,int ,int ,int *,int,int ,int) ;
 int FUNC_10 (union ccb*) ;

__attribute__((used)) static int
FUNC_11(struct cam_periph *VAR_28, struct dvd_struct *VAR_29)
{
 union ccb *VAR_30;
 u_int8_t *VAR_31;
 u_int32_t VAR_32;
 int VAR_33;
 int VAR_34;

 VAR_33 = 0;
 VAR_31 = ((void*)0);

 VAR_32 = 0;

 switch(VAR_29->format) {
 case 134:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_physical);
  break;
 case 142:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_copyright);
  break;
 case 139:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_disc_key);
  break;
 case 144:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_bca);
  break;
 case 136:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_manufacturer);
  break;
 case 143:
  return (VAR_3);
 case 132:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_prot_discid);
  break;
 case 138:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_disc_key_blk);
  break;
 case 140:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_dds);
  break;
 case 135:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_medium_status);
  break;
 case 129:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_spare_area);
  break;
 case 131:
  return (VAR_3);
 case 130:
  return (VAR_3);
 case 133:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_leadin);
  break;
 case 128:
  VAR_34 = sizeof(struct scsi_read_dvd_struct_data_disc_id);
  break;
 case 141:
  return (VAR_3);
 case 137:







  VAR_34 = 65535;
  break;
 default:
  return (VAR_2);
 }

 if (VAR_34 != 0) {
  VAR_31 = FUNC_6(VAR_34, VAR_5, VAR_6 | VAR_7);
 } else
  VAR_31 = ((void*)0);

 FUNC_2(VAR_28);
 VAR_30 = FUNC_1(VAR_28, VAR_0);

 FUNC_9(&VAR_30->csio,
                  VAR_26,
                 ((void*)0),
                     VAR_4,
              VAR_32,
                       VAR_29->layer_num,
                     VAR_29->format,
               VAR_29->agid,
                   VAR_31,
                    VAR_34,
                    VAR_25,
                  50000);

 VAR_33 = FUNC_4(VAR_30, VAR_27, VAR_1,
                   VAR_24);

 if (VAR_33 != 0)
  goto bailout;

 switch(VAR_29->format) {
 case 134: {
  struct scsi_read_dvd_struct_data_layer_desc *VAR_35;
  struct dvd_layer *VAR_36;
  struct scsi_read_dvd_struct_data_physical *VAR_37;

  VAR_37 =
   (struct scsi_read_dvd_struct_data_physical *)VAR_31;
  VAR_35 = &VAR_37->layer_desc;
  VAR_36 = (struct dvd_layer *)&VAR_29->data;

  VAR_29->length = sizeof(*VAR_35);

  VAR_36->book_type = (VAR_35->book_type_version &
   VAR_10) >> VAR_11;
  VAR_36->book_version = (VAR_35->book_type_version &
   VAR_12);
  VAR_36->disc_size = (VAR_35->disc_size_max_rate &
   VAR_13) >> VAR_14;
  VAR_36->max_rate = (VAR_35->disc_size_max_rate &
   VAR_18);
  VAR_36->nlayers = (VAR_35->layer_info &
   VAR_19) >> VAR_20;
  VAR_36->track_path = (VAR_35->layer_info &
   VAR_22) >> VAR_23;
  VAR_36->layer_type = (VAR_35->layer_info &
   VAR_15);
  VAR_36->linear_density = (VAR_35->density &
   VAR_16) >> VAR_17;
  VAR_36->track_density = (VAR_35->density &
   VAR_21);
  VAR_36->bca = (VAR_35->bca & VAR_8) >>
   VAR_9;
  VAR_36->start_sector = FUNC_8(VAR_35->main_data_start);
  VAR_36->end_sector = FUNC_8(VAR_35->main_data_end);
  VAR_36->end_sector_l0 =
   FUNC_8(VAR_35->end_sector_layer0);
  break;
 }
 case 142: {
  struct scsi_read_dvd_struct_data_copyright *VAR_38;

  VAR_38 = (struct scsi_read_dvd_struct_data_copyright *)
   VAR_31;

  VAR_29->cpst = VAR_38->cps_type;
  VAR_29->rmi = VAR_38->region_info;
  VAR_29->length = 0;

  break;
 }
 default:




  VAR_29->length = VAR_34 - VAR_30->csio.resid -
   sizeof(struct scsi_read_dvd_struct_data_header);





  FUNC_0(VAR_31 + sizeof(struct scsi_read_dvd_struct_data_header),
        VAR_29->data,
        FUNC_7(sizeof(VAR_29->data), VAR_29->length));
  break;
 }

bailout:
 FUNC_10(VAR_30);
 FUNC_3(VAR_28);

 if (VAR_31 != ((void*)0))
  FUNC_5(VAR_31, VAR_5);

 return(VAR_33);
}
